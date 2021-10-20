#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
};
node* reverse(node* head)
{
    node  *current,*prev,*next;
    current=head;
    prev=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        
    }
    head=prev;
    return head;
}
node* insert(node* head,int x)
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
return head;
}
void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data;
        head=head->next;
    }
}
int main()
{
    node* head=NULL;
    head=insert(head,2);
    head=insert(head,4);
    head=insert(head,6);
    head=insert(head,8);
    cout<<"the list is:\n";
    print(head);
    cout<<"\n reverse: \n";
    head=reverse(head);
    print(head);
}
