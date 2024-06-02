#include <iostream>
using namespace std;
int main()
{

    // for (int i = 0; i <= 5; i++)
    // {
    //    cout << i << endl;
    // }

    // **** factorial of n number ****

    int n;
    cout << "Enter n: ";
    cin >> n;
    // int fact = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     fact = fact * i;
    // }
    // cout << fact;

    int i = 1;
    int count = 2;
    bool isPrime = 1;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            // cout << i << endl;
            if (i % count != 0)
            {
                cout << i << endl;
                count = count + 1;
            }
        }
        i++;
    }
}