#include<iostream>
#include<string.h>

#define ll long long
//#define endl '\n'

using namespace std;

ll n,arr[100005];

int main(){
    while(cin>>n){
        if (n==0)return 0;
        ll cnt=0;
        memset(arr,0,sizeof(arr));
        ll a;
        while(cin>>a){
            arr[cnt]=a;
            getchar();
            if(a==0){
                cout<<"123"<<endl;
                for(int y=0;y<cnt;y++){
                    cout<<arr[y]<<" ";
                }
                cout<<endl;
                break;
            }else{
                cnt++;
            }
        }


    }



    return 0;
}