#include <iostream>

using namespace std;

int main(){

    int vet[10], n;
    
    cin >> n;

    vet[0] = n;

    for(int i=1; i<10;i++){
        vet[i] = n * 2;
        n*=2;
    }

    for(int i=0; i<10;i++){
        cout << "N[" << i <<"] = " << vet[i] << endl;
    }

    return 0;
}