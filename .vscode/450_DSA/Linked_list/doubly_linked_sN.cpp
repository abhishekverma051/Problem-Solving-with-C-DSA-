#include<iostream>
using namespace std;
class node
{
    public:
    int key;
    int data;
    node* prev;
    node* next;
    node()
    {
        key = 0;
        data = 0;
        prev = NULL;
        next = NULL;
    }
    node(int k , int d)
    {
        data = d;
        key = k;

    }
};

class doublyLinkedList
{
    public:
    node* head;
    doublyLinkedList()
    {
        head == NULL;
    }
    doublyLinkedList(node* n)
    {
        head = n;
    }
    // checking that the value exists in the list by using varibale named as key
    node* nodeExists(int k)
    {
        node* found = NULL;
        node* curr = head;
        while (curr!= NULL)
        {
            /* code */
            if(curr->key == k)
            {
                found = curr;

            }
            curr=curr->next;
        }
        return found;
        
    }
    // insert (append) a node at last
    void appendNode(node* newNode)
    {
        if(nodeExists(newNode->key)!= NULL)
        {
            cout<<"node already exists with key value : "<< newNode->key<< ". append another node with different key"<<endl;

        }
        else
        {
            if(head == NULL)
            {
                head = newNode;
                cout<<"node append as head node bcz list is empty "<<endl;

            }
            else{
                node* curr = head;
                while(curr->next != NULL)
                {
                    curr = curr->next;
                }
                curr->next = newNode;
                newNode->prev = curr;
                cout<<"node inserted at end"<<endl;
            }
        }
    }
         // 3 prepend node- insertion at first/head
         void insertAtbeg(node* newNode)
         {
             if(nodeExists(newNode->key)!=NULL)
             {
                 cout<<"Node already exist with key value : "<<newNode->key<<".insert a new node with a new key number"<<endl;

             }
             else{
                 if(head == NULL)
                 {
                     head = newNode;
                     cout<<"node inserted at head (list is empty)"<<endl;

                 }
                 else
                 {
                     head->prev=newNode;
                     newNode->next = head;
                     head = newNode;
                     cout<<"node insertes at beg"<<endl;
                 }
             }
         }
 // insertion in bw the list
 void insertBwList(int k,node* newNode)
 {
     node* curr = nodeExists(k);
     if(curr == NULL)
     {
         cout<<"no node exists list is mpty"<<endl;

     }
     else{
         node* nextNode = curr->next;
         // inset at end
         if(nextNode == NULL)
         {
             curr->next= newNode;
             newNode->prev = curr;
             cout<<"node inserted at end"<<endl;

         }
         else
         {
             newNode->next = nextNode;
             nextNode->prev = newNode;
             newNode->prev= curr;
             curr->next = newNode;
             cout<<"node inserted in bw"<<endl;

         }
     }
 }
 // 5 delete node at any pos
 void deleteNOde(int k)
 {
     node* curr = nodeExists(k);
     if(curr == NULL)
     {
         cout<<"no value found list is empty"<<endl;
     }
     else
     {
         if(head->key == k)
         {
             head = head->next;
             cout<<"node deleted with key vallues :"<<k<<endl;
         }
         else{
             node* newnode1 = curr->next;
             node* prev = curr->prev;
             if(newnode1 == NULL)
             {
                 prev->next = NULL;
                 cout<<"node deleted at the end"<<endl;
             }
         else{
             prev->next = newnode1;
             newnode1->prev = prev;
             cout<<"node deleted in bw"<<endl;
         }
      }

    }
 }
 // update node
 void updateNode(int k,int d)
 {
     node* curr = nodeExists(k);
     if(curr != NULL)
     {
         curr->data = d;
         cout<<"node data updated successfully"<<endl;
     }
     else
     {
         cout<<"node doesmt extxst of value  : "<< k << endl;
     }
 }
 // display
 void print()
 {
     if(head == NULL)
     {
         cout<<"no node presnet"<<endl;
     }else
     {
         cout<<"doubly linked list values: "<<endl;

         node* curr = head;
         while(curr != NULL)
         {
             cout<<"("<<curr->key <<" "<<curr->data<<") <--->";
             curr = curr->next;
         }
     }
 }
};
int main()
{
    doublyLinkedList d1 = doublyLinkedList();
    cout<<" enter the opion which you wants to preform"<<endl;
    int option;
    int key1,k1,data1;
    do
    {
    cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. appendNode()" << endl;
    cout << "2. prependNode()" << endl;
    cout << "3. insertNodeAfter()" << endl;
    cout << "4. deleteNodeByKey()" << endl;
    cout << "5. updateNodeByKey()" << endl;
    cout << "6. print()" << endl;
    cout << "7. Clear Screen" << endl << endl;
    cin >> option;
    node* n1 = new node();
    switch(option)
    {
        case 0:
        break;
        case 1:
             cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
             cin>>key1;
             cin>>data1;
             n1->key =key1;
             n1->data = data1;
      d1.appendNode(n1);
      break;

    case 2:
      
      cout << "Enter key & data of the New Node first: " << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;

      d1.insertAtbeg(n1);
      break;

    case 3:

     cout << "Enter key & data of the New Node first: " << endl;
      cin >> k1;
      d1.insertBwList(k1,n1);
      cin>>key1;
      cin>>data1;
      n1->key = key1;
      n1->data = data1;

      break;
    case 4:
    	cout<<"delete node by key operation-\nenter key of thenode to be deleted"<<endl;
      cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
      cin >> key1;
      cin >> data1;
      d1.deleteNOde(k1);

      break;
      case 5:
      	cout<<"update node by key operation-\nenter key % new data to be updated : "<<endl;
      	cin>>key1;
      	cin>>data1;
      	d1.updateNode(key1,data1);
      	break;
      	
    case 6:
      d1.print();

      break;
    case 7:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

  return 0;
}


    