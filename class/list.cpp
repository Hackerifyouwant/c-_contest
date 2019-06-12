#include<iostream>
#include<list>

#define ll long long
#define endl '\n'

using namespace std;

list<ll> l;

int main(){
    l.push_back(1);
    l.push_back(2);
    l.push_back(5);
    list<ll>::iterator it;
    it=l.begin();
    for(;it!=l.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}