#include<iostream>
#include<algorithm>

#define ll long long
#define endl '\n'

using namespace std;

char trans(char x){
    if(x=='A'||x=='B'||x=='C')return '2';
    else if(x=='D'||x=='E'||x=='F')return '3';
    else if(x=='G'||x=='H'||x=='I')return '4';
    else if(x=='J'||x=='K'||x=='L')return '5';
    else if(x=='M'||x=='N'||x=='O')return '6';
    else if(x=='P'||x=='R'||x=='S')return '7';
    else if(x=='T'||x=='U'||x=='V')return '8';
    else if(x=='W'||x=='X'||x=='Y')return '9';
}

 string ns[1000005],s;

int main(){
    ll n;
    cin>>n;
    for(int i=0;i<n;i++){
        ll cnt;
        cin>>cnt;
        for(int y=0;y<cnt;y++){
            cin>>s;
            for(int m=0;m<s.size();m++){
                if(s[m]>='A'&&s[m]<='Z'&&s[m]){
                    ns[y]+=trans(s[m]);
                }else if(s[m]>='0'&&s[m]<='9'){
                    ns[y]+=s[m];
                }
            }
            cout<<ns[y]<<endl;

        }
    }

    return 0;
}