#include<iostream>
#include<vector>
#include <numeric>

#define ll long long
#define endl '\n'
#define MAX 100005

using namespace std;

vector<ll> map[MAX];
ll par[MAX],mroot,maxk;
ll h,sum=0;
vector<ll> dp;


ll dfs(int start){
    ll h=0;
    if(dp[start-1]!=-1)
        return dp[start-1];
    for(int i=0;i<map[start].size();i++){
        h=max(h,dfs(map[start][i])+1);
    }
    dp[start-1] = h;
    return h;
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        for(int y=0;y<x;y++){
            int a;
            cin>>a;
            par[a]=i;
            map[i].push_back(a);
        }
    }
    dp = vector<ll>(n, -1);
    for(int i=1;i<=n;i++){
        if(par[i]==0){
            mroot=i;
            dfs(mroot);
            cout<<mroot<<endl;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(dp[i]!=-1){
            sum+=dp[i];
        }
    }
    ll ans = accumulate(dp.cbegin(), dp.cend(), 0);
    cout<<sum<<endl;
    return 0;
}
// #include<iostream>
// #include<vector>
// #include <numeric>
// #include<string.h>

// #define ll long long
// #define endl '\n'
// #define MAX 100005

// using namespace std;

// vector<ll> map[MAX];
// ll par[MAX],mroot,maxk;
// ll h,sum=0;
// //vector<ll> dp;
// ll dp[MAX];
// ll vis[MAX];

// ll dfs(int start){
//     ll h=0;
//     if(vis[start]==1)
//         return dp[start-1];
//     for(int i=0;i<map[start].size();i++){
//         vis[start]=1;
//         h=max(h,dfs(map[start][i])+1);
//     }
//     dp[start-1] = h;
//     return h;
// }

// int main(){
//     int n;
//     cin>>n;
//     memset(dp,0,sizeof(dp));
//     memset(vis,0,sizeof(vis));
//     for(int i=1;i<=n;i++){
//         int x;
//         cin>>x;
//         for(int y=0;y<x;y++){
//             int a;
//             cin>>a;
//             par[a]=i;
//             map[i].push_back(a);
//         }
//     }
//     for(int i=1;i<=n;i++){
//         if(par[i]==0){
//             mroot=i;
//             dfs(mroot);
//             cout<<mroot<<endl;
//             break;
//         }
//     }
//     for(int i=0;i<n;i++){
//         sum+=dp[i];
//     }
//     cout<<sum<<endl;
//     return 0;
// }