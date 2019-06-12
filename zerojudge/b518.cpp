#include<iostream>
#include<vector>

#define ll long long
#define endl '\n'

using namespace std;

vector<ll>tree[1005];
ll par[1005],root,vis[1005];

void dfs(int start,vector<ll> path){
    vis[start]=1;
    for(int i:tree[start]){
        if(vis[i]==0){
            path.push_back(i);
            dfs(i,path);
            path.pop_back();
        }
    }
    if(tree[start].size()==0){
        for(int i:path){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return ;
}

int main(){
    int N;
    cin>>N;
    while(N--){
        int m;
        cin>>m;
        for(int i=0;i<m;i++){
            int x,y;
            string s;
            cin>>s;
            cin>>x>>y;
            tree[y].push_back(x);
            par[x]=y;
        }
        for(int i=0;i<m;i++){
            if(par[i]==99)root=i;
            vector<ll> path;
            dfs(root,path);
            break;
        }
    }

    return 0;
}