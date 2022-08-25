#include<iostream>
using namespace std;

int main(){
    int n;

    cin>>n;



    for(int i=1; i<=n;i=i+1  ){
        int cab1, cab2;
        cin>>cab1;
        cin>>cab2;

        if(cab1<cab2){
            cout<<"FIRST"<<endl;
        }
        else if(cab1==cab2){
            cout<<"ANY"<<endl;
        }
        else{
            cout<<"SECOND"<<endl;
        }
    }

}