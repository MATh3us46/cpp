#include <iostream>
#include <iomanip>

using namespace std;

float consumo(float x, float y);

int main(){

    float x, y;

    cin >> x;
    cin >> y;

    cout << fixed << setprecision(3) << consumo(x,y) << " km/l" << endl;

    return 0;
}

float consumo(float x, float y){
    float consumo = x / y;
    return consumo;
}