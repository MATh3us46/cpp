#include <iostream>

using namespace std;

int main(){
    int n, caso = 1;

    while(cin >> n){
        int total = 2;

        for(int i=2; i<=n; i++){
            total += i;
        }

        if(n == 0){
            total = 1;
            cout << "Caso " << caso << ": " << total << " numero\n";
            cout << "0";
        }

        if(n > 0){
            cout << "Caso " << caso << ": " << total << " numeros\n";
            cout << "0";
        }

        for(int i=1; i<=n; i++){
            for(int j=0; j<i; j++){
                cout << " " << i;
            }
        }

        cout << "\n\n";

        caso++;
    }
}