#include<iostream>

#define ll long long
#define endl '\n'
#define MAX 1000000005

using namespace std;

ll a,b,c;

int main(){
    cin>>a>>b>>c;
    if(a==b){
        cout<<c*2+a*2<<endl;
    }else{
        int mi=min(a,b);
        cout<<mi*2+1+2*c<<endl;
    }
    
    return 0;
}