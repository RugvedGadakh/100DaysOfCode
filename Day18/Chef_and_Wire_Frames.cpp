#include <iostream>
using namespace std;

int main(){

    int T;
    cin>>T;

    for(int a=0; a<T; a++ ){

        int N,M,X;
        cin>>N;
        cin>>M;
        cin>>X;

        int total_length = 2*N;
        int total_breadth = 2*M; 

        int total_cost = (total_length + total_breadth)*X;

        cout<<total_cost<<endl;


    }
}