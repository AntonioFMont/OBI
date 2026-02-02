#include <iostream>

using namespace std;

int main(){
    int n1, n2, limite;
    char op;
    cin >> limite >> n1 >> op >> n2;

    if(op == '+'){
        if(n1 + n2 > limite){
            cout << "OVERFLOW";
        }else{
            cout << "OK";
        }
    }else{
        if(n1 * n2 > limite){
            cout << "OVERFLOW";
        }else{
            cout << "OK";
        }
    }

}