#include <iostream>
using namespace std;

int diagonal1, diagonal2;

void input(){
    cout << "Masukkan Diagonal 1 : ";
    cin >> diagonal1;

    cout << "Masukkan Diagonal 2 : ";
    cin >> diagonal2;
}

float LuasBelahKetupat(float diagonal1, float diagonal2){
    return diagonal1 * diagonal2 * 0.5;
}

void output(){
    cout << "Hasilnya : " << LuasBelahKetupat(diagonal1, diagonal2) << endl;
}

int main(){
    input();
    output();
}