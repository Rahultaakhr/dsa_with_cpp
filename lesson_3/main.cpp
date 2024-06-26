#include <iostream>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid)
{
    int student = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }

        else
        {
            student++;
            if (student > m || arr[i] > mid)
            {
                return false;
            }

            pageSum = arr[i];
        }
    }
    return true;
}
int main()
{
    int arr[7] = {1, 17, 14, 9, 15, 9, 14};
    int s = 0;
    int sum = 0;
    int m = 7;
    int n = 7;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << "Final answer is: " << ans << endl;
}