#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double triangulo(double a, double c);
double circulo(double c);
double trapezio(double a, double b, double c);
double quadrado(double b);
double retangulo(double a, double b);

int main(){

    double a, b, c, resposta;

    cin >> a >> b >> c;

    resposta = triangulo(a, c);
    cout << "TRIANGULO: " << fixed << setprecision(3) << resposta << endl;
    resposta = circulo(c);
    cout << "CIRCULO: " << fixed << setprecision(3) << resposta << endl;
    resposta = trapezio(a, b, c);
    cout << "TRAPEZIO: " << fixed << setprecision(3) << resposta << endl;
    resposta = quadrado(b);
    cout << "QUADRADO: " << fixed << setprecision(3) << resposta << endl;
    resposta = retangulo(a, b);
    cout << "RETANGULO: " << fixed << setprecision(3) << resposta << endl;

    return 0;
}

double triangulo(double a, double c){
    return (a * c) / 2;
}
double circulo(double c){
    return 3.14159 * pow(c, 2);
}
double trapezio(double a, double b, double c){
    return (a + b) * c / 2;
}
double quadrado(double b){
    return b * b;
}
double retangulo(double a, double b){
    return a * b;
}