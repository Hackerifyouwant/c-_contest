#include<iostream>
#include<string.h>
#include<set>

using namespace std;


int main(){
    set<int> bang;
    set<int>::iterator iter;
    int i,j,sumi[10000]={0},sumj[10000]={0},c=0,n=0;
    while(cin>>i>>j){
        if(i<0&&j<0){
            break;
        }else{
            bang.insert(i);
            if((iter=bang.find(j))!=bang.end()){
                bang.erase(j);
            }
            sumj[j]++;
            sumi[i]++;
            n++;
            if(sumj[j]>1){
                cout<<"##"<<endl;
                c=1;
            }
            if(i==0&&j==0){
                //cout<<bang.size()<<endl;
                if(bang.size()>1){
                    cout<<"&&"<<endl;
                    c=1;
                }else{
                    int w=*bang.begin();
                    cout<<w<<endl;
                    if(sumi[w]<=1){
                        cout<<"%%"<<endl;
                        c=1;
                    }
                }
                if(c==1){
                    cout<<"false"<<endl;
                    cout<<c<<endl;
                }else{
                    cout<<"true"<<endl;
                    cout<<c<<endl;
                }
                memset(sumi,0,10000);
                memset(sumj,0,10000);
                bang.clear();
                c=0,n=0;
                
            }
        }
    }
    return 0;
}
// 6 8  5 3  5 2  6 4
// 5 6  0 0

// 8 1  7 3  6 2  8 9  7 5
// 7 4  7 8  7 6  0 0

// 3 8  6 8  6 4
// 5 3  5 6  5 2  0 0

// 0 0
// 1 2 0 0
// 1 2 1 3 4 5 0 0
// 1 1 0 0
// 1 2 2 1 0 0
// 1 2 1 2 0 0

// 1 2 2 3 3 1 4 5 0 0 

// -1 -1
BreakAllCTF{Y35_1_m3an_7h1s_0n3}
