#include<iostream>
#include<algorithm>

#define ll long long
#define endl '\n'

using namespace std;



int main(){
    int n,arr[1005];
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int ma=0,mi=0;
        for(int i=0;i<n;i++){
            if(arr[i]<60)mi++;
            else if(arr[i]>=60)ma++;
            if(i==n-1)cout<<arr[i];
            else cout<<arr[i]<<" ";
        }
        cout<<endl;
        if(mi>0)cout<<arr[mi-1]<<endl;
        else cout<<"best case"<<endl;
        if(ma>0)cout<<arr[mi]<<endl;
        else cout<<"worst case"<<endl;
    }
    return 0;
}