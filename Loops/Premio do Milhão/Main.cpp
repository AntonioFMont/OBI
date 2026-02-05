#include <iostream>

using namespace std;

int main(){
    int i, dias, aux, acessos = 0;
    cin >> dias;
    for(i = 0; i < dias; i++){
        cin >> aux;
        acessos += aux;
        if(acessos >= 1000000)
            break;
    }
    cout << i+1;
}