#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    double f = (pow((1 + sqrt(5))/2, n) - pow((1 - sqrt(5))/2, n)) / sqrt(5);

    cout << fixed << setprecision(1) << f << "\n"; 
}