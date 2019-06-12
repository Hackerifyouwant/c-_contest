#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<map>
#define INF 0x3f3f3f3f
using namespace std;
int m1[300010],m2[300010];
int n,m,x,y,pos1,pos2,cnt1=0,cnt2=0;
int main(){
    cin>>n>>m;
    cin>>x>>y;
    pos1=x;
    pos2=y;
    cnt1++;
    cnt2++;
    for(int i=2;i<=m;i++){
        cin>>x>>y;
        if(x!=pos1 && y!=pos1){
            m1[x]++;
            m1[y]++;
        }
        if(x!=pos2 && y!=pos2){
            m2[x]++;
            m2[y]++;
        }
        if(x==pos1 || y==pos1)
            cnt1++;
        if(x==pos2 || y==pos2)
           cnt2++;
    }
    for(int i=2;i<=n;i++){
        if(i!=pos1 && m1[i]+cnt1==m){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    for(int i=2;i<=n;i++){
        if(i!=pos2 && m2[i]+cnt2==m){
            cout<<"YES"<<endl;
            return 0;
        }
    }
   cout<<"NO"<<endl;
    return 0;
}