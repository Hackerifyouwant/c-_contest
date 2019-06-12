#include<iostream>

#define ll long long
#define endl '\n'

using namespace std;



ll t,n[1005];
string s[1005];


int main(){
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n[i];
        cin>>s[i];
    }
    for(int i=0;i<t;i++){
        cout<<"Case #"<<i+1<<": ";
        
        for(int y=0;y<s[i].size();y++){
            
            if(s[i][y]=='S'){
                cout<<'E';
                
            }else{
                cout<<'S';
                
            }
        }
        cout<<endl;
        
    }
    return 0;
}