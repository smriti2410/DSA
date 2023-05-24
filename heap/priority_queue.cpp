#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a[]={8,2,9,4,12,6};
    int n=sizeof(a)/sizeof(int);

//by deafult max heap is created meaning max element on top followed by lower value elements
    priority_queue<int> heap;
    cout<<"max heap as follows "<<endl;
    for(int x:a){
        heap.push(x); 

    }

    while(!heap.empty())
    {
        cout<<heap.top()<<endl;
        heap.pop();
    }

cout<<"Min heap is as follows "<<endl;
    priority_queue<int,vector<int>,greater<int> > minheap;

    for(int x : a){
        minheap.push(x);
    }


    while(!minheap.empty())
    {
        cout<<minheap.top()<<endl;
        minheap.pop();
    }



    return 0;
}