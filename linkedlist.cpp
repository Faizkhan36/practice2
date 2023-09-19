#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
   Node(int data)
   {
    this->data=data;
    this-> next=NULL;
   }
};
void insertAtHead(Node* &head,int data)
      {
          Node* temp=new Node(data);
           temp->next=head;
            head=temp;
      }
void printNode(Node* &head)
        {
          Node* temp= head;
          while(temp!=NULL)
          {
            cout<<temp->data<<" ";
            temp=temp->next;
          }
          cout<<endl;
        }
int main()
          {
                Node* linkedlist=new Node(10);
            // cout<<linkedlist->data<<endl;
                // cout<<linkedlist->next;
                Node* head=linkedlist;
                //printNode(head);
                insertAtHead(head,12);
               // printNode(head);
                insertAtHead(head,15);
                printNode(head);
          }