#include<iostream>

#define ll long long
#define endl '\n'

using namespace std;

ll ary[100005];

void qsort(int p, int q){
	if (p >= q){
	// 	0    4
		return;
	}
	int i, j;
	for (i=p+1, j=p+1; j<=q; i++, j++){
		//1      1    1   4  1    1
		for (; j<=q&&ary[j]>=ary[p]; j++);
			// 1  4     ary[1] >=ary[4] 1++
		if (j <= q){
		// 2 4
			swap(ary[i], ary[j]);
		//        ary[2] ary[1]
		}
		else{
			break;
		}
	}
	i--;
	swap(ary[p], ary[i]);
	qsort(p, i-1);
	qsort(i+1, q);
}


int main(){
	ll n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ary[i];
	}
	qsort(0,n-1);
	for(int i=0;i<n;i++){
		cout<<ary[i]<<" ";
	}
	


	return 0;
}