#include <iostream>

using namespace std;

int main(){

    int x;

    int al = 0, ga = 0, di = 0;

    do{
        cin >> x;
        if(x == 1){
            al++;
        }
        else if(x == 2){
            ga++;
        }
        else if(x == 3){
            di++;
        }
    }while(x != 4);

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << al << endl;
    cout << "Gasolina: " << ga << endl;
    cout << "Diesel: " << di << endl;

    return 0;
}