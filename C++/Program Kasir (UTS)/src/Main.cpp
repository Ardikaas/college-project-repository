#include <iostream>
#include <ctime>

using namespace std;

string namaKasir;
string appVersion = "v1.0.0";
string tanggal;
string ulang;
string inisial;
string displayHarga;
string namaBarang;
int barang[999];
int kuantitas[999];
int harga[999];
int jumlahBarang;
int bayar;
int kembali;
float total;
float subTotal;
int kassa;
int nomor = -1;
int huruf = 0;
int resetStruk =0;
int z = 0;
int i = 0;
int j = 0;
int t;
int o;
int e;
int s;


void nomorbon(){
  for (int a=0; a=2; a++){
    nomor++;
    break;
  }
  if (nomor == 100){
    nomor = 0;
    huruf++;
  }
  if (huruf == 0){
    inisial = "A";
  }else if (huruf == 1){
    inisial = "B";
  }else if (huruf == 2){
    inisial = "C";
  }else if (huruf == 3){
    inisial = "D";
  }else if (huruf == 4){
    inisial = "E";
  }else if (huruf == 5){
    inisial = "F";
  }else if (huruf == 6){
    inisial = "G";
  }else if (huruf == 7){
    inisial = "H";
  }else if (huruf == 8){
    inisial = "I";
  }else if (huruf == 9){
    inisial = "J";
  }else if (huruf == 10){
    inisial = "K";
  }else if (huruf == 11){
    inisial = "L";
  }else if (huruf == 12){
    inisial = "M";
  }else if (huruf == 13){
    inisial = "N";
  }else if (huruf == 14){
    inisial = "O";
  }else if (huruf == 15){
    inisial = "P";
  }else if (huruf == 16){
    inisial = "Q";
  }else if (huruf == 17){
    inisial = "R";
  }else if (huruf == 18){
    inisial = "S";
  }else if (huruf == 19){
    inisial = "T";
  }else if (huruf == 20){
    inisial = "U";
  }else if (huruf == 21){
    inisial = "V";
  }else if (huruf == 22){
    inisial = "W";
  }else if (huruf == 23){
    inisial = "X";
  }else if (huruf == 24){
    inisial = "Y";
  }else if (huruf == 25){
    inisial = "Z";
  }else{
    resetStruk++;
    huruf = 0;
  }
  cout << "Bon  BA36-";
  cout << kassa;
  for (o = 8; o <= 9; o++)
  cout << tanggal[o];
  cout << "-";
  for (e = 0; e <= 1; e++)
  cout << tanggal[e];
  for (s = 3; s <= 4; s++)
  cout << tanggal[s];
  cout << resetStruk << inisial;
  cout << nomor;
}

void inputbarang(){
  while (i<1){
    cout << "masukkan kode barang : ";
    cin >> barang[j];
    cout << "masukkan kuantitas : ";
    cin >> kuantitas[j];
    j++;
    cout << "ketik (y) untuk menginputkan barang selanjutnya atau ketik (n) untuk print : ";
    cin >> ulang;
    if (ulang == "n"){
      i++;
    }
    
  }
}


void displaybarang(){
    cout << namaBarang << "\t" << kuantitas[t] << "\t" << displayHarga << "\t" <<  subTotal << endl;
}


void displaytotal(){
  cout <<"Total Item\t\t" << jumlahBarang << "\t\t" << total << endl;
  cout << "Tunai \t\t\t\t\t";
  cin >> bayar;
  kembali = bayar - total;
  cout << "Kembalian\t\t\t\t" << kembali << endl;
}


void print(){
  cout << "\n\n\n";
  cout << "==============================================" << endl;
  cout << "\t    Alfamidi GEROGOL CILEGON\n";
  cout << "\t  GEROGOL CILEGON / O8138076452\n" << endl;
  cout << "\t  JL.MAYJEND.SOETOYO RWA ARUM" << endl;
  cout << "   Kritik & Saran:1500959,Alfacare@mu.co.id\n";
  cout << "\t     WA/SMS : 081110640888" << endl;
  cout << "==============================================" << endl;
  nomorbon();
  cout << "\t\tKasir : " << namaKasir << endl;
  cout << "==============================================" << endl;
  for(t=0; t<=j ;t++){
    if (barang[t] == 1){
      namaBarang = "Rinso 770gr\t";
      displayHarga = "25,000";
      subTotal = (kuantitas[t]*25000);
      jumlahBarang += kuantitas[t];
      total += (kuantitas[t]*25000);
      displaybarang();
    }else if (barang[t] == 2){
      namaBarang = "Hilo School 250gr";
      displayHarga = "46,000";
      subTotal = (kuantitas[t]*46000);
      jumlahBarang += kuantitas[t];
      total += (kuantitas[t]*46000);
      displaybarang();
    }else if (barang[t] == 3){
      namaBarang = "Segitiga Biru 1kg";
      displayHarga = "12,500";
      subTotal = (kuantitas[t]*12500);
      jumlahBarang += kuantitas[t];
      total += (kuantitas[t]*12500);
      displaybarang();
    }else if (barang[t] == 4){
      namaBarang = "ABC Kecap Manis 225ml";
      displayHarga = "9,500";
      subTotal = (kuantitas[t]*9500);
      jumlahBarang += kuantitas[t];
      total += (kuantitas[t]*9500);
      displaybarang();
    }else if (barang[t] == 5){
      namaBarang = "Masako Ayam 100gr";
      displayHarga = "5,500";
      subTotal = (kuantitas[t]*5500);
      jumlahBarang += kuantitas[t];
      total += (kuantitas[t]*5500);
      displaybarang();
    }else if (barang[t] == 6){
      namaBarang = "Gulaku 1kg\t";
      displayHarga = "17,000";
      subTotal = (kuantitas[t]*17000);
      jumlahBarang += kuantitas[t];
      total += (kuantitas[t]*17000);
      displaybarang();
    }else if (barang[t] == 7){
      namaBarang = "Frisian Flag 545gr";
      displayHarga = "19,000";
      subTotal = (kuantitas[t]*19000);
      jumlahBarang += kuantitas[t];
      total += (kuantitas[t]*19000);
      displaybarang();
    }else if (barang[t] == 8){
      namaBarang = "Nescafe Ice Black 220ml";
      displayHarga = "6,500";
      subTotal = (kuantitas[t]*6500);
      jumlahBarang += kuantitas[t];
      total += (kuantitas[t]*6500);
      displaybarang();
    }else if (barang[t] == 9){
      namaBarang = "Sari Roti Sandwich";
      displayHarga = "6,000";
      subTotal = (kuantitas[t]*6000);
      jumlahBarang += kuantitas[t];
      total += (kuantitas[t]*6000);
      displaybarang();
    }else if (barang[t] == 10){
      namaBarang = "Kinder Joy\t";
      displayHarga = "13,000";
      subTotal = (kuantitas[t]*13000);
      jumlahBarang += kuantitas[t];
      total += (kuantitas[t]*13000);
      displaybarang();
    }else if (barang[t] == 11){
      namaBarang = "SilverQueen\t";
      displayHarga = "16,000";
      subTotal = (kuantitas[t]*16000);
      jumlahBarang += kuantitas[t];
      total += (kuantitas[t]*16000);
      displaybarang();
    }else if (barang[t] == 12){
      namaBarang = "Aqua 600ml\t";
      displayHarga = "3,000";
      subTotal = (kuantitas[t]*3000);
      jumlahBarang += kuantitas[t];
      total += (kuantitas[t]*3000);
      displaybarang();
    }else if (barang[t] == 13){
      namaBarang = "Sprite 390ml\t";
      displayHarga = "5,000";
      subTotal = (kuantitas[t]*5000);
      jumlahBarang += kuantitas[t];
      total += (kuantitas[t]*5000);
      displaybarang();
    }else if (barang[t] == 14){
      namaBarang = "Indomie Goreng\t";
      displayHarga = "3,500";
      subTotal = (kuantitas[t]*3500);
      jumlahBarang += kuantitas[t];
      total += (kuantitas[t]*3500);
      displaybarang();
    }else if (barang[t] == 15){
      namaBarang = "Mie Sedap Goreng";
      displayHarga = "3,500";
      subTotal = (kuantitas[t]*3500);
      jumlahBarang += kuantitas[t];
      total += (kuantitas[t]*3500);
      displaybarang();
    }else if (barang[t] == 16){
      namaBarang = "Sulight Sabun Cair 460ml";
      displayHarga = "8,500";
      subTotal = (kuantitas[t]*8500);
      jumlahBarang += kuantitas[t];
      total += (kuantitas[t]*8500);
      displaybarang();
    }
  }
  cout << "----------------------------------------------" << endl;
  displaytotal();
  cout << "==============================================" << endl;
  cout << "Tgl. ";
  for (e = 0; e <= 1; e++)
  cout << tanggal[e];
  cout << "-";
  for (s = 3; s <= 4; s++)
  cout << tanggal[s];
  cout << "-";
  for (o = 6; o <= 10; o++)
  cout << tanggal[o];
  cout << "   "; 
  time_t tmNow;
  tmNow = time(NULL);
  struct tm t = *localtime(&tmNow); 
  cout << "\t" << t.tm_hour <<":"<<t.tm_min<<":"<<t.tm_sec;;
  cout << "\t" << appVersion << endl;
  cout << "----------------------------------------------" << endl;
  cout << "\t  PT MIDI UTAMA INDONESIA TBK" << endl;
  cout << "\t  NPWP : 02.672.027.7-054.000"<< endl;
  cout << "   ALFA TOWER LT. 12, JL JALUR SUTERA BARAT" << endl;
  cout << "   KAV. 7-9 ALAM SUTERA PANUNGGANGAN TIMUR"<< endl;
  cout << "\t PINANG KOTA TANGGERANG BANTEN" << endl;
  cout << "==============================================" << endl;
  cout << "\n\n\n";
}

int main(int argc, char const *argv[])
{
  cout << "PROGRAM KASIR " << appVersion << endl;
  cout << "---------------------" << endl;
  cout << "masukkan nama anda : ";
  cin >> namaKasir;
  cout << "masukkan nomor kassa : ";
  cin >> kassa;
  cout << "masukkan tanggal dengan format dd-mm-yyyy : ";
  cin >> tanggal;
  while (z<1){
    inputbarang();
    print();
    cout << "ketik (y) untuk transaksi selanjutnya atau ketik (n) untuk keluar dari program : ";
    cin >> ulang;
    if (ulang == "n"){
      z++;
    }else{
      i = 0;
      j = 0;
    }
  }
  return 0;
}
