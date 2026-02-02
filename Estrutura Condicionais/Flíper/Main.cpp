#include <iostream>

using namespace std;

int main(){
    bool P, R;
    cin >> P >> R;

    if(!P){
        cout << "C";
    } else if (P && R){
        cout << "A";
    } else if(P && !R){             // se fosse só o else{ cout << "B"; } ja dava certo, botei so para me acostumar com o formato.
        cout << "B";
    }
}

// para usar um laço booleano inves de fazer 
// 
// bool x = true;
// 
// while(x == true)
// 
// é melhor
// 
// bool x = true;
// while(x)            <-- melhor!!!