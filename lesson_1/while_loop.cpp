#include <iostream>
using namespace std;
int main()
{
// sum of n numbers
    int n;
    int sum = 0;
    cout << "Enter n: ";
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << sum;
}