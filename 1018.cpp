#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    cout << n << endl;

    int valor, qtd;

    valor = n;

    qtd = valor / 100;
    cout << qtd << " nota(s) de R$ 100,00" << endl;
    valor %= 100;

    qtd = valor / 50;
    cout << qtd << " nota(s) de R$ 50,00" << endl;
    valor %= 50;

    qtd = valor / 20;
    cout << qtd << " nota(s) de R$ 20,00" << endl;
    valor %= 20;
    
    qtd = valor / 10;
    cout << qtd << " nota(s) de R$ 10,00" << endl;
    valor %= 10;

    qtd = valor / 5;
    cout << qtd << " nota(s) de R$ 5,00" << endl;
    valor %= 5;

    qtd = valor / 2;
    cout << qtd << " nota(s) de R$ 2,00" << endl;
    valor %= 2;

    qtd = valor / 1;
    cout << qtd << " nota(s) de R$ 1,00" << endl;
    valor %= 1;
}