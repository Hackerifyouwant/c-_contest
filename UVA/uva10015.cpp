#include<iostream>
#include<cmath>

#define ll long long
#define endl '\n'
#define MAXN 3600

using namespace std;

ll n;

ll prime[MAXN]={0};
int prime_c=1;
int i;
ll tbl[MAXN]={0};

prime[0]=2;

int main(){
    for(int i=3;i<60;i+=2){
        if(tbl[i]==0){
            prime[prime_c]=i;
            prime_c++;
            for(int k=i*i,j=i+i;k<=60;k+=j){
                tbl[k]=1;
            }
        }
    }
    for(;i<=3600;i+=2){
        if(tbl[i]==0){
            prime[prime_c]=i;
            prime_c++;
        }
    }

    for(int i=0;i<prime_c;i++){
        cout<<prime[i]<<" ";
    }
    cout<<endl;
    while(cin>>n){




    }


    return 0;
}
