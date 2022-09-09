#include <iostream>
using namespace std;

int main(){

    int T;
    cin>>T;

    for(int a=0; a<T; a++ ){

        float A,X,B,Y;
        cin>>A;
        cin>>X;
        cin>>B;
        cin>>Y;

        float Alice_speed = (A/X);
        float Bob_speed = (B/Y);

        cout<<Alice_speed<<endl;
        cout<< Bob_speed<<endl;

        if(Alice_speed>Bob_speed){
            cout<<"Alice"<<endl;
        }
        else if(Alice_speed<Bob_speed){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Equal"<<endl;
        }



    }
}