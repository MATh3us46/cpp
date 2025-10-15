#include <iostream>

using namespace std;

int main(){

    int vet[1000];
    int t;
    int conta = 0;
    cin >> t;

    for(int i=0; i<1000; i++){
        vet[i] = conta;
        cout << "N[" << i << "] = " << vet[i] << endl;

        conta++;
        if(conta == t){
            conta = 0;
        }
    }

    return 0;
}