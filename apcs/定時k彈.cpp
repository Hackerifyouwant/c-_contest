#include<iostream>
#include<vector>

#define ll long long
#define endl '\n'

using namespace std;



int main(){
    int n,m,k,cnt;
    vector<int>v;
    cin>>n>>m>>k;
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    v.clear();
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    cnt=0;
    for(int i=0;i<k;i++){    
        cnt=(m+cnt-1)%v.size();
        v.erase(v.begin()+cnt);
    }
    cnt=cnt%v.size();
        cout<<v[cnt]<<endl; 
    
    return 0;
}
