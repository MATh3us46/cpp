#include <iostream>
#include <iomanip>

using namespace std;

float qtd(float t, float v);

int main(){

    float t, v;

    cin >> t;
    cin >> v;

    cout << fixed << setprecision(3) << qtd(t, v) << endl; 

    return 0;
}

float qtd(float t, float v){
    float qtd;
    return qtd = (v/12) * t;
}