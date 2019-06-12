#include<iostream>
#include<vector>

#define ll long long 
#define endl '\n'
#define MAX 200005

using namespace std;

ll a[MAX],b[MAX],i,j,x,n,m,ta,tb,cut;
int main(){
    
    while(cin>>n>>m>>ta>>tb>>cut){
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<m;i++){
            cin>>b[i];
        }
        if(cut>=min(n,m)){
            cout<<"-1"<<endl;
            return 0;
        }
        ll maxn=-1,flag_a,lv=1;
        for(i=0;i<=cut;i++){
            flag_a=lower_bound(b,b+m,a[i]+ta)-b;
            flag_a=flag_a+cut-i;
            //cout<<"##"<<flag_a<<endl;
            if(flag_a>=m){
                cout<<"-1"<<endl;
                return 0;
                lv=0;
                break;
            }
            maxn=max(maxn,b[flag_a]+tb);
        }
        if(lv==1)cout<<maxn<<endl;
    
    }

    return 0;
}
