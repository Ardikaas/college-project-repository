#include <iostream>

using namespace std;

void bubble(){

}

int main(int argc, char const *argv[])
{
  int temp;
  int arr[]={80, 21, 35, 42, 40, 15};
  int n = sizeof(arr)/sizeof(arr[0]);
  int min;
  int num;
  cout << "selection sort\n================" << endl;
  cout << "unsorted array :" << endl;
  for (int i = 0; i<n;i++){
    cout << arr[i] << "\t";
  }
  cout << "\n";
  for(int i=0;i<n-1;i++){
    min = arr[i];
    num = i;
    for(int j=i+1;j<n;j++){
      if (min > arr[j]){
        min = arr[j];
        num = j;
      }
    temp = arr[i];
    arr[i] = arr[num];
    arr[num] = temp;
    }
  }
  cout << "\nsorted array :" << endl;
  for (int i=0;i<n;i++){
    cout << arr[i] << "\t";
  }
  return 0;
}
