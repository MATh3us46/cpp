#include <iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    int vetparticipantes[5];
    
    int conta_acertos = 0;

    for(int i=0; i<5; i++){
        cin >> vetparticipantes[i];
    }

    for(int i=0; i<5; i++){
        if(vetparticipantes[i] == t){
            conta_acertos++;
        }
    }

    cout << conta_acertos << endl;

    return 0;
}