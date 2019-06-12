#include<iostream>

#define ll long long
#define endl '\n'

using namespace std;

ll cnt,pot,arr[105][105],a,b,sumnt;
bool base_bag[4];

int convert(string s){
    if(s=="1B")return 1;
    if(s=="2B")return 2;｀
    if(s=="3B")return 3;
    if(s=="HR")return 4;
    if(s=="FO"||s=="GO"||s=="SO")return 0;
    return -1;
}

int main(){
    for(int i=0;i<9;i++){
        cin>>a;
        for(int m=0;m<a;m++){
            string s;
            cin>>s;
            arr[i][m]=convert(s);
        }
    }
    
    cin>>b;
    for(int i=0;i<a;i++){
        for(int m=0;m<9;m++){
            //cout<<"##"<<m<<" "<<base_bag[1]<<" "<<base_bag[2]<<" "<<base_bag[3]<<endl;
            //cout<<"@@"<<m<<" "<<cnt<<" "<<pot<<endl;
            if(arr[m][i]==0){
                cnt++;
                sumnt++;
            }
            if(sumnt>=b){
                cout<<pot<<endl;
                return 0;
            }
            if(cnt>=3){
                //清空壘包
                cnt=0;
                base_bag[1]=0;
                base_bag[2]=0;
                base_bag[3]=0;
            }
            if(arr[m][i]==1||arr[m][i]==2||arr[m][i]==3){
                //推壘包
                bool non=0;
                bool vis[4]={0};
                for(int w=3;w>=0;w--){
                    //cout<<"##"<<base_bag[1]<<" "<<base_bag[2]<<" "<<base_bag[3]<<endl;
                    if(base_bag[w]==1){
                        if(vis[w]==0){
                            //cout<<"幹"<<endl;
                            if(w+arr[m][i]>=4){
                                //cout<<w<<" "<<arr[m][i]<<" "<<"123"<<endl;
                                pot++;
                            }
                            base_bag[w+arr[m][i]]=1;
                            vis[w+arr[m][i]]=1;
                            base_bag[w]=0;
                            base_bag[arr[m][i]]=1;
                        non=1;
                        }
                    }    
                }
                if(non==0){
                    //cout<<"4567865678"<<endl;
                    base_bag[arr[m][i]]=1;
                }
            }else if(arr[m][i]==4){
                //分數加上壘包上人數
                //清空壘包
                for(int w=1;w<=3;w++){
                    if(base_bag[w]==1)pot++;
                }
                base_bag[1]=0;
                base_bag[2]=0;
                base_bag[3]=0;
            }
        }   
    }
    return 0;
}