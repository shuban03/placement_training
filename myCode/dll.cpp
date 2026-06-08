#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*  next;
    Node* prev;

    Node(int val=0){
        data=val;
        next=nullptr;
        prev=nullptr;
    }
    void display(Node* head){
        Node* temp = head;
        while(temp){
        cout<<temp->data<<"->";
        temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void revDisplay(Node* tail){
        Node* temp=tail;
        while(temp){
            cout<<temp->data<<"->";
            temp=temp->prev;
          }
          cout<<"NULL";
    }

    void delBeg(){
        if(head==nullptr)
    }


};

int main(){
    Node* head;
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    

    n1->next=n2;
    n1->prev=nullptr;
    n2->next=n3;
    n2->prev=n1;
    n3->next=nullptr;
    n3->prev=n2;
    head=n1;
    n1->display(head);
    n1->revDisplay(n3);
    cout<<endl;
    return 0;
}