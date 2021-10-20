#include<bits\stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* prev;
    node* next;
};
node* head;
/*
void insert(int x)
{
    node* temp= new node();
    temp->data=x;
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL)
    {
        head=temp;
        return;
    }
    head->prev=temp;
    temp->next=head;
    head=temp;
}
*/
void insertend(int x)
{
 node* temp= new node();
    temp->data=x;
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL)
    {
      head=temp;
        return;  
    }
    node* temp1=head;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;
    temp->prev=temp1;

}
void print()
{
    node* temp=head;
    while(temp!=NULL)
    {
      cout<<temp->data;
      temp=temp->next;
    }

}
int main()
{
    int n,x,i;
    cout<<"HEY! give me n :";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<" insert x :\n";
        cin>>x;
        insertend(x);
        print();
    }
    return 0;
}