// #include<iostream>
// #include<string.h>
// #include<algorithm>

// #define ll long long
// #define endl '\n'

// using namespace std;

// ll n,ma,m,sum,mi[105],vis[105],edge;
// bool b;

// bool cmp(int x,int y){
//     return x>y;
// }

// bool dfs(int length,int now){
//     if(edge==3)return true;
//     if(length==sum/4){
//         edge++;
//         if(dfs(0,0))return true;
//         edge--;
//     }
//     for(int i=now;i<m;i++){
//         if(!vis[i]&&length+mi[i]<=sum/4){
//             vis[i]=true;
//             if(dfs(length+mi[i],i+1))return true;
//             vis[i]=false;
//         }
//     }
//     return false;
// }

// int main(){
//     cin>>n;
//     for(int i=0;i<n;i++){
//         sum=0;
//         memset(vis,false,sizeof(vis));
//         int ma=-1e9;
//         edge=0;
//         cin>>m;
//         for(int y=0;y<m;y++){
//             cin>>mi[y];
//             sum+=mi[y];
//         }
//         sort(mi,mi+m,cmp);
//         if(sum%4!=0||mi[0]>sum/4)cout<<"no"<<endl;
//         else {
//             bool b=dfs(0,0);
//             if(b==true)cout<<"yes"<<endl;
//             else cout<<"no"<<endl;
//         }
//     }

//     return 0;
// }
#include<iostream>
#include<algorithm>
#include<string.h>

#define ll long long
#define endl '\n'

using namespace std;

ll m,mi[105],sum,quarter,edge,vis[105];

bool cmp(int x,int y){
    return x>y;
}

bool dfs(int length,int now){
    if(edge==3)return true;
    if(length==quarter){
        edge++;
        if(dfs(0,0))return true;
        edge--;
    }
    for(int i=now;i<m;i++){
        if(vis[i]==false&&length+mi[i]<=quarter){
            vis[i]=true;
            if(dfs(length+mi[i],i+1))return true;
            vis[i]=false;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        cin>>m;
        memset(vis,false,sizeof(vis));
        sum=0;
        edge=0;
        for(int i=0;i<m;i++){
            cin>>mi[i];
            sum+=mi[i];
        }
        sort(mi,mi+m,cmp);
        quarter=sum/4;
        if(sum%4!=0||mi[0]>quarter)cout<<"no"<<endl;
        else{
            bool b=dfs(0,0);
            if(b==true)cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
    }

    return 0;
}
