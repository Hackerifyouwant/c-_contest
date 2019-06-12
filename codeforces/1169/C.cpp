#include<iostream>

#define ll long long
#define endl '\n'
#define MAX 300005

using namespace std;

bool b=0;
ll n,m,a[MAX],cnt;  

bool check(){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            b=1;
            break;
        }
    }
    if(b==1)return false;
    else return true;
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(check()==false){
        while(check()==false){
            cnt++;
            for(int i=0;i<n-1;i++){
                if(a[i]>a[i+1]){
                    a[i]=(a[i]+1)%m;
                }
            }
        }
        cout<<cnt<<endl;
    }else{
        cout<<"0"<<endl;
    }

    return 0;
}