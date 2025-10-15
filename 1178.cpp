#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double vet[100], x;

    cin >> x;

    for(int i=0; i<100; i++){
        vet[i] = x;
        cout << "N[" << i << "] = " << fixed << setprecision(4) << vet[i] << endl;
        x/=2;
    }

    return 0;
}