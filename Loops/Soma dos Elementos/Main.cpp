#include <iostream>

using namespace std;

int main(){
    int soma = 0, n, x;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> x;
        soma += x;
    }
    cout << soma;

}