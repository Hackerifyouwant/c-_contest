#include<iostream>

#define ll long long
#define endl '\n'
#define MAX 100005

using namespace std;


ll A[MAX],cnts;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(A[i]>=1)continue;
        cnts++;
        for(int j=i;j<=n;j+=i){
            A[j]=cnts;
        }
    }
    for(int i=2;i<=n;i++){
        if(i>=3){
            cout<<" ";
        }
        cout<<A[i];
    }
    cout<<endl;

    return 0;
}