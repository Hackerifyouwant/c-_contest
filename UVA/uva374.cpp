#include<iostream>

#define ll long long
#define endl '\n'

using namespace std;

ll b,p,m;

ll mod (ll a,ll b,ll c){
    if(b==0)return 1;
    if(b%2==0){
        ll t=mod(a,b/2,c);
        return t*t%c;
    }else{
        return a%c*mod(a,b-1,c);
    }
}


int main(){ 
    while(cin>>b>>p>>m){
        cout<<mod(b,p,m)<<endl;
    }


    return 0;
}
