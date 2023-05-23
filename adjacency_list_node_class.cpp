#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    string name;
    list<string>nbr;

    Node(string name){
        this->name=name;

    }
};

class Graph{
    unordered_map<string,Node*> m;

    public:
    Graph(vector<string> cities){
        for(auto city:cities )
        m[city]=new Node(city);

    }

    void addEdge(string x,string y, bool undir=false){
        m[x]->nbrs.push_back(y);
        
    }



};


int main()
{
  
    
}