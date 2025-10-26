
// Normal way to check condition

// #include <iostream>
// using namespace std;

// int main()
// {
//     int marks;
//     cout << "Enter a number" << endl;
//     cin >> marks;

//     if (marks > 33)
//     {
//         cout << "Pass" << endl;
//     }
//     else
//     {
//         cout << "Fail" << endl;
//     }
//     return 0;
// }




// Using Ternary Operator

#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter a Number";
    cin >> marks;

    marks > 33 ? cout << "Pass" << endl : cout << "Fail" << endl;
    return 0;
}