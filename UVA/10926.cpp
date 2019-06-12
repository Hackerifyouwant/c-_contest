#include<iostream>
#include<vector>
#include<string.h>

#define ll long long
#define endl '\n'
#define MAX 105

using namespace std;

vector<ll>maph[MAX];
ll vis[MAX],h,ans,maxh;
void dfs(int start){
	//cout<<"**"<<start<<endl;
	vis[start]=1;
	for(int i=0;i<maph[start].size();i++){
		if(vis[maph[start][i]]==0){
			//vis[maph[start][i]]=1;
			dfs(maph[start][i]);
			h++;
		}
	}
	
}

int main(){
	int n;
	while(cin>>n){
		if(n==0)return 0;
		for(int i=0;i<101;i++)maph[i].clear();
		for(int i=1;i<=n;i++){
			int k;
			cin>>k;
			for(int y=1;y<=k;y++){
				int x;
				cin>>x;
				maph[i].push_back(x);
			}
		}
		ans=1;
		h=0;
		maxh=0;
		for(int i=1;i<=n;i++){
			memset(vis,0,sizeof(vis));
			h=0;
			dfs(i);
			//cout<<"&&"<<h<<endl;
			if(h>maxh){
				ans=i;
				maxh=h;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}