#include<iostream>
#include<list>

#define ll long long
#define endl '\n'

using namespace std;

ll m,n,k;
list<ll> l;
list<ll>::iterator it;
int main(){
    cin>>m>>n>>k;
    for(int i=0;i<m;i++){
        l.push_back(i+1);
    }
    it=l.begin();
    for(int i=0;i<k;i++){
        for(int y=0;y<n-1;y++){
            it++;
            if(it==l.end()){
                it=l.begin();
            }
            //cout<<*it<<" ";
        }
        it=l.erase(it);
        if(it==l.end()){
            it=l.begin();
        }
    }
    cout<<*it<<endl;
    

    return 0;
}