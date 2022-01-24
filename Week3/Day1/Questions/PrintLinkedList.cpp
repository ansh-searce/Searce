#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *head, *tail = NULL;  

void insert(int data)
{
    struct node *newData = (struct node*)malloc(sizeof(struct node));  
    newData->data = data;  
    newData->next = NULL; 

    if(head==NULL)
    {
        head=newData;
        tail=newData;
    }

    else
    {
        tail->next= newData;
        tail= newData;
    }
}

void display()
{
    struct node *curr= head;
    if(head==NULL)
    {
        cout<<"Linked List is Empty"<<endl;
    }

    else
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
    insert(10);
    insert(100);
    insert(1000);
    display();
}