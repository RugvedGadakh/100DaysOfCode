#include <iostream>
using namespace std;

int main(){
    int T;
    cin>>T;

    for (int i=0; i<T; i++){

        int size;
        cin>>size;
        int num[5500];
          int count = 0;
        for(int j=0 ; j<size ; j++){
            cin>> num[j];
        }
        for(int j=0 ; j<size ; j++){
            if(num[j]>=1000){
                count = count+1;
            }
            
        }

    cout<<count<<endl;
       
    }
    
    
}
