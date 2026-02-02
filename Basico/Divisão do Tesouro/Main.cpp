#include <iostream>

using namespace std;

/*
        Para conseguir resolver, basta você somar o nummero de marinheiros por 2, ja que o capitão recebe o dobro dos marinheiros, contaria como duas pessoas
*/

int main(){
    int tesouro, marinheiros, capitao;

    cin >> tesouro >> marinheiros;
    
    capitao = (tesouro / (marinheiros + 2)) *2;

    cout << capitao;
}