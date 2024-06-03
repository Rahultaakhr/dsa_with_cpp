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
        // first solution
        // int space =n-i;
        // while (space)
        // {
        //     cout <<"*";
        //    space--;
        // }


        // first solution
        
        int space = i;
        while (space < n)
        {
            cout << "*";
            space++;
        }

        while (j <= i)
        {
            cout << j;
            j++;
        }

        cout << endl;
        i++;
    }
}