#include<iostream>
#include<algorithm>

#define ll long long
#define endl '\n'
#define MAX 1000005

using namespace std;

ll n,arr[MAX],sum,ans;

int main(){
    
    cin>>n;
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+2*n);
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    for(int i=n;i<2*n;i++){
        ans+=arr[i];
    }
    if(sum==ans){
        cout<<"-1"<<endl;
    }else{
        for(int i=0;i<2*n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}