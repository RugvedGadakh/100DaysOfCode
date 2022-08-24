#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int count=1;

    int i = 1;
 

    while(i<=n){
        int j = 1;

        while(j<=n){
            char ch = 'A' ;
            char alp = ch + count -1;
            cout<< alp;
            j=j+1;
            count =count+1;
        }
        cout<<endl;
        i=i+1;


    }
}