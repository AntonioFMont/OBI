#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b;
    if(a < 1 || a > 1000000000 || b < 1 || b > 1000000000){
        return 0;
    } else if (a == b){
        c = a;
    }else if(a > b){
        if(b * 3 == a + b){
            c = 0;
        }else{
            c = (b*3) - a - b;
        }
    }else if(b > a){
        if(a*3 == a + b){
            c = 0;
        }else{
            c = (a*3) - a - b;
        }
    }                   
    cout << c;
}