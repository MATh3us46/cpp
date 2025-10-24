#include <iostream>

using namespace std;

int main(){

    int l;

    while(cin >> l){
        int les[l];
        for(int i=0; i<l; i++){
            cin >> les[i];
        }

        int melhor = les[0];
        for(int i=1; i<l; i++){
            if(les[i] > melhor){
                melhor = les[i];
            }
        }

        if(melhor < 10){
            cout << 1 << endl;
        }
        else if(melhor >= 10 && melhor < 20){
            cout << 2 << endl;
        }
        else if(melhor >= 20){
            cout << 3 << endl;
        }
    }

    return 0;
}