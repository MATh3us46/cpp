#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        unsigned long long fzero = 0, fum = 1, soma;

        if(n == 0){
            cout << "Fib(" << n << ") = " << fzero << endl;
        } 
        else if(n == 1){
            cout << "Fib(" << n << ") = " << fum << endl;
        } 
        else{
            for(int j = 2; j <= n; j++){
                soma = fzero + fum;
                fzero = fum;
                fum = soma;
            }
            cout << "Fib(" << n << ") = " << fum << endl;
        }
    }

    return 0;
}
