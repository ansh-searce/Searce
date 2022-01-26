#include<bits/stdc++.h>
using namespace std;

//Creating structure for Linked List
struct node{
    int data;
    struct node *next;
};

struct node *head, *tail = NULL;  //Initially setting the head and tail pointer NULL

void insert(int data)
{
    struct node *newData = (struct node*)malloc(sizeof(struct node));  //Creating new node for inserted data
    newData->data = data;  //Setting the node value as the inserted data value
    newData->next = NULL; 

    if(head==NULL) //If Linked List is empty then the head and tail will be set as the inserted data
    {
        head=newData; 
        tail=newData;
    }

    else //If Linked List is not empty then previous node's tails next will be set as the new data and we furter increment the tail to point to the newdata.
    {
        tail->next= newData;
        tail= newData;
    }
}

void display()
{
    struct node *curr= head;
    if(head==NULL) //This represents that the Linked List is empty so we will display the following message.
    {
        cout<<"Linked List is Empty"<<endl; 
    }

    else //While the current pointer does not become NULL we keep incrementing it and displaying the data associated with it.
    {
        while(curr!=NULL) 
        {
            cout<<curr->data<<" ";
            curr=curr->next;
        }

        cout<<endl;
    }
}

int main() 
{
    //Inserting test values
    insert(10);
    insert(100);
    insert(1000);
    display();
}