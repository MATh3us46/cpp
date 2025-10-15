#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    int cont = 0;
    while (cont < 6) {         
        if (x % 2 != 0) {       
            cout << x << endl;
            cont++;
        }
        x++;                    
    }

    return 0;
}
