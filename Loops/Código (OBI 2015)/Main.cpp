#include <iostream>

using namespace std;
 
int main(){
    int N, X, aux = -1, aux2 = -1, aux3 = -1, contador = 0;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> X;
        if(X == 1){
            aux = i;
        }else if(aux != -1){
            if(aux == i-1){
                aux2 = i;
            }else if(aux2 != -1 && aux2 == i-1){
                aux3 = i;
            }
        }
        if( i >= 2 && aux + aux2 + aux3 == (i-2) + (i-1) + i){
            contador++;
            aux = -1;
            aux2 = -1;
            aux3 = -1;
        }
    }
    cout << contador;
}