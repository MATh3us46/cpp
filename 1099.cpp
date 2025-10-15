#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int x, y;
    
    for(int i=0; i<n; i++){
        cin >> x >> y;

        if(x>y){
            int aux;
            aux = y;
            y = x;
            x = aux;
        }

        int somaimpar=0;

        for(int j = x+1; j < y; j++) {
            if(j % 2 != 0) {
                somaimpar += j;
            }
        }

        cout << somaimpar << endl;
    }
    return 0;
}