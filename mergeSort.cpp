#include <iostream>
using namespace std;

void merge(int *arr, int s, int e){
  int mid = (s+e)/2;
  int len1 = mid-s+1;
  int len2 = e-mid;

  int *first = new int[len1];
  int *second = new int[len2];
  // Copy values 
  int k = s;
  for(int i=0; i<len1; i++){
    first[i] = arr[k++];
  }
  k = mid + 1;
  for(int i=0; i<len2; i++){
    second[i] = arr[k++];
  }

  // Merging two arrays
  int index1 = 0, index2 = 0;
  k = s;
  while(index1 < len1 && index2 < len2){
    if(first[index1] < second[index2]){
      arr[k++] = first[index1++];
    }
    else{
      arr[k++] = second[index2++];
    }
  }
  while(index1 < len1){
    arr[k++] = first[index1++];
  }
  while(index2 < len2){
    arr[k++] = second[index2++];
  }

  delete []first;
  delete []second;
}

void mergeSort(int *arr, int s, int e){
  // Base case
  if(s>=e){
    return;
  }
  int mid = (s+e)/2;
  // Left part
  mergeSort(arr, s, mid);
  // Right part
  mergeSort(arr, mid+1, e);
  // Merging two arrays
  merge(arr, s, e);
}

int main() {
  int arr[5] = {2,0,3,9,6};
  int n = 5;
  mergeSort(arr, 0, n-1);

  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}
