#include <iostream>
using namespace std;

int main()
{
  int i, j, m, temp;
  int arr[6] = {4, 3, 9, 7, 2, 5};
  for (i = 0; i <= 4; i++)
  {
    for (j = i + 1; j <= 5; j++) //j=i+1是为了让每次排序时从i后面的数组选择
    {
      if (arr[i] > arr[j])
      {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp; //为了让对应的数组的数值对换
      }
    }
  }
  for (m = 0; m < sizeof(arr) / sizeof(int); m++)
  {
    cout << arr[m] << " ";
  }
  cout << endl;
  return 0;
}