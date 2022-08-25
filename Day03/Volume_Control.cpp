#include<iostream>
using namespace std;

int main(){
    int T;

    cin>>T;



    for(int i=1; i<=T;i=i+1  ){
        int X,Y;
        cin>>X;
        cin>>Y;

        if(X>=Y){
            cout<<X-Y<<endl;
        }
        else{
            cout<<Y-X<<endl;
        }
        
    }

}
