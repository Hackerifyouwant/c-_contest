#include<iostream>
#include<vector>
#include<list>
#include<set>

#define ll long long
#define endl '\n'

using namespace std;

vector<list<ll> > map(7,list<ll>());
set <ll> discover;


void dfsimp(ll node){
    list<ll>::iterator it=map[node].begin();
    for(;it!=map[node].end();it++){
        if(discover.count(*it)==0){
            discover.insert(*it);
            cout<<"從"<<node<<"找到"<<*it<<endl;
            dfsimp(*it);
        }
    }
}

void dfs(ll start){
    discover.insert(start);
    dfsimp(start);
}

void InitMap(){
 
 map[0].push_back(2);
 map[0].push_back(1);
 
 map[1].push_back(0);
 map[1].push_back(2);
 
 map[2].push_back(4);
 map[2].push_back(3);
 map[2].push_back(0);
 map[2].push_back(1);
 
 map[3].push_back(2);
 map[3].push_back(4);
 map[3].push_back(5);
 
 map[4].push_back(6);
 map[4].push_back(5);
 map[4].push_back(3);
 map[4].push_back(2);
 
 map[5].push_back(4);
 map[5].push_back(3);
 
 map[6].push_back(4);
}
int main(){
    InitMap();
    dfs(0);
    return 0;
}