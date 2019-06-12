#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<string.h>

#define ll int 
#define endl '\n'
#define max 100005

using namespace std;

struct pos{
    int x,y;
};

bool cmp(pos l,pos r){
    return l.x<r.x;
}

ll n,r[max];
vector<ll> map[max];
stack<ll> q;
ll cnt[max],vis[max];

pos cntt[max];



int dfs(ll start){
    memset(cnt,0,max);
    memset(vis,0,max);
    while(!q.empty()){
        q.pop();
    }
    vis[start]=1;
    q.push(start);
    
    while(!q.empty()){
        int a=q.top();
        
        q.pop();
        for(int i=0;i<map[a].size();i++){
            if(vis[map[a][i]]==0){
                q.push(map[a][i]);
                vis[map[a][i]]=1;
                cnt[map[a][i]]=cnt[a]+1;
            }
        }
    }
    sort(cnt,cnt+n);
    // for(int i=1;i<n-1;i++){
    //     cout<<""<<cnt[i]<<endl;
    // }
    return cnt[n-1];
}


int main(){
    while(cin>>n){
        ios::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        memset(map,0,max);
        for(int i=0;i<n-1;i++){
            int m,n;
            cin>>m>>n;
            map[m].push_back(n);
            map[n].push_back(m);
            cntt[m].x++;
            cntt[m].y=m;
            cntt[n].x++;
            cntt[n].y=n;
        }
        sort(cntt,cntt+n,cmp);
        
        for(int i=0;i<n;i++){
            r[i]=dfs(cntt[i].y);
        }
        sort(r,r+n);
        cout<<r[n-1]<<endl;
        
        
    }



    return 0;
}