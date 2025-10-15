#include <iostream>

using namespace std;

int main(){

    int vet[5];
    int contapar = 0;
    for(int i = 0; i<5; i++){
        cin >> vet[i];
    }

    for(int i = 0; i<5; i++){
        if(vet[i] % 2 == 0){
            contapar++;
        }
    }

    cout << contapar << " valores pares" <<endl;

    return 0;
}