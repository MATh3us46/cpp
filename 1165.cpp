#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        int conta = 0;

        for(int j=1; j<=x; j++){
            if(x%j == 0){
                conta++;
            }
        }

        if(conta == 2){
            cout << x << " eh primo" << endl;
        }
        else{
            cout << x << " nao eh primo" << endl;
        }

    }

    return 0;
}