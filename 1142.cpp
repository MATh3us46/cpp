#include <iostream>

using namespace std;

int main(){

    int n, um = 1;
    cin >> n;

    for(int i=0; i<n; i++){
        cout << um << " " << um+1 << " " << um+2 << " PUM" << endl;
        um += 4;
    }

    return 0;
}