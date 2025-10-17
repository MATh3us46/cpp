#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int n;

    while(true){
        cin >> n;
        if(n == 0){
            break;
        }

        int matriz[n][n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                matriz[i][j] = pow(2, i + j);
            }
        }

        int maior = matriz[n-1][n-1];
        int largura = to_string(maior).size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << setw(largura) << matriz[i][j];
                if (j < n - 1){
                    cout << " ";
                }
            }
            cout << endl;
        }

        cout << endl;
    }

    return 0;
}
