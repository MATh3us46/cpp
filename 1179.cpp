#include <iostream>
using namespace std;

int main(){
    int par[5], impar[5];
    int n;
    int cp = 0, ci = 0;

    for(int i = 0; i < 15; i++){
        cin >> n;

        if(n % 2 == 0){
            par[cp] = n;
            cp++;

            if (cp == 5) { 
                for (int j = 0; j < 5; j++) {
                    cout << "par[" << j << "] = " << par[j] << endl;
                }
                cp = 0; 
            }
        } 
        else{
            impar[ci] = n;
            ci++;

            if(ci == 5){ 
                for(int j = 0; j < 5; j++){
                    cout << "impar[" << j << "] = " << impar[j] << endl;
                }
                ci = 0;
            }
        }
    }

    for(int j = 0; j < ci; j++){
        cout << "impar[" << j << "] = " << impar[j] << endl;
    }
    for(int j = 0; j < cp; j++){
        cout << "par[" << j << "] = " << par[j] << endl;
    }

    return 0;
}
