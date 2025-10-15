#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

int main() {
    float p1[2];
    float p2[2];

    
    for(int i = 0; i < 2; i++){
        cin >> p1[i];
    }

    for(int i = 0; i < 2; i++){
        cin >> p2[i];
    }

    float distancia = sqrt(pow(p2[0] - p1[0], 2) + pow(p2[1] - p1[1], 2));

    cout << fixed << setprecision(4) << distancia << endl;

    return 0;
}