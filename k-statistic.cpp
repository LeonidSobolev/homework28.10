#include "stdio.h"
#include <iostream>

void qsort_ (int* arr, int b, int e)
{
  int l = b, r = e;
  int piv = arr[(l + r) / 2];
  while (l <= r)
  {
    while (arr[l] < piv)
      l++;
    while (arr[r] > piv)
      r--;
    if (l <= r)
      std::swap (arr[l++], arr[r--]);
  }
  if (b < r)
    qsort_ (arr,b, r);
  if (e > l)
    qsort_ (arr,l, e);
}

int getKstat(int* arr, int n , int k){
  qsort_(arr, 0, n - 1);
  //for(int i = 0; i <= n - 1; i++) std::cout << arr[i]<< " ";
  return arr[k - 1];

}

int main(){
  int r[5] = {1, 2, 3, 1, 4};
  std::cout << getKstat(r, 5, 4);


}
