#include<iostream>
#include<queue>
using namespace std;


int main(){

    queue<string>q;

    q.push("Dhoni");
    q.push("Virat");
    q.push("Rohit");

    cout<<"First elemnt : "<<q.front()<<endl;

    q.pop();
    cout<<"First elemnt : "<<q.front()<<endl;

    cout<<"Size : "<<q.size()<<endl;


    cout<<"empty or not : "<<q.empty()<<endl;



}