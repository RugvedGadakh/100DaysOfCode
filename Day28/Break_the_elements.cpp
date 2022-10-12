#include <iostream>
using namespace std;

int main() {
	

    int T;
    cin>>T;

    for(int i=0 ;i<T;i++){
        
        int size;
        cin>>size;

        int A[200000];
        for(int i =0;i<size;i++){
            cin>>A[i];
        }
        int countEven =0;
        int countOdd = 0;

        for(int i =0;i<size;i++){
            if(A[i]%2==0){
                countEven =countEven+1;
            }
            else if((A[i]+1)%2 ==0){
                countOdd =countOdd+1;
            }

        }
        cout<<countOdd<<endl;
        cout<<countEven<<endl;

        if(countEven == size){
            cout<<0<<endl;
        }
        else if(countOdd == size){
            cout<<0<<endl;
        }
        else if(countOdd > countEven){
            cout<<countEven<<endl;
        }
        else{
            cout<<countOdd<<endl;
        }

        
    }
}