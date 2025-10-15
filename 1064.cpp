#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double vet[6];
    int contapos = 0;
    double media = 0;
    for(int i = 0; i<6; i++){
        cin >> vet[i];
    }

    for(int i = 0; i<6; i++){
        if(vet[i] > 0){
            contapos++;
            media += vet[i];
        }
    }

    cout << contapos << " valores positivos\n";
    cout << fixed << setprecision(1) << media/contapos << endl;

    return 0;
}