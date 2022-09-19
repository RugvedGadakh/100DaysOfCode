#include<iostream>
#include<stack>
using namespace std;


int main(){

    stack<string>s;

    s.push("Dhoni");
    s.push("Virat");
    s.push("Rohit");

    cout<<"Top element : "<<s.top()<<endl;

    s.pop();
    cout<<"Top element after pop : "<<s.top()<<endl;

    cout<<"Size : "<<s.size()<<endl;


    cout<<"empty or not : "<<s.empty()<<endl;



}