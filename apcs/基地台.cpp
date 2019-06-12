#include<iostream>
#include<algorithm>

#define ll long long
#define endl '\n'

using namespace std;
ll n,k,arr[500005],sum;

bool test(int sum){
    int cnt,cou=0;
    for(int y=0;y<k;y++){
        cnt=1;
        while(arr[cou]+sum>=arr[cou+cnt]){
            //遍歷所有的點
            cnt++;
            if(cnt>=n){
                return 1;
            }
        }
        cou+=cnt;
    }
    if(cou==n)return 1;
    else return 0;
}


int main(){
     
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll left=0;
    
    ll right=(arr[n-1]-arr[0])/k;
    //cout<<right<<endl;
    int ans;
    if(k==1)cout<<arr[n-1]-arr[0]<<endl;
    else{
        while(left<=right){
            sum=(left+right)/2;
            
            if(test(sum)==1){
                //on the left side
                ans=sum;    
                right=sum-1;
            }else{
                //on the right side
                left=sum+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

