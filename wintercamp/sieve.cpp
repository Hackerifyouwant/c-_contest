#include<iostream>


using namespace std;

bool isprime[10000000]


//nloglogn

void sieve(){
    int n=10000000
    memset(isprime,true,sizeof(isprime));
    isprime[0]=isprime[1]=false;

    for(int i=4;i<=n;i++)
        isprime[i] = false;

    for(int i=3;i<=sqrt(n);i+=2){
        if(isprime[i]){
            for(int j=i*i;j<=n;j+=i){
                if(isprime[j]){
                    isprime[j]=false;
                }
            }
        }
    }
}

int main(){

    return 0;
}