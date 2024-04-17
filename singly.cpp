//singly linked list in cppp
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    };
    void insertAtHead(Node* &head,int d){
     Node*temp=new Node(d);
     temp->next=head;
        head=temp;
    }
    void printnode(Node*&head){
        Node*temp=head;
        while(temp->next!=NULL){
            cout<<temp->data<<endl;
            temp =temp->next;
        }
    }
    int main(){
        Node*node1=new Node(10);
        cout<<node1->data<<endl;
        cout<<node1->next<<endl;
        Node*head=node1;
        insertAtHead(head,12);
        insertAtHead(head,13);
        insertAtHead(head,14);
        insertAtHead(head,15);
        printnode(head);
        return 0;

    }
