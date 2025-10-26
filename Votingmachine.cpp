#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "enter a number";
    cin >> age;

    if (age >= 200)
    {
        cout << "you cannot vote";
    }

    else if (age >= 18)
    {
        cout << "you can vote";
    }

    else
    {
        cout << "invalid user";
    }
    return 0;
}