#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int maior = 1001;
    if (a < b && a < c){
        cout << "1" << endl;  
    }else if(b < a && b < c){
        cout << "2" << endl;
    }else if(c < a && c < b){
        cout << "3" << endl;
    }
    if(a < b && a > c || a < c && a > b){
        cout << "1" << endl;
    }else if(b < a && b > c || b < c && b > a){
        cout << "2" << endl;
    }else if(c < a && c > b || c < b && c > a){
        cout << "3" << endl;
    }
    if(a > b && a > c){
        cout << "1" << endl;
    }else if(b > a && b > c){
        cout << "2" << endl;
    }else if(c > a && c > b){
        cout << "3" << endl;
    }
    
}



/*
                    outra forma de fazer:

int main() {
    int T1, T2, T3;
    cin >> T1 >> T2 >> T3;

    int ouro, prata, bronze;

    // Descobrindo o ouro (menor tempo)
    if (T1 < T2 && T1 < T3) {
        ouro = 1;
        if (T2 < T3) {
            prata = 2;
            bronze = 3;
        } else {
            prata = 3;
            bronze = 2;
        }
    }
    else if (T2 < T1 && T2 < T3) {
        ouro = 2;
        if (T1 < T3) {
            prata = 1;
            bronze = 3;
        } else {
            prata = 3;
            bronze = 1;
        }
    }
    else {
        ouro = 3;
        if (T1 < T2) {
            prata = 1;
            bronze = 2;
        } else {
            prata = 2;
            bronze = 1;
        }
    }

    cout << ouro << endl;
    cout << prata << endl;
    cout << bronze << endl;

    return 0;
}


*/