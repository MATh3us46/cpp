#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int vet[n];

    for(int i=0; i<n; i++){
        cin >> vet[i];
    }
    int menor = vet[0];
    int pos = 0;

    for(int i=1; i<n; i++){
        if(vet[i] < menor){
            menor = vet[i];
            pos = i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pos << endl;



    return 0;
}