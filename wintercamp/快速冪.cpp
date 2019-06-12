#include<iostream>

using namespace std;

int pow(int a,int x){
    int res = 1;
    while(x>0){
        if(x%2=1)//  判斷奇偶
            res*=a;


        x>>=1;
        a*=a;
        
    }
    return res;
}

int main(){
    return 0;
}