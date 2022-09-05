#include <iostream>
using namespace std;

int main(){

    int count = 0;


    int num[4];

    for(int i = 0; i<4; i++) {
        cin >> num[i];

}
    for(int j =0; j<4 ;j++){
        if(num[j]>=10){
            count = count+1;
        }
    }
    cout<<count<<endl;
}
