#include<bits/stdc++.h>
using namespace std;

int main()
{

    stack<string> books;

    books.push("fiction");
    books.push("self help");
    books.push("biography");

    //printing the elements of stack

    while(!books.empty()){
        cout<<books.top()<<endl;
        books.pop();

    }

    return 0;
}