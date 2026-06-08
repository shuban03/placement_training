#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head = NULL;
    }

    void insertAtEnd(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void deleteFront(){
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
   
};
class DoublyLinkedList{
    public:
    int data;
    Node* head;
    Node* tail;

};

int main(){
    LinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    list.display();
    list.deleteFront();
    list.display();


    return 0;
}


