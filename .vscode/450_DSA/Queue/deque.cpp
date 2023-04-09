
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define MAX 7


int arr[MAX];
int front = -1;
int rear = -1;
int empty()
{  
    if(front = -1)
    {
        return 1;

    }
    else
    return 0;
   
}
int full()
{
 if((front == 0 && rear == MAX-1) || (front ==rear+1))
 {
    return 1;
 }
 else
 return 0;
}
void insertAtFront(int data)
{
    if(full())
    {
        cout<<"Queue Overflow"<<endl;
    }
    if(front == -1)
    {
        front =0;
        rear = 0;
    }
    else if(front == 0)
    {
        front = MAX-1;
    }
    else
    {
        front = front -1;
    }

}
void insertAtRear(int data)
{
    if(full())
    {
        cout<<"queue overflow"<<endl;
    }
    if(front == -1)
    {
        front =0;
        rear =0;
    }
    else if(rear = MAX-1)
    {
        rear =0;
    }
    else{
        rear = rear + 1;
        arr[rear]  = data;
    }

}
int deleteAtFront()
{
    int data;
    if(empty())
    {
        cout<<"queu overflow"<<endl;
        exit(1);
    }
    data = arr[front];
    if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else{
        if(front ==MAX-1)
        {
            front = 0;
        }
        else
        {
            front = front +1;
        }
        return data;



       }
}
int deleteATrear()

{
    int data;
    if(empty())
    {
        cout<<"queu overflow"<<endl;
        exit(1);
    }
    data = arr[rear];
    if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else{
        if(rear ==0)
        {
            rear = MAX - 1;
        }
        else
        {
            rear = rear -1;
        }
        return data;
    }


}
void display()
{
    int i;
    if(empty())
    {
        cout<<"queue underflow"<<endl;
    }
    cout<<"queu elements are: "<<endl;
    i=front;
    if(front<=rear)
    {
        while(i<=rear)
        {
            cout<<arr[i++];
        }
    }
    else{
        while(i<MAX-1)
        {
            cout<<arr[i++];

        }
        i=0;
        while(i<=rear)
        {
            cout<<arr[i++];
        }
    }
}

int main()
{
    int choice,data;
    while(1)
    {

    printf("1.insert at the front end");
    cout<<endl;
    cout<<("2.insert at the rear end");
     cout<<endl;
    printf("3.delete at the front end");
     cout<<endl;
    cout<<("4.delete at the rear end");
     cout<<endl;
    cout<<"display"<<endl;
    cout<<"6.quit"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    
    switch(choice)
    {
        case 1:
        cout<<"input the element you want to enter"<<endl;
        cin>>data;
        insertAtFront(data);

        break;
        case 2:
        cout<<"input the element you want to enter"<<endl;
        cin>>data;
        insertAtRear(data);
        break;
        case 3:
       cout<< deleteAtFront();
        break;
        case 4:
       cout<< deleteATrear();
       
       case 5:
       display();
       break;
       case 6:
       exit(1);
       default:
       cout<<"wrong choice"<<endl;


    }
       cout<<front<<" "<<rear;
      display();
    }
  }
