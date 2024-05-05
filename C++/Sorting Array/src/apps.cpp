#include <iostream>
using namespace std;

void quick(){

}

void heap(){

}

void merge(){

}

int main(int argc, char const *argv[])
{
  int x;
  cout << "tentukan banyaknya array : ";
  cin >> x;
  int arr[x];
  for (int i = 0; i < x;i++){
    cout << "arr[" << i << "] : ";
    cin >> arr[i];
    cout << "\n";
  }
  cout << "unsorted array" << endl;
  cout << "==============" << endl;
  for (int i = 0;i < x;i++){
    cout << arr[i] << "\t";
  }
  cout << "\n";
  cout << "\n";
  cout << "sorted array" <<  endl;
  cout << "============" << endl;
  return 0;
}
