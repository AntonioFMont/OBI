#include <iostream>

using namespace std;

int main(){
    int distancia, sensor, resto;
    cin >> distancia;
    resto = (distancia-3) % 8;

    switch (resto){
    case 3:
        sensor = 1;
        break;
    case 4:
        sensor = 2;
        break;
    case 5:
        sensor = 3;
        break;
    default:
     cout << "Esse numero nao e valido" << endl;
        break;
    }
    if(resto >= 3 && resto <= 5)
        cout << sensor;
}