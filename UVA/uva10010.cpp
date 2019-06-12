#include<iostream>

#define ll long long
#define endl '\n'

using namespace std;

ll n,m,k,x1,y1,vec[8][2]={{-1,-1},{-1,0},{0,-1},{0,1},{1,0},{1,1},{1,-1},{-1,1}};
char c[1005][1005];
string s[1005];
bool b=0;

int main(){
    cout<<-3%360<<endl;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int y=0;y<m;y++){
            cin>>c[n][m];
        }
    }
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>s[i];
    }
    for(int r=0;r<k;r++){
        for(int i=0;i<n;i++){
            for(int y=0;y<m;y++){
                //找起點
                if(c[i][y]==s[k][0]){
                    //走一圈
                    for(int e=0;e<8;e++){
                        ll nx=i+vec[e][0];
                        ll ny=y+vec[e][1];
                        if(c[nx][ny]==s[k][1]){
                            //延同一方向往下走
                            b=1;
                            ll f=e;
                            for(int d=2;d<s[k].size();d++){
                                ll mx=nx+vec[f][0];
                                ll my=ny+vec[f][1];
                                if(c[mx][my]==s[k][d]){
                                    b=1;
                                }else {
                                    b=0;
                                    break;
                                }
                            }
                            if(b==1){
                                cout<<i<<" "<<y<<endl;
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
// #include<iostream>

// using namespace std;

// int m,n,k,vec[8][2]={{-1,-1},{-1,0},{0,-1},{0,1},{1,0},{1,1},{1,-1},{-1,1}};
// char c[105][105];
// string s[1005]

// int main(){    
//     cin>>m>>n;
//     for(int i=0;i<m;i++){
//         for(int y=0;y<n;y++){
//             cin>>c[i][y];
//         }
//     }
//     cin>>k;
//     for(int i=0;i<k;i++){
//         cin>>s[i];
//     }
    
//     for(int i=0;i<m;i++){
//         for(int y=0;y<n;y++){
//             for(int i=0;i<8;i++){
                
//             }
//         }
//     }
    

//     return 0;
// }