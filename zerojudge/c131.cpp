#include<iostream>
#include<vector>
#include<set>

#define ll long long
#define endl '\n'

using namespace std;

vector<ll> tree[10005];
vector<ll>par[10005];
ll cnt=1,ma,root,num;
set<ll>src;

set<ll>::iterator it;

void dfs(int start){
    for(int i:tree[start]){
        num++;
        dfs(i);
    }
    return ;
}

bool check(){
    int b=0;
    for(it=src.begin();it!=src.end();it++){
        //cout<<*it<<" "<<par[*it].size()<<endl;
        if(par[*it].size()==0){
            root=*it;
            b++;
        }
        
    }
    if(b==0)return false;//沒有root不為樹
    else if(b>1)return false;
    else{
        dfs(root);
        if(num==src.size()-1)return true;
        else return false;
    }

}

int main(){
    int x,y;
    while(cin>>x>>y){
        if(x==0&&y==0){
            cout<<"Case "<<cnt;
            cnt++;
            if(src.size()==0){
                cout<<" is a tree."<<endl;
                continue;
            }
            if(check())cout<<" is a tree."<<endl;
            else cout<<" is not a tree."<<endl;
            for(int i=0;i<10005;i++){
                tree[i].clear();
                par[i].clear();
            }
            src.clear();
            num=0;
        }else if(x<0&&y<0)return 0;
        else {
            tree[x].push_back(y);
            par[y].push_back(x);
            src.insert(x);
            src.insert(y);
        }
    }

    return 0;
}