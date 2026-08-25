#include <iostream>

using namespace std;

int main(){
    int s, t, f, x;

    cin >> s >> t >> f;
    x = s + t + f;

    if(x >= 24){
        x -= 24;
    }
    else if(x < 0){
        x += 24;
    }

    cout << x << "\n";
}