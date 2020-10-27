#include <bits/stdc++.h>
using namespace std;

class insertion{
  void insertionSort(int arr[], int n){
      int i, key, j;
      for (i = 1; i < n; i++){
          key = arr[i];
          j = i - 1;

          while (j >= 0 && arr[j] > key){
              arr[j + 1] = arr[j];
              j = j - 1;
          }
          arr[j + 1] = key;
      }
  }

  int main(){
      int arr[] = { 2, 7, 6, 8, 9, 12, 5 };
      int n = sizeof(arr) / sizeof(arr[0]);

      insertionSort(arr, n);
      printArray(arr, n);

      return 0;
  }
}
