#include <iostream>

using namespace std;

string mensagem(const int &valor);  

int main() {
    int n, v;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> v;
        cout << mensagem(v) << endl;
    }

    return 0;
}

string mensagem(const int &valor) {
    if(valor == 0){
        return "NULL";
    } 
    else if(valor % 2 != 0 && valor < 0){
        return "ODD NEGATIVE";
    } 
    else if(valor % 2 != 0 && valor > 0){
        return "ODD POSITIVE";
    } 
    else if(valor % 2 == 0 && valor < 0){
        return "EVEN NEGATIVE";
    } 
    else if(valor % 2 == 0 && valor > 0){
        return "EVEN POSITIVE";
    }
    return "";
}