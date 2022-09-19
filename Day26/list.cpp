#include<iostream>
#include<list>
using namespace std;


int main(){
    // adding element to array :
    list<int> a;
    
    a.push_back(1);
    a.push_front(2); 

    list<int> n(5,100);

    cout<<"array"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;
    

    
    // size of the array :
    int size = a.size();
    cout<<"size : "<<size<<endl;

    // obtaining array :
    cout<<"array"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;



    // 1st element :

    cout<<"front : "<<a.front()<<endl;

    // last element :
    cout<<"back : "<<a.back()<<endl;

    // earase out element

    a.erase(a.begin());

    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;





}