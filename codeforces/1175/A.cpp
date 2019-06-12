#include<iostream>

#define ll long long
#define endl '\n'

using namespace std;

ll n,k,cnt=0;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cnt=0;
        cin>>n>>k; 
        while(n!=0){
            if(n<k){
                cnt+=n;
                n=0;
            }
            else if(n%k==0){
                cnt++;
                n=n/k;
            }else{
                cnt+=n%k+1;
                n=n/k;
            } 
        }
        cout<<cnt<<endl;
    }
    return 0;
}