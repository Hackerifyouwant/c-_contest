#include<iostream>
#include<queue>

#define ll long long
#define endl '\n'

using namespace std;

struct a{
    ll pos,gas;
};

bool amp(a l,a r){
    if(l.x==r.x)return l.y<r.y;
    else return l.x<r.x
}

ll arr[1000005],n,l,p;

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i].pos>>arr[i].gas;
    }
    cin>>l>>p;
    sort(a,a+n,amp);
    
    



    return 0;
}