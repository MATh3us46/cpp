#include <iostream>

using namespace std;

string resultado(string a, string b, string c);

int main(){

    string a, b, c;
    cin >> a >> b >> c;

    cout << resultado(a, b, c) << endl;

    return 0;
}

string resultado(string a, string b, string c){
    if(a == "vertebrado"){
        if(b == "ave"){
            if(c == "carnivoro"){
                return "aguia";
            }else if(c == "onivoro"){
                return "pomba";
            }
        }else if(b == "mamifero"){
            if(c == "onivoro"){
                return "homem";
            }else if(c == "herbivoro"){
                return "vaca";
            }
        }
    }else if(a == "invertebrado"){
        if(b == "inseto"){
            if(c == "hematofago"){
                return "pulga";
            }else if(c == "herbivoro"){
                return "lagarta";
            }
        }else if(b == "anelideo"){
            if(c == "hematofago"){
                return "sanguessuga";
            }else if(c == "onivoro"){
                return "minhoca";
            }
        }
    }
}