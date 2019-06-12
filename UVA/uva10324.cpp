#include<iostream>

#define ll long long
#define endl '\n'

using namespace std;

string s;
ll n,i[10005],j[10005];

bool bang(string s,ll i,ll j){
    for(int m=i;m<j;m++){
        if(s[m]!=s[m+1]){
            return false;
            break;
        }
    }
    return true;
}

ll cnt=0;

int main(){
    while(cin>>s){
        cin>>n;
        cnt++;    
        for(int m=0;m<n;m++){
            cin>>i[m]>>j[m];
            if(i[m]>j[m]){
                swap(i[m],j[m]);
            }
        }
        cout<<"Case "<<cnt<<":"<<endl;
        for(int m=0;m<n;m++){
            if(bang(s,i[m],j[m])==true)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}