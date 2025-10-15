#include <iostream>
#include <iomanip>

using namespace std;

int main(){

   int n;
   double soma, c;

    while(true){
        cin >> n;

        if(n<0){
            break;
        }
        else{
            soma += n;
            c++;
        }
    }
    cout << fixed << setprecision(2) << soma/c << endl;
   
    return 0;
}