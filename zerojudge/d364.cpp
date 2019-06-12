// #include<iostream>

// #define ll long long
// #define endl '\n'

// using namespace std;

// ll n,s,t,val[105];

// int gcd(int a,int b){
//     if(b%a==0)return a;
//     return gcd(b%a,a);
// }

// void partition(int index,int remain){
//     //目前的長度
//     //剩餘所要湊的數字
//     if(index==t-1){
//         //當長度等於所求時
//         for(int i=0;i<index;i++){
//             if(gcd(remain,val[i])>1){
//                 //檢查是否有不互質的數
//                 return ;
//             }
//         }
//         for(int i=0;i<index;i++){
//             //輸出答案
//             cout<<val[i]<<" ";
//         }

//         cout<<remain<<endl;
//         //輸出剩餘的數
//         return ;
//     }
//     int buffer=remain/(t-index),j;
//     //因為要按照字典序，不是從1跑到s，而是從1跑到~剩餘的數/剩餘的長度，這樣可以保證按到字典序
//     for(int i=1;i<=buffer;i++){
//         for(j=0;j<index;j++){
//             if(i<val[j]||gcd(i,val[j])>1){
//                 //檢查是否有不符合字典序的或是不互質的
//                 break;
//             }
//         }
//         if(j<index){
//             //如果有不合理的會在上一個迴圈break，導致j<index，因此此數列不合跳過處理
//             continue;
//         }
//         val[index]=i;
//         partition(index+1,remain-i);
//         //地回到下一個維度，剩餘數字扣掉這次取的數字
//     }
// }

// int main(){
//     while(cin>>n){
//         for(int i=1;i<=n;i++){
//             cin>>s>>t;
//             cout<<"Case "<<i<<":"<<endl;
//             partition(0,s);            
//         }
//     }
//     return 0;
// }

#include<iostream>

#define ll long long
#define endl '\n'

using namespace std;

ll s,t,val[105];

int gcd(int x,int y){
    if(y%x==0)return x;
    return gcd(y%x,x);
}

void dfs(int index,int number){
    if(index==t-1){
        for(int i=0;i<index;i++){
            if(gcd(number,val[i])>1){
                return ;
            }
        }
        for(int i=0;i<index;i++){
            cout<<val[i]<<" ";
        }
        cout<<number<<endl;
        return ;
    }
    
    int buffer=number/(t-index),j;
    for(int i=1;i<=buffer;i++){
        for(j=0;j<index;j++){
            if(i<val[j]||gcd(i,val[j])>1){
                break;
            }
        }
        if(j<index)continue;
        val[index]=i;
        
        
        dfs(index+1,number-i);
    }
}

int main(){
    int n;
    while(cin>>n){
        for(int i=1;i<=n;i++){
            cin>>s>>t;     
            cout<<"Case "<<i<<":"<<endl;
            dfs(0,s);
        }
    }
    return 0;
}