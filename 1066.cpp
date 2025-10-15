#include <iostream>
using namespace std;

int main() {

    int vet[5];
    int contapar = 0;
    int contaimpar = 0;
    int contapos = 0;
    int contaneg = 0;


    for (int i = 0; i < 5; i++) {
        cin >> vet[i];
    }

    for (int i = 0; i < 5; i++) {
        if (vet[i] % 2 == 0)     
            contapar++;
        else                        
            contaimpar++;

        if (vet[i] > 0)           
            contapos++;
        else if (vet[i] < 0)        
            contaneg++;
    }

    cout << contapar << " valor(es) par(es)" << endl;
    cout << contaimpar << " valor(es) impar(es)" << endl;
    cout << contapos << " valor(es) positivo(s)" << endl;
    cout << contaneg << " valor(es) negativo(s)" << endl;

    return 0;
}
