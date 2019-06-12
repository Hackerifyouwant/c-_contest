#include<iostream>
#include<cmath>

#define ll long long
#define endl '\n'
#define MAXN 1000005
using namespace std;

ll n,k,arr[MAXN],requ[MAXN],m;
ll left1,right1,cnt;
bool b=0;

int main(){
    cin>>n>>k;
    left1=0;
    right1=n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<k;i++){
        cin>>requ[i];
    }
    for(int i=0;i<k;i++){
        left1=0;
        right1=n-1;
        m=0;
        b=0;
        // m=(left1+right1)/2;
            
        while(left1<=right1){
            m=(left1+right1)/2;
            
            if(arr[m]>requ[i]){
                //on the left side
                right1=m-1;
            }else if(arr[m]<requ[i]){
                //on the right side
                left1=m+1;
            }else{
                b=1;
                cout<<m+1<<endl;
                break;
            }
        }
        //cout<<"@@"<<m<<endl;
        if(b==0)cout<<"0"<<endl;
    }

    return 0;
}