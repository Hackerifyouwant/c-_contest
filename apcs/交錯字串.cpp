#include<iostream>
#include<algorithm>

#define ll long long 
#define endl '\n'

using namespace std;

ll k,sum[100005],cnt,arr[100005],cntt;
string s;

int judge(char x){
    if(x>='A'&&x<='Z')return 0;
    else return 1;
}


int main(){
    ios::sync_with_stdio();
    cin.tie(0);cout.tie(0);
    cin>>k>>s;
    
    for(int i=0;i<s.size();i++){
        if(judge(s[i])==judge(s[i+1])){
            //cout<<"1231231"<<endl;
            sum[cnt]++;
        }else{
            //cout<<"@#$"<<endl;
            sum[cnt]++;
            cnt++;
        }
    }
    //cout<<cnt<<endl;
    // for(int i=0;i<=cnt;i++){
    //     cout<<sum[i]<<endl;
    // }
    //cout<<"##"<<endl;
    for(int i=0;i<=cnt;i++){
        if(sum[i]==k){
            arr[cntt]+=k;
            //cout<<"= "<<cntt<<" "<<arr[cntt]<<endl;
        }else if(sum[i]>k){
            arr[cntt]+=k;
            //cout<<"+ "<<cntt<<" "<<arr[cntt]<<endl;
            cntt++;
            arr[cntt]+=k;
            //cout<<"+@@"<<cntt<<" "<<arr[cntt]<<endl;
        }else{
            cntt++;
        }
    }
    sort(arr,arr+cntt+1);
    cout<<arr[cntt]<<endl;
    
    return 0;

}