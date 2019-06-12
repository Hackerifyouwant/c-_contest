#include<iostream>
#include<string.h>

#define ll long long
#define endl '\n'
#define MAX 200

using namespace std;

char s1[MAX],s2[MAX];

ll big1[MAX],big2[MAX],sum[MAX];

void input(ll *big,char *str){
    ll len=strlen(str);
    memset(big,0,MAX);
    for(ll i=len;i>0;i--){
        big[len-i]=str[i-1]-'0';
    }
    cout<<endl;
}
void bigadd(ll *sum,ll *big1,ll *big2){
    ll a=0;
    
    for(int i=0;i<MAX;i++){
        sum[i]=*(big1++)+*(big2++)+a;
        if(sum[i]!=0){
            a=sum[i]/10;
            sum[i]%=10;
        }
        //cout<<sum[i]<<endl;
    }
}

void big_print(ll *sum){
    int i=MAX-1;
    for(i=MAX-1;i>0 && sum[i]==0; --i);
    while(i>=0){
        cout<<sum[i];
        --i;
    }
}



int main(){
    cin>>s1>>s2;
    input(&big1[0],&s1[0]);
    input(&big2[0],&s2[0]);
    bigadd(&sum[0],&big1[0],&big2[0]);
    big_print(&sum[0]);


    return 0;
}