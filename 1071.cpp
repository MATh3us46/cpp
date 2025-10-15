#include <iostream>

using namespace std;

int main(){

    int x, y;
    cin >> x;
    cin >> y;

    int resul = 0;

    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    for(int i=x+1; i<y; i++){
        if(i % 2 != 0){
            resul += i;
        }
    }

    cout << resul << endl;

    return 0;
}