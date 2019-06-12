#include<iostream>
#include<algorithm>

#define ll long long
#define endl '\n'

using namespace std;

struct pos{
    ll w,f,sum;
};
bool cmp(pos l,pos r){
    return l.w*r.f<l.f*r.w;
}


pos arr[1000005];
ll n,sum[1000005],ans,tmp;
    

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i].w;
    }

    for(int i=0;i<n;i++){
        cin>>arr[i].f;
    }
    sort(arr,arr+n,cmp);
   
    for(int i=0;i<n;i++){
        tmp+=arr[i].w;
        ans+=tmp*arr[i+1].f;
    }
    cout<<ans<<endl;

    return 0;
}