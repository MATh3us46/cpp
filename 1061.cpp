#include <iostream>
using namespace std;

int main() {
    string dia;
    int di, dt;
    int hi, mi, si;
    int ht, mt, st;
    char c;

    cin >> dia >> di;               
    cin >> hi >> c >> mi >> c >> si; 

    cin >> dia >> dt;
    cin >> ht >> c >> mt >> c >> st;

    int inicio = di * 24 * 3600 + hi * 3600 + mi * 60 + si;
    int fim    = dt * 24 * 3600 + ht * 3600 + mt * 60 + st;

    int duracao = fim - inicio;

    
    int dr = duracao / (24 * 3600);
    duracao %= 24 * 3600;

    int hr = duracao / 3600;
    duracao %= 3600;

    int mr = duracao / 60;
    int sr = duracao % 60;

    cout << dr << " dia(s)\n";
    cout << hr << " hora(s)\n";
    cout << mr << " minuto(s)\n";
    cout << sr << " segundo(s)\n";

    return 0;
}
