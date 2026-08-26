#include <iostream>

using namespace std;

int main(){
    int x, total = 0;
    int arr[] = {300, 1500, 600, 1000, 150};
    for(int i=0; i<5; i++){
        cin >> x;
        total += arr[i] * x;
    }

    cout << total + 225 << "\n";
}