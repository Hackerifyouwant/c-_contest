// #include<iostream>

// #define endl '\n'
// #define ll long long
// #define MAX 105

// using namespace std;

// struct node{
//     ll value;
//     node *left;
//     node *right;
// };
// typedef node treenode;//定義新的二元樹結點資料型態
// typedef treenode *Binarytree;//定義新的二元樹鏈結資料型態結構
// Binarytree rootnode;

// void add_node_to_tree(ll value){
//     Binarytree currentnode;
//     Binarytree newnode;
//     int flag=0;//用來記錄是否插入新的節點
//     newnode=(Binarytree)malloc(sizeof(treenode));
//     newnode->value=value;
//     newnode->left=NULL;
//     newnode->right=NULL;
//     //如果為空的二元樹，便將新的節點設為根節點
//     if(rootnode==NULL){
//         rootnode=newnode;
//     }else{
//         currentnode=rootnode;//指定一個指標指向根結點
//         while(!flag){
//             if(value<currentnode->value){
//                 //在左子樹
//                 if(currentnode->left==NULL){
//                     currentnode->left=newnode;
//                     flag=1;
//                 }else{
//                     currentnode=currentnode->left;
//                 }
//             }else{
//                 //在右子數
//                 if(currentnode->right==NULL){
//                     currentnode->right=newnode;
//                     flag=1;
//                 }else{
//                     currentnode=currentnode->right;
//                 }
//             }
//         }
//     }
// }

// int main(){
//     ll content[MAX];
//     ll i=0;
//     rootnode=(Binarytree)malloc(sizeof(treenode));
//     rootnode=NULL;
//     int n;
//     cin>>n;
//     for(i=0;i<n;i++){
//         cin>>content[i];
//     }
//     for(i=0;i<MAX;i++){
//         add_node_to_tree(content[i]);
//     }

//     return 0;
// }
#include<iostream>

#define ll long long
#define endl '\n'
#define MAX 105

using namespace std;

struct node{
    ll data;
    node *left;
    node *right;
};

typedef node treenode;
typedef treenode *binarytree;
binarytree rootnode;

void add_node_to_tree(ll value){
    ll flag=0;
    binarytree currentnode;
    binarytree newnode;
    newnode=(binarytree)malloc(sizeof(treenode));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    if(rootnode==NULL){
        rootnode=newnode;
    }else{
        currentnode=rootnode;
        while(!flag){
            if(currentnode->data>value){
                if(currentnode->left==NULL){
                    currentnode->left=newnode;
                    flag=1;
                }else{
                    currentnode=currentnode->left;
                }
            }else{
                if(currentnode->right==NULL){
                    currentnode->right=newnode;
                    flag=1;
                }else{
                    currentnode=currentnode->right;
                }
            }
        }
    }
}

void pre(binarytree ptr){
    //前序走訪
    if(ptr!=NULL){
        cout<<ptr->data<<" ";
        pre(ptr->left);
        pre(ptr->right);
    }
}
void in(binarytree ptr){
    //中序走訪
    if(ptr!=NULL){
        in(ptr->left);
        cout<<ptr->data<<" ";
        in(ptr->right);
    }
}
void post(binarytree ptr){
    //後序走訪
    if(ptr!=NULL){
        post(ptr->left);
        post(ptr->right);
        cout<<ptr->data<<" ";
    }
}

ll search(binarytree ptr,ll val){
    int cnt=0;
    while(true){
        if(ptr==NULL){
            cout<<"Not Found!"<<endl;
            return 0;
        }
        if(ptr->data==val){
            cout<<cnt<<endl;
            return cnt;
        }else if(ptr->data>val){
            ptr=ptr->left;
            cnt++;
        }else{
            ptr=ptr->right;
            cnt++;
        }
    }
}


void delete_node(binarytree ptr,ll val){
    int cnt=0;
    while(true){
        if(ptr==NULL){
            cout<<"Not Found!"<<endl;
        }
        if(ptr->data==val){
            int cnt=0;
            while(true){
                if(ptr==NULL){
                    ptr->right=rootnode->right;
                    ptr->left=rootnode->right;
                    rootnode=ptr;
                    break;
                }else{
                    ptr=ptr->right;
                }
            }
            in(rootnode);
        }else if(ptr->data>val){
            ptr=ptr->left;
            cnt++;
        }else{
            ptr=ptr->right;
            cnt++;
        }
    }
}

int main(){
    ll content[MAX];
    ll n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>content[i];
    }
    for(int i=0;i<n;i++){
        add_node_to_tree(content[i]);
    }
    // pre(rootnode);
    // cout<<endl;
    // in(rootnode);
    // cout<<endl;
    // post(rootnode);
    // cout<<endl;
    in(rootnode);
    int y;
    cin>>y;
    if(search(rootnode,y)!=0){
        cout<<"數中已有此節點"<<endl;
    }else{
        add_node_to_tree(y);
        in(rootnode);
        ll n;
        cin>>n;
        delete_node(rootnode,n);
    }
    return 0;
}