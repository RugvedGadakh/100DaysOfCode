#include <iostream>
using namespace std;

int main(){
    int T;
    cin>>T;

    for(int i =0 ; i<T ; i++){
        int size;
        cin>>size;

        int arr[size];

        for(int i=0; i<size; i++){
            cin>>arr[i];
        }
        int count=0;

        for(int i=0; i<size; i++){
            int count=0;
            if(arr[i]%2 ==1){
                count = count+1;
            }

        }

        cout<<count<<endl;


    }
}