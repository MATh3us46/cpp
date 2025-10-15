#include <iostream>

using namespace std;

int main(){

    int c;
    cin >> c;
    
    for(int i=0; i<c; i++){
        string nome;
        int n;
        cin >> nome >> n; 
        
        if(nome == "Thor"){
            cout << 'Y' << endl;
        }
        else{
            cout << 'N' << endl;
        }
    }
    

    return 0;
}