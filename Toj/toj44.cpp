#include<iostream>
#include<queue>
using namespace std;
bool s[1000][1000] = {0};
long long m,n;


long long bang[1005][1005]={0};
long long x,y,x1,y1,x2,y2;

long long vec[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};

struct pos{
    long long x,y;
};
queue<pos> q;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>x>>y;
    char c;
    for(int i=0;i<x;i++){
        for(int w=0;w<y;w++){
            cin>>c;
            if(c=='1')s[i][w]=true;
        }
    }
    /*for(int i=0;i<x;i++){
        for(int w=0;w<y;w++){
            cout<<s[i][w]<<' ';
        }
        cout<<endl;
    }*/
    cin>>x1>>y1>>x2>>y2;
    q.push({x1,y1});
    s[x1][y1] = 1;
    
    while(!q.empty()){
        //cout<<"%";
        pos p=q.front();
        q.pop();
        //cout<<p.x<<' '<<p.y<<' '<<bang[p.x][p.y]<<endl;
        if(p.x==x2&&p.y==y2){
            break;
        }
        else {
            for (int v=0;v<4;v++){
                    
                    long long nx = p.x+vec[v][0];
                    long long ny = p.y+vec[v][1];
                    
                    if (nx>=x||nx<0) {
                        //m=p.x+vx;
                        continue ;
                    }  
                    if (ny>=y||ny<0) {
                        //n=p.y+vy;
                        continue;
                    }
                    if(s[nx][ny]==false)
                    {
                        q.push({nx,ny});
                        s[nx][ny] = 1;
                        bang[nx][ny]= bang[p.x][p.y]+1;
                        
                    }
                
                
            }   
        }
    }
    if (bang[x2][y2]==0)cout<<-1<<endl;
    else cout<<bang[x2][y2]<<endl;
    
    return 0;
}


// #include<iostream>
// #include<queue>
// using namespace std;

// bool co[1005][1005]={0};

// struct pos{
//     long long x,y;
// };

// queue <pos> q;


// int main(){
//     int n,m,x1,x2,y1,y2;
//     cin>>n>>m;
//     char c;
//     for(int i=0;i<n;i++){
//         for(int y=0;y<m;y++){
//             cin>>c;
//             if(c=='1')co[i][y]==1;
//             else co[i][y]=0;
//         }
//     }
//     cin>>x1>>y1>>x2>>y2;
//     q.push({x1,y2});
//     co[x1][y1]=1;
//     while(!q.empty()){
//         pos p=q.front();
//         q.pop();
//         if(p.x==x2&&p.y==y2){
//             break;
//         }else if(co[p.x+1][p.y]==0){
//             q.push({p.x+1,p.y});
//             co[p.x+1][p.y+1]=1;
//         }else if(co[p.x-1][p.y]==0){
//             q.push({p.x-1,p.y});
//             co[p.x-1][y]=1;
//         }else if(co[p.x][p.y+1]==0){
//             q.push({p.x,p.y+1});
//             co[p.x][p.y+1]=1;
//         }else if(co[p.x][p.y-1]==0){
//             q.push({p.x,p.y-1});
//             co[p.x][p.y-1]=1;
//         }else{
//             cout<<"-1"<<endl;
//         }
//     }
//     if(co[x2][y2]==0){
//         cout<<"-1"<<endl;
//     }

//     return 0;
// }