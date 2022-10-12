#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;

    for(int i=0; i<T;i++){
        float A,B,X,Y;
        cin>>A;
        cin>>B;
        cin>>X;
        cin>>Y;
        
        float chef_time = A/X;
        float chefina_time = B/Y;

        cout<<chef_time<<endl;
        cout<<chefina_time<<endl;

        if(chef_time == chefina_time){
            cout<<"Both"<<endl;
        }
        else if(chef_time > chefina_time){
            cout<<"Chefina"<<endl;
        }
        else{
            cout<<"Chef"<<endl;
        }
        
    }
}