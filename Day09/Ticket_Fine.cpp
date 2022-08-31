
#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;

    for(int i =0; i<T; i++){

        int X,Q,P;

        cin>>X;
        cin>>P;
        cin>>Q;

        int fine;
        fine = (P-Q)*X;

        cout<<fine<<endl;

    }
    
}