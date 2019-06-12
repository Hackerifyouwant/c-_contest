#include<iostream>
#include<cmath>
#include<iomanip>

#define ll long long
#define endl '\n'
#define MAX 15

using namespace std;

ll x[MAX],y[MAX];
float sum;

int main(){
    int n;
    while(cin>>n){
        if(n==0)return 0;
        for(int i=0;i<n;i++){
            cin>>x[i]>>y[i];
        }
        for(int i=0;i<n;i++){
            double k=sqrt((x[i]-x[i+1])*(x[i]-x[i+1])+(y[i]-y[i+1])*(y[i]-y[i+1]))+16;
            sum+=k;
            cout<<fixed<<setprecision(2)<<k<<endl;
        }
        cout<<(3)<<sum<<endl;
    }

    return 0;
}