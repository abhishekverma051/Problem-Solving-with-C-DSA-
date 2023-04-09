#include<bits/stdc++.h>
using namespace std;
class LinkedList{
    struct node{
        int data;
        node* next;
        node(int d){
            data = d;
            next = NULL;
        }
    };
    node *head,*tail;
    public:
    linkedList(){
        head = NULL;
    }
    void insertAtBeg(int data){
        node *newNode = new node(data);
        if(head == NULL){
            head = newNode;
            tail= newNode;
        }else{
            newNode->next = head;
            head = newnNode;
            
    
          }
    }
    void print(){
        node *curr = head;
        while(curr != NULL){
            cout<< curr->data << "->";
            curr = curr->next;
        }
        cout<<"NULL";
    }
};
int main(){
    LinkedList l1 = LinkedList();
    l1.insertAtBeg(10);
    l1.insertAtBeg(20);
    l1.insertAtBeg(30);
    l1.print();
}