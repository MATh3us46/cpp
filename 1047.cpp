#include <iostream>
using namespace std;

int paraMinutos(int h, int m);

int duracaoEmMinutos(int hi, int mi, int hf, int mf);

int main() {
    int hi, mi, hf, mf;
    cin >> hi >> mi >> hf >> mf;

    int duracao = duracaoEmMinutos(hi, mi, hf, mf);

    int h = duracao / 60;
    int m = duracao % 60;

    cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << endl;

    return 0;
}

int paraMinutos(int h, int m) {
    return h * 60 + m;
}

int duracaoEmMinutos(int hi, int mi, int hf, int mf) {
    int inicio = paraMinutos(hi, mi);
    int fim = paraMinutos(hf, mf);
    int duracao = fim - inicio;

    if (duracao <= 0) {
        duracao += 24 * 60; 
    }
    return duracao;
}