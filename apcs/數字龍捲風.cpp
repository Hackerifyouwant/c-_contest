#include<iostream>

#define ll long long
#define endl '\n'

using namespace std;

ll n,way,map[1005][1005],nx,ny;
ll vec[4][4]={{0,-1},{-1,0},{0,1},{1,0}};
            //左上右下
void run(int x,int y,int way){
    cout<<map[x][y];
    nx=x;
    ny=y;
    for(int m=0;m<n;m++){
        if(m==n-1){
            for(int y=0;y<1;y++){
                for(int i=0;i<m;i++){
                    nx+=vec[way%4][0];
                    ny+=vec[way%4][1];
                    //cout<<nx<<" "<<ny<<endl;
                    cout<<map[nx][ny];
                }
                way++;
            }
        }else{
            for(int y=0;y<2;y++){
                for(int i=0;i<m+1;i++){
                    nx+=vec[way%4][0];
                    ny+=vec[way%4][1];
                    //cout<<nx<<" "<<ny<<endl;
                    cout<<map[nx][ny];
                }
                way++;
            }
        }
    }
}


int main(){
    cin>>n;
    cin>>way;
    for(int m=0;m<n;m++){
        for(int i=0;i<n;i++){
            cin>>map[m][i];
        }
    }
    run(n/2,n/2,way);
    cout<<endl;



    return 0;
}
