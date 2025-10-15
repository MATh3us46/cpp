#include <iostream>

using namespace std;

int main(){

    int vetn[20];
    int vetnc[20];
    int conta = 19;
    
    for(int i=0; i<20;i++){
        cin >> vetn[i];
    }

    for(int i=0; i<20;i++){
        vetnc[conta] = vetn[i];
        conta--;
    }

    for(int i=0; i<20;i++){
        cout << "N[" << i <<"] = " << vetnc[i] << endl;
    }
    

    return 0;
}