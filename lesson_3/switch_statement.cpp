#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout << "Enter value of n: ";
    // cin >> n;
    char ch;
    cout << "Enter value of ch: ";
    cin >> ch;
    // switch (n)
    // {
    // case 1:
    //     cout << "Monday" << endl;
    //     break;
    // case 2:
    //     cout << "Tuesday" << endl;
    //     break;

    // case 3:
    //     cout << "Wednesday" << endl;
    //     break;
    // case 4:
    //     cout << "Thursday" << endl;
    //     break;

    // case 5:
    //     cout << "Friday" << endl;
    //     break;
    // case 6:
    //     cout << "Saturday" << endl;
    //     break;
    // case 7:
    //     cout << "Sunday" << endl;
    //     break;
    // default:
    //     cout << "Not a valide input";
    //     break;
    // }

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "It is a vowel";
        break;

    default:
        cout << "it is not  a vowel";
        break;
    }
}