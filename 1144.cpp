#include <iostream>

using namespace std;

int main(){

    int n, um = 1;
    cin >> n;

    for(int i=0; i<n; i++){
        cout << um << " " << um * um << " " << um * um * um << endl;
        cout << um << " " << (um * um) + 1 << " " << (um * um * um) + 1 << endl;
        um++;
    }

    return 0;
}