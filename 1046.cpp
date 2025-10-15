#include <iostream>

using namespace std;

int horas(int a, int b);

int main(){

    int a, b;
    cin >> a >> b;

    cout << "O JOGO DUROU " << horas(a, b) << " HORA(S)" << endl;

    return 0;
}

int horas(int a, int b){
    int h;

    if(a < b){
        h = b - a;
    }else if(a > b){
        h = (24 - a) + b;
    }else{
        h = 24;
    }

    return h;
}