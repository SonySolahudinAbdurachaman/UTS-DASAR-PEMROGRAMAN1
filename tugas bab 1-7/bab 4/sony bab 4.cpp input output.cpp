// Program: cin.cpp
#include <iostream>
using namespace std;

int main () {
double panjang, lebar, keliling;

cout << "Menghitung peliling persegi panjang" << endl;

cout << "panjang: ";
cin >> panjang;

cout << "Lebar: ";
cin >> lebar ;

keliling = 2 * (panjang + lebar);

cout << "Keliling = " << keliling << endl;

return 0;
}
