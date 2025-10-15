#include <iostream>

using namespace std;

int main(){

    int x, z;
    cin >> x;
    cin >> z;

    while(z<=x){
        cin >> z;
    }

    int soma = 0;
    int cont = 0;
    int atual = x;

    while(soma <= z) {
        soma += atual;
        atual++;
        cont++;
    }

    cout << cont << endl;

    return 0;
}