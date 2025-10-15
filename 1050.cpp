#include <iostream>

using namespace std;

string destination(int ddd);

int main(){

    int ddd;
    cin >> ddd;

    cout << destination(ddd) << endl;

    return 0;
}

string destination(int ddd){
    switch(ddd){
        case 61:
            return "Brasilia";
            break;
        case 71:
            return "Salvador";
            break;
        case 11:
            return "Sao Paulo";
            break;
        case 21:
            return "Rio de Janeiro";
            break;
        case 32:
            return "Juiz de Fora";
            break;
        case 19:
            return "Campinas";
            break;
        case 27:
            return "Vitoria";
            break;
        case 31:
            return "Brasilia";
            break;
        default:
            return "DDD nao cadastrado";
            break;
    }
}