#include <iostream>

using namespace std;

int main(){
    int m, a, b;
    cin >> m >> a >> b;
    if(m - a - b < a && a > b){
        cout << a;
    } else if (m - a - b < b){
        cout << b;
    }else{
        cout << m - a - b;
    }
}