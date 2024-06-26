#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k)
{
    int startIndex = 0;
    int j = n - 1;
    int copy = k;
    while (startIndex <= k)
    {

    }
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 3;
    rotateArray(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}