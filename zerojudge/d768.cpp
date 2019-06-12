#include<iostream>
#include<vector>
#include<string.h>
 
#define ll long long
#define endl '\n'
 
using namespace std;
 
vector<ll> v[10005];
 

 
bool dfs(int start,int color,vector<ll>&colors){
    int change_color=(color+1)%2;
    bool ans=true;
    if(colors[start]!=-1){
        if(colors[start]!=color)return false;
        else if(colors[start]==color)return true;
    }
    colors[start]=color;
    for(int i:v[start]){
        if(dfs(i,change_color,colors)==false){
            ans=false;
            break;
        }
    }
    
    return ans;
}
 
 
int main(){
    int n,m;
    while(cin>>n){
        if(n==0)return 0;
        cin>>m;
        for(int i=0;i<n;i++)v[i].clear();
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        vector<ll>colors(n,-1);
        if(dfs(0,0,colors))cout<<"BICOLORABLE."<<endl;
        else cout<<"NOT BICOLORABLE."<<endl;
    }
 
    return 0;
}