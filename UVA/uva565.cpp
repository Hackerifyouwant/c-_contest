#include<iostream>

#define endl '\n'
#define ll long long

using namespace std;

string s;
ll y=0;
bool vis[20];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    while(getline(cin,s)){
        if(s[0]=='.'){
            for(int i=0;i<y;i++){
                for(int m=0;m<16;m++){
                    for(int y=0;y<16;y++){
                        if(arr[i][m]==)
                    }
                }
            }
            break;
        }
        y++;
        for(int i=0;i<s.length();i+=2){
            if(s[i]=='+'){
                arr[y][int(s[i+1])-65]=1;
                
            }else if(s[i]=='-'){
                arr[y][int(s[i+1])-65]=-1;
            }else{
                arr[y][int(s[i+1])-65]=0;
            }
        }
    }



    return 0;
}