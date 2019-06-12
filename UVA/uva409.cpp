#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <ctype.h>

using namespace std;

int main()
{

    int K,E;
    int Set = 1;
    while (cin >> K >> E)
    {
        vector<string> Keyword;
        vector<string> Excuses;
        vector<string> Words[21];
        vector<int> ExcusesNum;
        int MaxExcuessNum = 0;

        for (int i=0;i<K;i++)
        {
            string temp;
            cin >> temp;
            Keyword.push_back(temp);
        }

        char ch = getchar();
        for (int i=0;i<E;i++)
        {
            string excuse;
            getline(cin,excuse);
            Excuses.push_back(excuse);
        }
        /* 
            把 excuse 中所有的單字拆開
            並全部換成小寫
        */
        for (int i=0;i<E;i++)
        {
            string word;
            bool isNewWord = 1;
            for (int j=0;j<Excuses[i].length();j++)
            {
                if ( isalpha(Excuses[i][j]) )
                {
                    if ( !isNewWord )
                        word = "" , isNewWord = 1;
                    word.push_back(tolower(Excuses[i][j]));
                }
                else if ( isNewWord )
                {
                    isNewWord = false;
                    Words[i].push_back(word);
                }
            }
        }
        /*
            計算每一個 excuse 的 keyword 數量
            並加到 vector 中儲存，同時計算出現最多的次數
        */
        for (int i=0;i<E;i++)
        {
            int Num = 0;
            for (int j=0;j<K;j++)
            {
                for (int k=0;k<Words[i].size();k++)
                {
                    if ( Keyword[j] == Words[i][k] )
                        Num++;
                }
            }
            MaxExcuessNum = max( MaxExcuessNum , Num );
            ExcusesNum.push_back(Num);
        }

        cout << "Excuse Set #" << Set << endl;
        for (int i=0;i<ExcusesNum.size();i++)
        {
            if ( ExcusesNum[i] == MaxExcuessNum )
                cout << Excuses[i] << endl;
        }
        cout << endl;
        Set++;
    }
    return 0;
}
// #include<iostream>

// #define ll long long
// #define endl '\n'

// using namespace std;

// ll k,l,cnt;
// string s;
// string ess[100005],exec[100005];

// struct stat{
//     ll x,val;
// };

// bool cmp(stat l,stat r){
//     return l.val>r.val;
// }

// stat sum[100005];

// int main(){
//     while(cin>>k>>l){
//         cnt++;
//         memset(sum,0,100005);
//         l=l+1;
//         for(int i=0;i<k;i++){
//             cin>>ess[i];
//         }
//         for(int m=0;m<l;m++){
//             //cin>>exec[m];
//             getline(cin,exec[m]);
//         }
//         for(int i=0;i<l;i++){
//             for(int y=0;y<exec[i].size();y++){
//                 if(exec[i][y]>='A'&&exec[i][y]<='Z'){
//                     exec[i][y]+=32;
//                 }
//                 if(exec[i][y]<='a'||exec[i][y]>='z'){
//                     for(int m=0;m<k;m++){
//                         if(s==ess[m]){
//                             cout<<"#"<<ess[m]<<endl;
//                             sum[i].x=i;
//                             sum[i].val++;
//                             cout<<"##@#$"<<sum[i].val<<endl;
//                         }
//                     }
//                     s="";
//                 }else{
//                     s+=exec[i][y];
//                     //cout<<s<<endl;
//                 }
//             }
//         }
//         for(int i=0;i<l;i++){
//             cout<<sum[i].val<<endl;
//         }
//         sort(sum,sum+l,cmp);
//         int i=0;
//         cout<<"Excuse Set #"<<cnt<<endl;
//         cout<<exec[sum[0].x]<<endl;
//         while(sum[i].val==sum[i+1].val){
//             i++;
//             cout<<exec[sum[i].x]<<endl;
//         }
//     }


//     return 0;
// }

