#include<iostream>
#include<queue>

using namespace std;

int n,m,x1,x2,u,v,f;
bool co[1005][1005]={0};


int main(){
    cin>>n>>m>>x1>>x2>>u>>v>>f;
    co[x1-1][m-x2]=1;
    for(int i=0;i<f;i++){
        int q,w;
        cin>>q>>w;
        co[q-1][m-w]=1;
    }
    for(int i=0;i<m;i++){
        for(int e=0;e<n;e++){
            
            cout<<co[e][i]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}
//5 4 3 3 1 1 1 1 2
//5 4 3 3 1 1 3 1 2 2 2 2 1

// #include<iostream>
// #include<queue>

// using namespace std;

// long long n,m,x1,y1,u,v,f,xy[10005][10005]={0};

// struct pos{
//     long long x,y
// };
// queue <pos> q;

// int main(){
    
//     cin>>n>>m>>x1>>y1>>u>>v>>f;
//     for(int i=0;i<f;i++){
//         int j,r;
//         cin>>j>>r;
//         xy[j][r]=1;
//     }
//     q.push({})
    



//     return 0;
// }