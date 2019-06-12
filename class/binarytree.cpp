#include<iostream>

#define ll long 
#define endl '\n'

using namespace std;



int main(){
    int i,level;
    int data[9]={0,6,3,5,9,7,8,4,2};
    int btree[16]={0};
    cout<<"原始陣列內容"<<endl;
    for(i=1;i<9;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
    for(i=1;i<9;i++){
        for(level=1;btree[level]!=0;){
            //比較樹根及陣列的值
            if(data[i]>btree[level]){
                //如果陣列內的值大於樹根，則往右子樹比較
                level=level*2+1;
            }else{
                //如果陣列內的值小於樹根，則往左子樹比較
                level*=2;
            }
        }//如果子數節的值不為0，則再與陣列中的值比較一次
        btree[level]=data[i];
    }
    cout<<"二元樹內容"<<endl;
    for(int i=1;i<16;i++){
        cout<<btree[i]<<" ";
    }
    cout<<endl;

    return 0;
}
