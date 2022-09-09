#include <iostream>
using namespace std;

int main(){

    int T;
    cin>>T;

    for(int a=0; a<T; a++ ){

        int W,X,Y,Z;
        cin>>W;
        cin>>X;
        cin>>Y;
        cin>>Z;

        int total_balance = W + (X*Z)-(Y+Z);

        cout<<total_balance<<endl;


    }
}