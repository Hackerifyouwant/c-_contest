#include<iostream>

#define ll long long
#define endl '\n'

using namespace std;

int main(){
    ll n,astart,aend,bstart,bend;
    cin>>n>>astart>>aend>>bstart>>bend;
    for(int i=0;i<n;i++){
        astart++;
        if(astart>n)astart=1;
        bstart--;
        if(bstart<1)bstart=n;
        if(astart==bstart){
            cout<<"YES"<<endl;
            return 0;
        }
        else if(astart==aend||bstart==bend){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    
    return 0;
}