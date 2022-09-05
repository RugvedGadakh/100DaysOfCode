#include <iostream>
using namespace std;

int main(){
    int T;
    cin>>T;

    for (int i=0; i<T; i++){

        int n;
        cin>>n;
        int fact =1;

        for (int j=1; j<=n; j++){
            fact = fact*j;
        }
        cout<<fact<<endl;

        
       
    }
}