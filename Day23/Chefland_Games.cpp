#include <iostream>
using namespace std;

int main(){
    int T;
    cin>>T;

    for(int i =0 ; i<T ; i++){
        int ref1,ref2,ref3,ref4;
        cin>>ref1;
        cin>>ref2;
        cin>>ref3;
        cin>>ref4;

        if(ref1==1 || ref2==1 || ref3==1 || ref4==1){
            cout<<"OUT"<<endl;
        }
        else{
             cout<<"IN"<<endl;
        }
    }
}