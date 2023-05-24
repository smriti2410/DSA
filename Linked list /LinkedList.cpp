#include<bits/stdc++.h>
using namespace std;

class node
{
    public: 
    int data;
    node* next;

    
};


int main()
{
    int A[]={1,2,3,4,5};
    int n=sizeof(A)/sizeof(int);
    node* head= new node;

    node* temp;
    node* last;

    head->data=A[0];
    head->next=NULL;
    last=head;

    //creating a linked list from the given array

    for(int i=1;i<n;i++){
        // create temp node;
        temp=new node;

        //populate the temp node 
        temp->data=A[i];
        temp->next=NULL;


        //
        last->next=temp;
        last=temp;
    }



    node* p=head;
    while(p!=NULL){
        cout<<p->data<< " -> " << flush;
        p=p->next;


    }



    return 0;
}