#include<iostream>

#define ll long long
#define endl '\n'

using namespace std;

int main(){
    int a,b,c,d=0,e;
    cin>>a>>b>>c;
    if(a>=1)a=1;
    if(b>=1)b=1;
    if(c>=1)c=1;
    //cout<<(a|b)<<endl;
    if((a&b)==c){cout<<"AND"<<endl;d=1;}
    if((a|b)==c){cout<<"OR"<<endl;d=1;}
    if((a^b)==c){cout<<"XOR"<<endl;d=1;}
    if(d==0)cout<<"IMPOSSIBLE"<<endl;
    


    return 0;
}