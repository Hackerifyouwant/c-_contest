#include<iostream>
#include<string.h>

#define ll long long
#define endl '\n'

using namespace std;

ll r,c,m,map[1005][1005],map1[1005][1005],cntt;

void rotate(int l,int cnt){
    if(cnt%2==0){
        if(l==0){
        //旋轉
        swap(r,c);
            for(int i=0;i<r;i++){
                cntt=c;
                for(int y=0;y<c;y++){
                    map1[i][y]=map[cntt-1][i];
                    //cout<<map1[i][y]<<" ";
                    cntt--;
                }
                //cout<<endl;
            }

        }else{
            //翻轉
            for(int i=0;i<r;i++){
                for(int y=0;y<c;y++){
                    map1[i][y]=map[r-i-1][y];
                    //cout<<map1[i][y]<<" ";
                }
                //cout<<endl;
            }
        }
    }else{
        if(l==0){
            //旋轉
            swap(r,c);
            for(int i=0;i<r;i++){
                cntt=c;
                for(int y=0;y<c;y++){
                    map[i][y]=map1[cntt-1][i];
                    //cout<<map[i][y]<<" ";
                    cntt--;
                }
                //cout<<endl;
            }

        }else{
            //翻轉
            for(int i=0;i<r;i++){
                for(int y=0;y<c;y++){
                    map[i][y]=map1[r-i-1][y];
                    //cout<<map[i][y]<<" ";
                }
                //cout<<endl;
            }
        }
    }
}

int main(){
    
    while(cin>>r>>c>>m){
        memset(map,0,sizeof(map));
        memset(map1,0,sizeof(map));
        int rr,cc;
        rr=r;
        cc=c;
        for(int i=0;i<r;i++){
            for(int y=0;y<c;y++){
                cin>>map[i][y];
            }
        }
        for(int i=0;i<m;i++){
            int l;
            cin>>l;
            rotate(l,i);
        }
        cout<<r<<" "<<c<<endl;
        if(m%2==0){
            for(int i=0;i<r;i++){
                for(int y=0;y<c;y++){
                    if(y==c-1){
                        cout<<map[i][y];
                    }else cout<<map[i][y]<<" ";
                }
                cout<<endl;
            }
        }else{
            for(int i=0;i<r;i++){
                for(int y=0;y<c;y++){
                    if(y==c-1){
                        cout<<map1[i][y];
                    }else cout<<map1[i][y]<<" ";
                }
                cout<<endl;
            }
        }
    }

    return 0;
}
// 3 5
// 13 10 7 4 1
// 14 11 8 5 2
// 15 12 9 6 3