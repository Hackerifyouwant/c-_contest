#include<iostream>
#include<map>

#define ll long long
#define endl '\n'

using namespace std;

ll b1,g1,c1,b2,g2,c2,b3,g3,c3,en,fir;
map<int , string> m;
map<int , string>::iterator iter;
map<int , string>::reverse_iterator iter_r; 

int main(){
    while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3){
        m[b1]="b1";
        m[g1]="g1";
        m[c1]="c1";
        m[b2]="b2";
        m[g2]="g2";
        m[c2]="c2";
        m[b3]="b3";
        m[g3]="g3";
        m[c3]="c3";
        iter=m.end();
        cout<<&iter;
        // for(iter = *(&m.end()-0x1);iter!=*(&m.begin()-0x1);iter--){
        //     cout<<iter->first<<" "<<iter->second<<endl;
        // }
    }




    return 0;
}