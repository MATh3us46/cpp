#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int x, y;
        int nconta = 0, soma = 0;
        cin >> x >> y;

        while(nconta < y){
            if(x%2 != 0){
                soma += x;
                x++;
                nconta++;
            }
            x++;
        }

        cout << soma << endl;
    }

    return 0;
}