#include<bits/stdc++.h>
using namespace std;

class compare {
    public:
    bool operator() (int a,int b){ //operator overloading 
        return a>b;
    }
};
int main()
{
    int a[]={8,2,9,4,12,6};
    int n=sizeof(a)/sizeof(int);

     priority_queue<int,vector<int>,compare > heap;
    cout<<"min heap using custom cpmarator class  "<<endl;
    for(int x:a){
        heap.push(x); 

    }

    while(!heap.empty())
    {
        cout<<heap.top()<<endl;
        heap.pop();
    }
    return 0;
}