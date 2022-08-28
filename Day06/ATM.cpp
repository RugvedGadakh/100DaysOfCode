#include<iostream>
using namespace std;

int main(){

    int X ;
    cin>>X;

    float Y;
    cin>>Y;

    if((X % 5 ==0) && (Y- X -0.5>=0) ){
        float amt_blc = Y- X -0.5 ;

        cout<< amt_blc<<endl;
    }
    else{
        cout<< Y<<endl;
    }
}