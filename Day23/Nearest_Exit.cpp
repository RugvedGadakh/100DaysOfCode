#include <iostream>
using namespace std;

int main(){
    int T;
    cin>>T;

    for(int i =0 ; i<T ; i++){
        int exit1,exit2;
        cin>>exit1;
 

        if(exit1<=50){
            cout<<"LEFT"<<endl;
        }
        else{
             cout<<"RIGHT"<<endl;
        }
    }
}