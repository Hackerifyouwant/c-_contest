#include<iostream>

#define ll long long
#define endl '\n'

using namespace std;

int main(){
    int n,m,ma[105]={0},sum=0,a;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int y=0;y<m;y++){
            cin>>a;
            if(ma[i]<a)ma[i]=a;
        }
    }
    for(int i=0;i<n;i++){
        sum+=ma[i];
    }
    int b=0;
    cout<<sum<<endl;
    for(int i=0;i<n;i++){
        if(sum%ma[i]==0){
            if(i==n-1)cout<<ma[i];
            else cout<<ma[i]<<" ";
            b=1;
        }
    }
    if(b==0)cout<<"-1"<<endl;
    else cout<<endl;

    return 0;
}