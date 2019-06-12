#include<iostream>
#include<sstream>
#include<cmath>

#define ll long long
#define endl '\n'

using namespace std;

int n,a,base;
stringstream ss;
string s;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        ss.str("");
        ss.clear();
        base=0;
        cin>>a;
        ss<<a;
        ss>>s;
        for(int y=0;y<s.size();y++){
            if(s[y]=='4')base+=pow(10,s.size()-y-1);
        }
        if(base==0){
            for(int m=1;m<=9;m++){
                ss.str("");
                ss.clear();
                ss<<a-m;
                ss>>s;
                if(m!=4&&s[s.size()-1]!='4'){
                    cout<<"Case #"<<i+1<<": "<<m<<" "<<a-m<<endl;
                }
            }
        }
        else cout<<"Case #"<<i+1<<": "<<a-base<<" "<<base<<endl;
    }
    return 0;
}