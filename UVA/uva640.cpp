#include<iostream>

#define ll long long
#define endl '\n'
#define MAXN 1000005

using namespace std;

ll arr[MAXN];

int main(){
    for(int i=0;i<MAXN;i++){
        ll a=i,b=i;
        while(a){
            b+=a%10;
            a/=10;
        }
        arr[b]=1;
    }
    for(int i=0;i<MAXN;i++){
        if(arr[i]==0)cout<<i<<endl;
    }

    return 0;
}