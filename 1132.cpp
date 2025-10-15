#include <iostream>

using namespace std;

int main(){

    int x, y;

    cin >> x;
    cin >> y;

    if(y<x){
        int aux = y;
        y = x;
        x = aux;
    }

    int soma = 0;

    for(int i=x; i<=y; i++){
        if(i%13 != 0){
            soma += i;
        }
    }

    cout << soma << endl;

    return 0;
}