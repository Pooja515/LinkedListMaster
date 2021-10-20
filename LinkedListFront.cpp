#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
};
node* head; //global 
void Delete(int n)
{
    node* temp1=head;
    if(n==1)
    {
        head=temp1->next;
        delete(temp1);
        return;
    }  
    for(int i=0;i<n-2;i++)
    {
        temp1=temp1->next; //pointing to previous node
    } 
    node* temp2=temp1->next; // pointing to nth node
    temp1->next=temp2->next;
    delete(temp2);
}

void insert(int x,int n)
{
    node* temp=new node();
    temp->data=x;
    temp->next=NULL;
    if(n==1)
    {
     temp->next=head;
     head=temp;   
     return;
    }
    node* temp2=head;
    for(int i=0;i<n-2;i++)
    {
        temp2=temp2->next;
    }
    temp->next=temp2->next;
    temp2->next=temp;
}
void print()
{
   node* temp=head;
   while(temp!=NULL)
   {
       cout<<temp->data<<" ";
       temp=temp->next;
   }
   cout<<"\n";
}
   int main()
   {int n;
           head=NULL;
           insert(2,1);
           insert(4,2);
           insert(6,3);
           insert(8,4);
           insert(5,3);
           print();
               cout<<"give me n:";
               cin>>n;
               Delete(n);
               print();
           
    return 0;
 }

