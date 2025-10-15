#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;

    while(true){
        cin >> n;
        if(n == 0){
            break;
        }

        int matriz[n][n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int valor = min(min(i, j), min(n - 1 - i, n - 1 - j)) + 1;
                matriz[i][j] = valor;
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << setw(3) << matriz[i][j];
                if(j < n - 1){
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl; 
    }

    return 0;
}
