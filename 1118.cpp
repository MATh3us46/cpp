#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double nota, soma = 0;
    int conta = 0, nc = 1;

    while(nc == 1){
        while(conta < 2){
            cin >> nota;
            if(nota >= 0 && nota <= 10){
                soma += nota;
                conta++;
            }
            else{
                cout << "nota invalida" << endl;
            }
        }
        cout << "media = " << fixed << setprecision(2) << soma / 2 << endl;
        soma = 0;
        conta = 0;
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> nc;

        while(nc != 1 && nc != 2){
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> nc;
        }
    }

    return 0;
}
