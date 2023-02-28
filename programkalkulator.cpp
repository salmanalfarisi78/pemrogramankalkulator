//judul: pemroqraman kalkulator
//kamus
#include <iostream>

using namespace std;
char op;
    float num1, num2, hasil;
//deskripsi
int main() {

    cout << "Masukkan operator (+, -, *, /): ";
    cin >> op;

    cout << "Masukkan bilangan ke-1: " << endl;
    cin >> num1;
    cout << "Masukkan bilangan ke-2: " << endl;
    cin >> num2;

    switch(op) {
        case '+':
            hasil = num1 + num2;
            break;

        case '-':
            hasil = num1 - num2;
            break;

        case '*':
            hasil = num1 * num2;
            break;

        case '/':
            hasil = num1 / num2;
            break;

        default:
            cout << "Operator yang dimasukkan salah" << endl;
            return 0;
    }

    cout << "Hasil operasi " << num1 << " " << " " << num2 << " adalah " << hasil << endl;
}
