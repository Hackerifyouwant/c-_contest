#include<iostream>
#include<queue>

#define ll long long
#define endl '\n'
#define MAX 25

using namespace std;

ll n,p,pi[MAX],mi;

int dp(int index, int target, vector<int> lst, int sum){
    if(index>=p) {
        return sum<mi && sum+pi[target]>=mi;
    }
    int ret = 0;
    
    if(index != target) {
        lst.push_back(index);
        
        ret += dp(index+1, target, lst, sum+pi[index]); 
        lst.pop_back();
        
    }
    ret += dp(index+1, target, lst, sum);
    return ret;
}

 
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p;
        mi=0;
        for(int y=0;y<p;y++){
            cin>>pi[y];
            mi+=pi[y];
        }
        if(mi%2==1) mi=(mi+1)/2;
        else mi/=2;
        for(int y=0;y<p;y++){
            cout<<"party "<<y+1<<" has power index "<<dp(0,y,{},0)<<endl;
        }
        cout<<endl;
    }


    return 0;
}