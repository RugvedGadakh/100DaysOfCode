#include<iostream>
#include<deque>
using namespace std;


int main(){
    // adding element to array :
    deque<int> a;
    
    a.push_back(1);
    a.push_front(2); 



    

    
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

    // earase out element

    a.erase(a.begin(),a.begin()+1);

    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;





}