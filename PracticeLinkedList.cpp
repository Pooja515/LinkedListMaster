#include<bits/stdc++.h>
using namespace std;
class node //data type created
{
    public:
    int data;
    node* next;
};
node* head; // global variable
 /*void insertBeg(int x)
{
    node* temp=new node();
    temp->data=x;
    temp->next=head;
    head=temp;
}
*/
void insertEnd(int x)
{
    node* temp=new node();
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)
    head=temp;
    else
    {
    node* temp1=head;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;
}
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
    head=NULL;
    int n,x,i;
    cout<<"Hey! Give me n: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<" insert x";
        cin>>x;
        insertEnd(x);
        print();

    }
    return 0;
}
