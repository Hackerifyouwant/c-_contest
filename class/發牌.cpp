#include<iostream>
#include<queue>

#define ll long long
#define endl '\n'

using namespace std;

queue<int> q;

int main(){
    


    return 0;
}
/*
魔術師發牌問題
手上有一疊 13 張牌蓋著，
數 1，將牌翻開正好是黑桃A，
接著數 1,2，將第一張牌放到牌堆下方，並翻開第二張，正好是黑桃 2
接著數 1,2,3, 將 1和 2 依序放到牌堆下方，並翻開第三張，正好是黑桃 3
依此類推，最後全部13張牌翻完正好是 A,2,3, 4, 5, 6, 7, 8, 9,10,J, Q, K 
//                            1,3,6,10,15,21,28,36,45,55 66 78 91
//                                     3
//1 2 3 4 5 6 7 8 9 10 11 12 13
//1   
請問，原本牌的順序為何? 
*/