#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double nota;
    double soma = 0;
    int conta = 0;

    while(conta < 2){
        cin >> nota;
        if (nota>=0 && nota<=10){
            soma += nota;
            conta++;
        } 
        else{
            cout << "nota invalida" << endl;
        }
    }

    cout << "media = " << fixed << setprecision(2)  << soma / 2 << endl;

    return 0;
}
