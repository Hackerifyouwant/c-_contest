#include<iostream>

using namespace std;

int main(){
    string s;
    int x;
    cin>>s;
    for(int i=0;i<s.length();i++){
        x=x*10+int(s[i]-'0');
    }
    cout<<x<<endl;
    //cout<<int('1'-'0')<<endl;
    return 0;
}