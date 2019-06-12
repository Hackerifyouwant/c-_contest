#include<iostream>
#include<stack>
#include<string.h>

#define ll long long
#define endl '\n'

using namespace std;


struct pos{
    ll x,y;
};
ll t,n[1005],sc,ec;
string s[1005];
stack <pos> st;
pos obj,vis[1005][1005];
string path[1005];
ll vec[2][2]={{1,0},{0,1}};

int main(){
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n[i];
        cin>>s[i];
    }
    for(int i=0;i<t;i++){
        cout<<"Case #"<<1<<": ";
        sc=0;
        ec=0;
        if(!st.empty())st.pop();
        cout<<"##"<<endl;
        // for(int m=0;m<n[i];m++){
        //     for(int k=0;k<n[i];k++){
        //         cout<<vis[m][k].x<<" ";
        //     }
        //     cout<<endl;
        // }
        obj.x=0;
        obj.y=0;
        st.push(obj);    
        for(int y=0;y<s[i].size();y++){
            pos p=st.top();
            st.pop();
            if(s[i][y]=='S'){
                //cout<<'E';
                ll nx=p.x+1;
                ll ny=p.y;
                vis[nx][ny].x=1;
                vis[nx][ny].y=0;
                obj.x=nx;
                obj.y=ny;
                st.push(obj);
                //0是往下走
                sc++;
            }else{
                //cout<<'S';
                ll nx=p.x;
                ll ny=p.y+1;
                vis[nx][ny].x=1;
                vis[nx][ny].y=1;
                obj.x=nx;
                obj.y=ny;
                st.push(obj);
                //1是往右走
                ec++;
            }
        }
        cout<<endl;
        if(sc==ec){
            cout<<s[i]<<endl;
            for(int y=0;y<s[i].size();y++){
                if(s[i][y]=='S')cout<<'E';
                else cout<<'S';
            }
            cout<<endl;
        }else{
            obj.x=0;
            obj.y=0;
            st.push(obj);
            while(!st.empty()){
                pos q=st.top();
                st.pop();
                if(q.x==n[i]-1&&q.y==n[i]-1)break;
                else{
                    for(int m=0;m<2;m++){
                        ll nx=q.x+vec[i][0];
                        ll ny=q.y+vec[i][1];
                        if(nx>=n[i]||nx<0){
                            continue;
                        }
                        if(ny>=n[i]||ny<0){
                            continue;
                        }
                        if(vis[nx][ny].x==1&&vis[nx][ny].y==m){
                            path[i]="";
                        }else{
                            obj.x=nx;
                            obj.y=ny;
                            st.push(obj);
                            vis[nx][ny].x=1;
                            vis[nx][ny].y=m;
                            path[i]+=m;
                        }
                    }
                }
            }
            cout<<path[i]<<endl;
        }
        
        memset(vis,0,sizeof(vis));
    }
    return 0;
}