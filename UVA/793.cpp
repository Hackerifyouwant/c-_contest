#include<iostream>
#include<string.h>
#include<cstdio>

#define ll long long
#define endl '\n'
#define MAX 1000

using namespace std;

ll g[MAX],gsize[MAX],n,x,y,ac,wa,cnt,k,mk;
char c;
bool b[MAX];
string s;

void init(int n){
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

    if(gx==gy)return ;
    else{
        g[gx]=gy;
        gsize[gy]+=gsize[gx];
    }
}

int main(){
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>n;
        mk=0;
        memset(b,0,sizeof(b));
        memset(g,0,sizeof(g));
        memset(gsize,0,sizeof(gsize));
        ac=0;
        wa=0;
        init(n);
        if(getchar()==' ')mk=1;
        
        while(getline(cin,s)&&mk==0){
            //cout<<"#"<<s<<endl;
            if(getchar()==' ')break;
            s[0]=c;
            for(int i=1;i<s.length();i++){
                if(s[i]==' ')cnt=1;
                else if(cnt==0)x=x*10+int(s[i]-'0');
                else if(cnt==1)y=y*10+int(s[i]-'0');
            }
            cin>>x>>y;
            b[x]=1;
            b[y]=1;
            if(c=='c'){
                //connect
                if(!check(x,y)){
                    unite(x,y);
                }
            }else{
                //question
                if(check(x,y))ac++;
                else{
                    wa++;
                }
            }

        }
        cout<<ac<<","<<wa<<endl<<endl;
    }
    return 0;
}