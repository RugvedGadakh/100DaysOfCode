#include<iostream>
using namespace std;

int main(){
    int n,k ;

    cin>>n;
    cin>>k;

    int count = 0;

    for(int i=1; i<=n; i++){

        int a;
        cin>>a;

        if(a%k == 0){
            count = count+1; 
        }
    }
    cout<< count<<endl;
}