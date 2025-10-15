#include <iostream>

using namespace std;

int main(){

    int m, n;

    while(true){
        int soma = 0;
        cin >> m >> n;
        if(m <= 0 || n <= 0){
            break;
        }
        else{
            if(n<m){
                int aux = n;
                n = m;
                m = aux;
            }
            for(m; m<=n; m++){
                cout << m << " ";
                soma += m;
            }
            cout << "Sum=" << soma << endl;
        }
    }

    return 0;
}