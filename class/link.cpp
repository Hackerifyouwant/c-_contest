#include<iostream>

#define ll long long
#define endl '\n'

using namespace std;


struct node{
    ll v;//節點value
    node *next;//下一個節點
};

node *insertnode=new node();

void delete_node(node *head){
    int find;
    node *temp,*follow;
    temp=head;//先把頭存起來
    cin>>find;//要刪掉的值 
    if(head==NULL)cout<<"Not Found"<<endl;
    if(head->v==find){
        head=head->next;
        delete temp;//刪掉存head的temp
    }
    //尋找要刪除的目標，只要temp不是最後一個且沒找到符合的值
    while(temp!=NULL&&temp->v!=find){
        follow=temp;
        temp=temp->next;
    }
    if(temp==NULL)cout<<"Not Found"<<endl;
    else{
        follow->next=temp->next;
        delete temp;
    }
}

void insert_node(node *head){
    node *temp,*follow;
    int pos,val;
    temp=head;//將頭存起來
    cin>>val>>pos;//輸入後一個的值
    insertnode->v=val;
    insertnode->next=NULL;
    if(head==NULL)cout<<"Not Found"<<endl;
    if(head->v==pos){
        insertnode->next=temp;
    }else{    
        while(temp!=NULL&&temp->v!=pos){
            follow=temp;
            temp=temp->next;
        }
        if(temp==NULL){
            follow->next=insertnode;
            delete temp;
        }else{
            follow->next=insertnode;
            insertnode->next=temp;
            delete temp;
        }
    }
}

int main(){
    ll count,value;
    cin>>count;//輸入節點個數
    node *head =new node();//新增節點
    cin>>value;
    head->v=value;//賦予head一個值
    head->next=NULL;//指向空的地方

    node *current=head;

    for(int i=1;i<count;i++){
        cin>>value;
        current->next=new node();
        current=current->next;
        current->v=value;
        current->next=NULL;
    }
    current=head;
    while(true){
        cout<<current->v<<" ";
        current=current->next;
        if(current==NULL){
            break;
        }
    }
    cout<<endl;
    //delete_node(head);
    insert_node(head);
    if(insertnode->next==head){
        current=insertnode;
    }else{
        current=head;
    }
    while(true){
        cout<<current->v<<" ";
        current=current->next;
        if(current==NULL){
            break;
        }
    }
    cout<<endl;

    return 0;
}