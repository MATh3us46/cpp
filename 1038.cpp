#include <iostream>
#include <iomanip>

using namespace std;

float pedido(int cod, int qtd);

int main(){

    int cod, qtd;
    cin >> cod >> qtd;

    cout << "Total: R$ " << fixed << setprecision(2) << pedido(cod, qtd) << endl;

    return 0;
}

float pedido(int cod, int qtd){
    switch(cod){
        case 1:
            return 4.00 * qtd;           
        case 2:
            return 4.50 * qtd; 
        case 3:
            return 5.00 * qtd; 
        case 4:
            return 2.00 * qtd; 
        case 5:
            return 1.50 * qtd;
        default:
            return 0.0;  
    }
    
}