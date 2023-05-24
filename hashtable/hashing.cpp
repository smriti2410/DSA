#include<bits/stdc++.h>
#include <unordered_map>


using namespace std;
int main()
{

    //storing data in key value pair -> hashtable 
    //map ,set- keys are sorted , balanced BST
    //unorered_maps - hashtable in C++ , stores key value pairs 
    //unordered_set - only store keys in random order


    unordered_map<string,int> menu;


    menu["key"]=1;
    menu["maggi"]=15;
    menu["coke"]=20;

    cout<<"Enter Name of item to check in menu"<<endl;

    string item;
    cin>>item;

    if(menu.count(item)==0)
    {
        cout<<"This Item is not Available ";
    }

    else
    cout<<item<<" is avaialble priced at "<<menu[item]<<endl;
    return 0;
}