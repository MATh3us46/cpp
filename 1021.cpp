#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double n;
    cin >> n;

    int valor = round(n * 100); 
    int qtd;

    cout << "NOTAS:" << endl;

    qtd = valor / 10000;
    cout << qtd << " nota(s) de R$ 100.00" << endl;
    valor %= 10000;

    qtd = valor / 5000;
    cout << qtd << " nota(s) de R$ 50.00" << endl;
    valor %= 5000;

    qtd = valor / 2000;
    cout << qtd << " nota(s) de R$ 20.00" << endl;
    valor %= 2000;

    qtd = valor / 1000;
    cout << qtd << " nota(s) de R$ 10.00" << endl;
    valor %= 1000;

    qtd = valor / 500;
    cout << qtd << " nota(s) de R$ 5.00" << endl;
    valor %= 500;

    qtd = valor / 200;
    cout << qtd << " nota(s) de R$ 2.00" << endl;
    valor %= 200;

    cout << "MOEDAS:" << endl;

    qtd = valor / 100;
    cout << qtd << " moeda(s) de R$ 1.00" << endl;
    valor %= 100;

    qtd = valor / 50;
    cout << qtd << " moeda(s) de R$ 0.50" << endl;
    valor %= 50;

    qtd = valor / 25;
    cout << qtd << " moeda(s) de R$ 0.25" << endl;
    valor %= 25;

    qtd = valor / 10;
    cout << qtd << " moeda(s) de R$ 0.10" << endl;
    valor %= 10;

    qtd = valor / 5;
    cout << qtd << " moeda(s) de R$ 0.05" << endl;
    valor %= 5;

    qtd = valor / 1;
    cout << qtd << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
