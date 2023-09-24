#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* link;
    node(){

    }
    node(int value){
        data=value;
        link=NULL;
    }
};
void insertAtEnd(node* &head, int data){
    node* newnode = new node(data);

    if(head==NULL){
        head=newnode;
        return;
    }
    node* temp = new node(data);
    temp=head;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=newnode;
}

void print(node* head){
    node* temp = new node();
    temp = head;
    if(head==NULL){
        cout<<"Enpty list"<<endl;
        return;
    }
    cout<<"Data entered in the list :"<<endl;
    while(temp!=NULL){
        cout<<"Data = "<<temp->data<<endl;
        temp=temp->link;
    }
}
int main(){
    node* head=NULL;
    int n,k;
    cout<<"Input the number of nodes : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Input data for node "<<i<<" : ";
        cin>>k;
        insertAtEnd(head,k);
    }
    print(head);
}