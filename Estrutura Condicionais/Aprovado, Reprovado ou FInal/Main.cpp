#include <iostream>

using namespace std;

int main(){
    double n1, n2;
    cin >> n1 >> n2;

    if((n1*2 + n2*3)/ (2 + 3) >= 7){                // o problema foi que eu esqueci o ( ) depois da divisao, ja que eu queria fazer a soma antes de dividir
        cout << "Aprovado";
    } else if((n1*2 + n2*3)/ (2 + 3) >= 3){       // não precisa do &&, pois se ele chegou nesse else if, é porque o primeiro if é falso;
        cout << "Final";
    } else{
        cout << "Reprovado";
    }
}