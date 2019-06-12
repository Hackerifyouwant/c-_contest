#include<iostream>
#include<string.h>
#include<algorithm>

#define ll long long
#define endl '\n'

using namespace std;

ll n,ma,mi,sum;

struct pos{
    ll x,y;
};

bool acp(pos l,pos r){
    if(l.x==r.x){
        return l.y<r.y;    
    }else{
        return l.x<r.x;
    }
    
}

pos arr[10000005];


int main(){
    while(cin>>n){
        memset(arr,0,10000005);
        sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i].x>>arr[i].y;
            if(arr[i].x>arr[i].y){
                swap(arr[i].x,arr[i].y);
            }
        }
        sort(arr,arr+n,acp);
        mi=arr[0].x;
        ma=arr[0].y;
        for(int i=1;i<=n;i++){
            if(arr[i].x>ma){
                sum+=ma-mi;
                mi=arr[i].x;
                ma=arr[i].y;
                //cout<<"@@"<<mi<<" "<<ma<<" "<<sum<<endl;
            }else if(ma<=arr[i].y){
                ma=arr[i].y;
                //cout<<"##"<<mi<<" "<<ma<<" "<<sum<<endl;
            }
            if(i==n){
                    sum+=ma-mi;
            }
        }
            // 150 200
            // 160 180
            // 190 210
            // 280 300
            // 300 330
            
            
        cout<<sum<<endl;


    }


    return 0;
}
