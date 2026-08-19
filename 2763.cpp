#include <bits/stdc++.h>

using namespace std;

int main(){
    string cpf;

    cin >> cpf;

    for(auto c : cpf){
        if(c == '.' || c == '-'){
            cout << '\n';
            continue;
        }
        cout << c;
    }
    cout << "\n";
    
}