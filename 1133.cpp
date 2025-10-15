#include <iostream>

using namespace std;

int main(){

    int x, y;

    cin >> x;
    cin >> y;

    if(y<x){
        int aux = y;
        y = x;
        x = aux;
    }

    for(int i=x + 1; i<y; i++){
        if(i%5 == 2 ||i%5 == 3){
            cout << i << endl;
        }
    }

    return 0;
}