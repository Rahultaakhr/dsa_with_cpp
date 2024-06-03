#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int value = n - i + 1;
        while (j <= value)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}