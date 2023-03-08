#include <iostream>
using namespace std;

double Luas, P, L;
void Input(){
    cout << "Masukkan Panjangnya = ";
    cin >> P;
    cout << "Masukkan Lebarnya = ";
    cin >> L;
}

void Proses(){
    Luas = P*L;
}

void Output(){
    cout << "Luasnya =" << Luas;
}

int main (){
    Input();
    Proses();
    Output();
}