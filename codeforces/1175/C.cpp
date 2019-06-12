#include<iostream>
#include<math.h>
#include<algorithm>

#define ll long long
#define endl '\n'
#define MAX 100005

using namespace std;

ll n,k,a[MAX],sum,mi,d[MAX];

int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        mi=0;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<a[0]<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            mi+=a[i];
        }
        
        mi=round(mi/n);
        //cout<<mi<<endl;
        for(int i=0;i<n;i++){
            d[i]=abs(mi-a[i]);
        }
        sort(d,d+n);
        cout<<d[k]<<endl;
        

    }

    return 0;
}