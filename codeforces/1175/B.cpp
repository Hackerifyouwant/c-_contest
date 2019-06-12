#include<iostream>

#define ll long long
#define endl '\n'
#define MAX 100005
using namespace std;

struct pos{
    string s;
    ll x;
}

pos s[MAX];
ll sum;

int main(){
    int l;
    cin>>l;
    for(int i=0;i<l;i++){
        cin>>s[i].s;
        if(s[i].s=="for"){
            cin>>s[i].x;
        }
    }
    for(int i=0;i<l;i++){
        if(s[i].s=="for"){
            while(s[i].s=="end"){
                if(s[i].s=="for"){
                    s[i].x*
                }
            }
        }else if(s[i].s=="add"){

        }
    }
    return 0;
}