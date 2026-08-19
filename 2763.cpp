#include <bits/stdc++.h>

using namespace std;

int main(){
    string cpf;

    cin >> cpf;

    for(int i=0; i<cpf.size(); i++){
        if(cpf[i] == '.' || cpf[i] == '-'){
            cout << '\n';
            continue;
        }
        cout << cpf[i];
    }
    cout << "\n";
    
}