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
                matriz[i][j] = abs(i - j) + 1;
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
