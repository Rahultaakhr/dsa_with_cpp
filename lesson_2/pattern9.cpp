#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    int count = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {

            char ch = 'A' + count - 1;
            cout << ch << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}