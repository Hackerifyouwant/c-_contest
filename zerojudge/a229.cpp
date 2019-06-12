#include<iostream>

#define ll long long
#define endl '\n'
#define Length 1005

using namespace std;

ll n;
void backtrake(char str[],int index,int left,int right){
    if(index==n){
        //當深度等於長度時，停止遞迴，輸出答案
        cout<<str<<endl;
        return ;
    }
    if(left<n/2){
        //left必小於等於n/2，所以在left<n/2的時候新增左括號
        str[index]='(';
        backtrake(str,index+1,left+1,right);
        //str[index]=' ';
    }
    if(left>right){
        str[index]=')';
        backtrake(str,index+1,left,right+1);
        //str[index]=' ';
    }
}



int main(){
    while(cin>>n){
        n*=2;
        char str[Length];
        backtrake(str,0,0,0);
    }

    return 0;
}