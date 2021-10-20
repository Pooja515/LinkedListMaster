#include<iostream>
using namespace std;
class node
{public:
    int data;
    node* next;
};
node* head;
void insert(int x,int n)
{
    node* temp1=new node(); //new : creates memory block in the heap 
    // new node created and address stored in pointer variable i.e temp1
    temp1->data=x; // in new node data is inserted
    temp1->next=NULL; // new node nxt points to null
    if(n==1) // insertion at beginning
    {
        temp1->next=head;//this statement works when head pointing existing node initially it is NULL  i.e list is empty
        head=temp1; /*update head i.e newly created address stored in pointer variable i.e temp1 assign 
                                                      to head node(modify) */
        return;
    }
    node* temp2=head; //temp2 pointers stores the address of head node
    for(int i=0;i<n-2;i++) //goes to (n-1)th node i.e previous node
       {
           temp2=temp2->next; // temp2 contains address of previou node
    }
    temp1->next=temp2->next; //link of previous node(i.e (n-1)th node)connects with the link of newly created node
    temp2->next=temp1;  //link of (n-1)th nodei.e previous node now points to newly created node address.
    
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
   insert(2,1);
   insert(3,2);
   insert(4,1);
   insert(5,2) ;
   insert(6,3);
   insert(7,4);
   insert(9,3);
   print();
}