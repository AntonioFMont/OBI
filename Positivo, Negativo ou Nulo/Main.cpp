#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;

    if(num == 0){
        cout << "nulo";
    } else if(num > 0){
        cout << "positivo";
    } else{
        cout << "negativo";
    }

}