#include<iostream>
#include<algorithm>

#define  ll long long
#define endl '\n'

using namespace std;

int main(){
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    if(a[0]+a[1]>a[2]||a[2]-a[1]<a[0]){
        if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]){
            cout<<"Right"<<endl;
        }else if(a[0]*a[0]+a[1]*a[1]<a[2]*a[2]){
            cout<<"Obtuse"<<endl;
        }else{
            cout<<"Acute"<<endl;
        }
    }else{
        cout<<"No"<<endl;
    }




    return 0;
}