#include<iostream>

#define ll long long
#define endl '\n'

using namespace std;

ll t,n,ans;
string s;

int main(){
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        cin>>s;
        ans=n;
        for(int y=0;y<s.length();y++){
            if(s[y]=='8'){
                ans=y;
                break;
            }
        }
        //cout<<ans<<endl;
        if(n-ans>=11)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }    
    return 0;
}