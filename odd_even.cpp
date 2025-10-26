#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a Number";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
    return 0;
}