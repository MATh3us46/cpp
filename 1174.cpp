#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double veta[100];
    
    for(int i=0; i<100;i++){
        cin >> veta[i];
    }

    for(int i=0; i<100;i++){
        if(veta[i] <= 10){
            cout << "A[" << i <<"] = " << fixed << setprecision(1) << veta[i] << endl;
        }
    }

    return 0;
}