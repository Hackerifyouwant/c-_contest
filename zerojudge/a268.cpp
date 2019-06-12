#include<iostream>

#define ll long long
#define endl '\n'

using namespace std;

ll n,start[10005],end[10005]

int main(){
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>start[i];
        }
        for(int i=0;i<n;i++){
            cin>>end[i];
        }
    }

    return 0;
}