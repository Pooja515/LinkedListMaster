#include<iostream>
using namespace std;
class node
{public:
    int data;
    node* next; //pointer stores address of a next node
};
node* head; //its global pointer variable and stores address of a first node

void insert(int x)
{
    node* temp=new node();/* new creates the memory block or dynamically memory allocate during runtime for 
                            new node creation.*/
    temp->data=x;
    temp->next=head;
    head=temp;//modify the temp instead of head becoz head will loose the reference of first node and also insertion at  beginning
}
void print()
{
    node* temp=head;
    cout<<"list is:";
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }

}

int main()
{
    int n,x,i;
    head=NULL; //empty list
    cout<<"how many numbers you wanna insert pujaa ? \n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\n enter number: \n";
        cin>>x;
        insert(x);
        print();
    }
}