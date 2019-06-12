#include<iostream>
#include<string.h>

#define ll long long
#define endl '\n'

using namespace std;

int ans[9];
int map[6][6]={{},{2,3,5},{1,3,5},{1,2,4,5},{3,5},{1,2,3,4}};
bool choose[6][6]={0};


void backtrack(int n,int len){
    if(len==9){
        for(int i=0;i<len;i++){
            cout<<ans[i];
        }
        cout<<endl;
    }
    for(int i:map[n]){
        if(choose[i][n]==0&&choose[n][i]==0){
            choose[i][n]=1;
            choose[n][i]=1;
            ans[len]=i;
            backtrack(i,len+1);
            choose[i][n]=0;
            choose[n][i]=0;
        }
    }
}

int main(){
    
    ans[0]=1;
    backtrack(1,1);
    return 0;
}
