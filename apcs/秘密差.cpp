#include<iostream>
#include<cmath>

#define ll long long 
#define endl '\n'

using namespace std;

int main(){
    int sum1=0,sum2=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(i%2==0)sum1+=int(s[i]-'0');
        else sum2+=int(s[i]-'0');
    }
    //cout<<sum1<<" "<<sum2<<endl;
    cout<<abs(sum1-sum2)<<endl;
    

    return 0;
}
