#include<array>
#include <iostream>
using namespace std;


int main(){
    // creating array :
    array<int,5> a = {5,3,2,4,1};

    
    // size of the array :
    int size = a.size();
    cout<<size<<endl;

    // obtaining array :
    for(int i =0; i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    // obtaining element from index :

    int element = a.at(3);

    cout<<element<<endl;

    // array is empty or not :

    cout<<a.empty()<<endl;

    // 1st element :

    cout<<a.front()<<endl;

    // last element :
    cout<<a.back()<<endl;







}