#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int x;

    while(true){
        cin >> x;

        if(x == 0){
            break;
        }
        else{
            int soma=0, nconta = 0;
            while(nconta < 5){
                if(x%2 == 0){
                    soma += x;
                    x++;
                    nconta++;
                }
                x++;
            }
            cout << soma << endl;
        }
    }
    

    return 0;
}