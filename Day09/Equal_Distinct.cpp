#include <iostream>
using namespace std;

int main(){
    
    int T;
    cin>>T;
    
    for(int j=0; j<T; j++){
    
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        
        cin>> arr[i];
    }
    
    if(n%2==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    }
}