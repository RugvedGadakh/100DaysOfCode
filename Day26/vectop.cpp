#include<iostream>
#include<vector>
using namespace std;


int main(){
    // adding element to array & checking capacity :
    vector<int> a;
    cout<<"capacity : "<<a.capacity()<<endl; 

    a.push_back(1);
    cout<<"capacity : "<<a.capacity()<<endl; 

    a.push_back(2);
    cout<<"capacity : "<<a.capacity()<<endl; 

    a.push_back(3);
    cout<<"capacity : "<<a.capacity()<<endl; 


    

    
    // size of the array :
    int size = a.size();
    cout<<"size : "<<size<<endl;

    // obtaining array :
    cout<<"array"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;


    // obtaining element from index :

    int element = a.at(1);

    cout<<"at index 1 : "<<element<<endl;

    // 1st element :

    cout<<"front : "<<a.front()<<endl;

    // last element :
    cout<<"back : "<<a.back()<<endl;

    // popping out element

    cout<<"array after popping element : "<<endl;

    a.pop_back();
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    // clearing array :

    a.clear();
    cout<<"capacity after clearing array : "<<a.capacity()<<endl; 




}