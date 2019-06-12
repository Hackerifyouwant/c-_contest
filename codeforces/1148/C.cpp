#include<iostream>
#include<algorithm>
#include<vector>

#define ll long long
#define endl '\n'
#define MAX 300005

using namespace std;

ll n,p[MAX],id[MAX],cnt,a[MAX],b[MAX];

struct pos{
    int x;
    int y;
};


vector<pos> v;


void swp(int x,int y){
    if(x==y)return ;
    int i=p[x];
    int j=p[y];
    swap(p[x],p[y]);
    swap(id[i],id[j]);
    pos obj;
    obj.x=x;
    obj.y=y;
    v.push_back(obj);
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        p[i]=x;
        id[x]=i;
    }
    for(int i=n/2;i>=1;i--){
        int j=n-i+1;
        if(id[i]!=i){
            if(id[i]<n/2){
                swp(n,id[i]);
            }
            else{
                swp(1,id[i]);
                swp(n,1);
            }
            swp(id[i],i);
        }
        if(id[j]!=j){
            if(id[j]>n/2){
                swp(1,id[j]);
            }
            else{
                swp(n,id[j]);
                swp(n,1);
            }
            swp(id[j],j);
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<(int)v.size();i++){
        cout<<v[i].x<<" "<<v[i].y<<endl;
    }
    
    

    return 0;
}
