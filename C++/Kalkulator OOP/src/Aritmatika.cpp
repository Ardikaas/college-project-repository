#include <iostream>
#include "Aritmatika.h"

using namespace std;


void Aritmatika::penjumlahan(int a, int b){
  hasil = a + b;
  cout << "hasilnya adalah = " << hasil << endl;
}
void Aritmatika::pengurangan(int a, int b){
  hasil = a - b;
  cout << "hasilnya adalah = " << hasil << endl;
}
void Aritmatika::perkalian(int a, int b){
  hasil = a * b;
  cout << "hasilnya adalah = " << hasil << endl;
}
void Aritmatika::pembagian(float a, float b){
  hasil = a / b;
  cout << "hasilnya adalah = " << hasil << endl;
}
void Aritmatika::operasi(){
  cout << "\nPerhatian!!!" << endl;
  cout << "Masukkan \"+\" untuk operasi penjumlahan" << endl;
  cout << "Masukkan \"-\" untuk operasi pengurangan" << endl;
  cout << "Masukkan \"*\" untuk operasi perkalian" << endl;
  cout << "Masukkan \"/\" untuk operasi pembagian" << endl;
  cout << "Masukkan jenis operasi aritmatika : ";
  cin >> simbol;
  i = 0;
  while (i < 1){
    if (simbol == '+' ||simbol == '-' ||simbol == '*' ||simbol == '/'){
      i++;
    }else {
      system("cls");
      cout << "operasi yang anda masukkan salah!!!" << endl;
      cout << "---------------------------------------" << endl;
      cout << "\nPerhatian!!!" << endl;
      cout << "Masukkan \"+\" untuk operasi penjumlahan" << endl;
      cout << "Masukkan \"-\" untuk operasi pengurangan" << endl;
      cout << "Masukkan \"*\" untuk operasi perkalian" << endl;
      cout << "Masukkan \"/\" untuk operasi pembagian" << endl;
      cout << "Masukkan jenis operasi aritmatika : ";
      cin >> simbol;
    }
  }
}

void Aritmatika::kondisi(){
  if (simbol == '+'){
    cout << "operasi penjumlahan!!" << endl;
    cout << "Masukkan bilangan pertama : ";
    cin >> x;
    cout << "Masukkan bilangan kedua : ";
    cin >> y;
    penjumlahan (x, y);

  }else if (simbol == '-'){
    cout << "operasi pengurangan!!" << endl;
    cout << "Masukkan bilangan pertama : ";
    cin >> x;
    cout << "Masukkan bilangan kedua : ";
    cin >> y;
    pengurangan (x, y);

  }else if (simbol == '*'){
    cout << "operasi perkalian!!" << endl;
    cout << "Masukkan bilangan pertama : ";
    cin >> x;
    cout << "Masukkan bilangan kedua : ";
    cin >> y;
    perkalian (x, y);

  }else if (simbol == '/'){
    cout << "operasi pembagian!!" << endl;
    cout << "Masukkan bilangan pertama : ";
    cin >> x;
    cout << "Masukkan bilangan kedua : ";
    cin >> y;
    pembagian (x, y);

  }
}
