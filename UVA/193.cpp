// #include<iostream>
// #include<vector>

// #define ll long long
// #define endl '\n'
// #define MAX 105

// using namespace std;

// vector <ll> v[MAX],container,ans;
// ll m,n,k,a,b,Max;
// ll color[MAX];

// void init(int n){
//     //初始化
//     container.clear();
//     Max=0;
//     for(int i=1;i<=n;i++){
//         v[i].clear();
//         color[i]=0;
//     }
// }

// void backtrake(int start){
//     if(start>n){
//         //如果start > n 代表遞迴結束
//         if(container.size()>Max||container.size()==Max&&color[start-1]==1){
//             Max=container.size();
//             ans=container;
//         }
//         return;
//     }
//     bool hashblack=true;//該格可不可填黑色
//     for(int i:v[start]){
//         if(color[i]==1)hashblack=false;
//     }
//     if(hashblack==true){
//         //如果可填，將它加入container
//         container.push_back(start);
//         //將color設為1
//         color[start]=1;
//         //前往下一個維度
//         backtrake(start+1);
//         container.pop_back();
//         color[start]=0;
//     }
//     color[start]=2;
//     backtrake(start+1);
//     color[start]=0;

// }

// int main(){
//     cin>>m;
//     for(int i=0;i<m;i++){
//         cin>>n>>k;
//         init(n);
//         for(int y=0;y<k;y++){
//             cin>>a>>b;
//             v[a].push_back(b);
//             v[b].push_back(a);
//         }
//         backtrake(1);//從一開始填到n
//         cout<<Max<<endl;
//         cout<<ans[0];
//         for(int i=1;i<Max;i++){
//             cout<<" "<<ans[i];
//         }
//         cout<<endl;
//     }

//     return 0;
// }
#include<iostream>
#include<vector>

#define ll long long
#define endl '\n'

using namespace std;

int main(){
    

    return 0;
}















