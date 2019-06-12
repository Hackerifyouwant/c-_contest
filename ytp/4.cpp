#include<iostream>

#define ll long long
#define endl '\n'

using namespace std;

//ovwx8bdpq
//bvvdbvvdbvvd
//dvvbdvvbdvvb
//bvvdbvvdbvvd
//dvd
//dvd
//bvb
//bvd
//dvb
//bvd
//bvb
//bbdd
//dddd



//bbvvdd
//ddvvbb
//abcde
//ddvvbb
char test(char c){
    if(c=='b')return 'd';
    else if(c=='d')return 'b';
    else if(c=='p')return 'q';
    else if(c=='q')return 'p';
    else return c;
}


int main(){
    string s,ns,nns;
    cin>>s;
    for(int i=0;i<s.length();i++){
        ns+=s[i];
        nns="";
        for(int y=ns.length();y>=0;y--){
            nns+=test(ns[y]);
        }
        if(ns==nns)cout<<"##"<<endl;
        cout<<nns<<ns<<endl;
    }
    return 0;
}



health 509
encouragement 588
life_plenitude 515
wealth 439
pressure 345 
