#include<iostream>
#include<string.h>
//#define long long long long

using namespace std;

long long t,n;
char arr[105][105];
long long dp[105][105];
bool vi[105][105];

long long bang(long long x,long long y){
//                    位置   位置   
    if(y<0) return 0;
    if(x<0||x>=n)return 0;
    if(y==0)return 1;
    if(vi[x][y])return dp[x][y];
    vi[x][y] =true;
    long long a=0,b=0;
    if(x+1<n&&y-1>=0){
        if(arr[x+1][y-1]=='B'){
            if(x+1<n&&y-2>=0){
                if(arr[x+2][y-2]=='B'){
                    a=0;
                }else{
                    a = bang(x+2,y-2);
                }
            }else a=0;
        }else  a = bang(x+1,y-1);
    }else a=0;
    if(x-1>=0&&y-1>=0){
        if(arr[x-1][y-1]=='B'){
            if(x-2>=0&&y-1>=0){
                if(arr[x-2][y-2]=='B'){
                    b = 0;
                }else{
                    b = bang(x-2,y-2);
                }
            }else b=0;
        }else b = bang(x-1,y-1);
    }else b=0;
    return dp[x][y]=(a%1000007+b%1000007)%1000007;
}

int main(){
        ios::sync_with_stdio(0);
        cin>>t;
        for(long long i=0;i<t;i++){
            cin>>n;
            memset(vi,0,sizeof(vi));
            for(long long m=0;m<n;m++){
                for(long long y=0;y<n;y++){
                    cin>>arr[y][m];
                }
            }
            for(long long r=0;r<n;r++){
                for(long long w=0;w<n;w++){
                    if(arr[w][r]=='W'){
                        cout<<"Case "<<i+1<<": "<<bang(w,r)<<endl;
                        break;
                    }
                }
                //cout<<endl;
            }
        }
    
}
