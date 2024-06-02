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
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << fact;
}