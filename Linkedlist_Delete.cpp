#include<iostream>
#include<stdio.h>
using namespace std;
class node //creation of node i.e datatype
{ public:
    int data;
    node* next;
};
node* head; // always points or store address of first node
void insert(int x,int n)
{
    node* temp1=new node(); //creation of new node and its address stored in temp1
    temp1->data=x;
    temp1->next=NULL;
    if(n==1) // insertion at beginning logic
    {
        temp1->next=head;
        head=temp1;// temp1 is modified contains address of newly created node and this address now head contains.
        return;
    }
    node* temp2=head; // temp2 pointers stores the address of head node
    for(int i=0;i<n-2;i++) //n-2 indicates position of previous node till it goes.
    {
        temp2=temp2->next;
    }

temp1->next=temp2->next; // link of previous node(i.e (n-1)th node)connects with the link of newly created node
temp2->next=temp1; // link of (n-1)th node now points to newly created node.
}
void Delete(int n)
{
    node* temp1=head;
    if(n==1)
    {
        head=temp1->next;//head now points to second node
        delete(temp1);//delete first node
        return;
    }

    for(int i=0;i<n-2;i++)
        temp1=temp1->next; //temp1 points to (n-1)th node(Previous node)
    node* temp2=temp1->next; //temp2  points to the nth node(The node user want to delete)
    temp1->next=temp2->next; //(n-1)th node(Previous node) connects(make link) with the (n+1)th node
    delete(temp2);//deletes the nth node(Deallocates the memory)
}
void print()
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data; //traversing
        temp=temp->next;
    }

cout<<"\n";
}
int main()
{
    int n,x;
    head=NULL;
    insert(2,1);
    insert(3,2);
    insert(4,1);
    insert(5,2);
    print();
    cout<<"enter position of an element to be deleted :\n";
    cin>>n;
    Delete(n);
    print();
}


