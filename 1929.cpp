#include <iostream>

using namespace std;

bool forma_triangulo(int x, int y, int z) {
    return (x + y > z) && (x + z > y) && (y + z > x);
}

int main(){

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(forma_triangulo(a, b, c) || forma_triangulo(a, b, d) || forma_triangulo(a, c, d) || forma_triangulo(b, c, d)){
        cout << "S" << endl;  
    } 
    else{
        cout << "N" << endl;  
    }

    return 0;
}