#include <iostream>

using namespace std;

int main(){

    int vet[100];

    for(int i=0; i<100; i++){
        cin >> vet[i];
    }

    int maior = vet[0];
    int index = 0;

    for(int i=0; i<100; i++){
        if(vet[i] > maior){
            maior = vet[i];
            index = i;
        }
    }
    cout << maior << endl;
    cout << index + 1 << endl;

    return 0;
}

