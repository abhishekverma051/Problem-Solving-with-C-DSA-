//Abhishek Verma 20BCS5439

#include <bits/stdc++.h>

using namespace std;



/* Link list node */

class Node {

public:

    int data;

    Node* next;

};



void push(Node** head_ref, int new_data)

{

    Node* new_node = new Node();

    new_node->data = new_data;



    //link the old list

    new_node->next = (*head_ref);

    (*head_ref) = new_node;

}



int count(Node* head, int element)

{

    Node* current = head;

    int count = 0;

    while (current != NULL) {

        if (current->data == element)

            count++;

        current = current->next;

    }

    return count;

}



int main()

{

    Node* head = NULL;

    //construct list 6->2->2->4->2

    push(&head, 2);

    push(&head, 4);

    push(&head, 2);

    push(&head, 2);

    push(&head, 6);

    cout<<"ABHISHEK VERMA-> 20BCS5439"<<endl;

    cout << "\n\nConstructed linked list is: 6->2->2->4->2" <<endl;



    int item;

    cout << "Enter the item to search occurences for: ";

    cin >> item;

    cout << "\ncount of "<< item << " is " << count(head, item);

    return 0;

}