#include <iostream>
#include "Aritmatika.h"

using namespace std;

int main(int argc, char const *argv[])
{
  Aritmatika kalkulator;
  int k = 0;
  char ulang;
  while (k < 1){
    cout << "~Kalkulator by Ardikaas~" << endl;
    kalkulator.operasi();
    kalkulator.kondisi();
    cout << "apakah anda ingin menggunakan kalkulator lagi??" << endl;
    cout << "ketik \"y\" untuk menggunakan lagi atau ketik \"n\" untuk menutup aplikasi : "; 
    cin >> ulang;
    if (ulang == 'n' || ulang == 'N'){
      k++;
    }else{
      system("cls");
    }
  }

  
  return 0;
}
