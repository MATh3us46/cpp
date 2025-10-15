#include <iostream>

using namespace std;

int main(){

    int c;
    cin >> c;
    
    for(int i=0; i<c; i++){
        int n;
        cin >> n;
        if(n % 2 != 0){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
        
    }
    

    return 0;
}