#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main()
{
  int array1[5] = {6, 4, 3, 7, 5};
  auto start = high_resolution_clock::now();
  int n = sizeof(array1) / sizeof(array1[0]);
  for (int i = 0; i < (n - 1); i++)
  {
    for (int j = 0; j < (n - 1); j++)
    {
      if (array1[j] > array1[j + 1])
      {
        int temp = array1[j + 1];
        array1[j + 1] = array1[j];
        array1[j] = temp;
      }
    }
  }
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(stop - start);
  cout << "Time taken : " << duration.count() << "ms" << endl;
  // for (int k = 0; k < n; k++)
  // {
  //   cout << array1[k] << endl;
  // }
}