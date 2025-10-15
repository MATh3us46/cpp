#include <iostream>

using namespace std;

int main(){

    double vet[6];
    int count = 0;

    for(int i=0; i<6; i++){
        cin >> vet[i];
    }

    for(int i=0; i<6; i++){
        if(vet[i] >= 0){
            count++;
        }
    }

    cout << count << " valores positivos" << endl;

    return 0;
}