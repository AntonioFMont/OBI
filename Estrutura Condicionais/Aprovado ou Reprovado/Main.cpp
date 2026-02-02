#include <iostream>

using namespace std;

int main(){
    double n1, n2;
    cin >> n1 >> n2;

    if((n1 + n2)/2 >= 7){
        cout << "Aprovado";
    } else if((n1 + n2)/2 >= 4){                // não precisa do    && (n1 + n2)/2 < 7    por que o codigo so vai chegar la caso o if anterior seja negado, ou seja o else if implica q o if anterior falhou.
        cout << "Recuperacao";
    } else{
        cout << "Reprovado";
    }

}