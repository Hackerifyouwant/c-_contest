#include<iostream>

#define ll long long
#define endl '\n'
#define MAX 500005

using namespace std;

ll g[MAX],gsize[MAX],a,m,n,k,ki;

void init(){
    for(int i=1;i<=n;i++){
        g[i]=i;
        gsize[i]=1;
    }
}

int find(int x){
    if(g[x]==x)return x;
    else return g[x]=find(g[x]);
}

bool check(int x,int y){
    return find(x)==find(y);
}

void unite(int x,int y){
    int gx=find(x);
    int gy=find(y);
    
    // if(gsize[gx]>gsize[gy]){
    //     g[y]=gx;
    //     gsize[x]+=gsize[y];
    // }else{
    //     g[x]=gy;
    //     gsize[y]+=gsize[x];
    // }
    g[gy]=gx;
    // g[x]=gy;
    gsize[gx]+=gsize[gy];
    // gsize[y]+=gsize[x];
    
}

int main(){
    cin>>n>>m;
    init();
    for(int i=1;i<=m;i++){
        cin>>k;
        if(k>=1){
            cin>>a;
            for(int y=1;y<k;y++){
                cin>>ki;
                if(!check(a,ki)){
                    unite(a,ki);
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        int x=find(i);
        cout<<gsize[x]<<" ";
    }
    cout<<endl;

    return 0;
}
// #include<iostream>
// #define fuck(x) std::cout<<"["<<#x<<"->"<<x<<"]"<<endl;
// using namespace std;
// typedef long long ll;
 
// const int M=5e5+5;
// const int inf=1e9+5;
// const int mod=1e9+7;
 
// int fa[M];
// int sz[M];
 
// int findfa(int x) {
//     return fa[x] == x ? x : fa[x] = findfa(fa[x]);
// }
 
 
// int main() {
//     ios::sync_with_stdio(0);
//     int n,m;
//     cin>>n>>m;
//     for(int i=1; i<=n; i++) {
//         fa[i]=i;
//         sz[i]=1;
//     }
//     for(int i=0; i<m; i++) {
//         int num;
//         cin>>num;
//         int x,y;
//         for(int j=0; j<num; j++) {
//             if(j==0)
//                 cin>>x;
//             else {
//                 cin>>y;
//                 int fx=findfa(x);
//                 int fy=findfa(y);
//                 if(fx!=fy) {
//                     fa[fy]=fx;
//                     sz[fx]+=sz[fy];
//                 }
//             }
//         }
//     }
//     for(int i=1; i<=n; i++)
//         cout<<sz[findfa(i)]<<" ";
//     puts("");
//     return 0;
// }