#include <iostream>
using namespace std;
double P, L;

void Input(){
    cout << "Masukkan Panjangnya = ";
    cin >> P;
    cout << "Masukkan Lebarnya = ";
    cin >> L;
}

double Proses(){
    return P*L;
}

double Proses2(double a, double b){
    return a*b;
}

void Output (){
     cout << "Luasnya =" << Proses();
     cout << "Luasnya ke 2 = " << Proses2(P,L);
}

int main (){
    Input();
    Output();
}