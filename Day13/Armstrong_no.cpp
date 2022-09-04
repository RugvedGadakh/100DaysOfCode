#include <iostream>
using namespace std;

int main(){

    int N;
    cin>>N;
    int num = N;
    int sum =0;

    while(N!=0){

        int a = N%10;

        sum = sum + (a*a*a);
        N = N/10 ;
    }


    if(sum == num){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

 
}