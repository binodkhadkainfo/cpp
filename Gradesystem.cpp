#include <iostream>
using namespace std;

int main()
{
    int grade;
    cout << "Enter Your Grade: ";
    cin >> grade;

    if (grade > 100 || grade <= 0)
    {
        cout << "Invalid Number";
    }
    else if (grade >= 90)
    {
        cout << "Congratulations your Grade is A+";
    }
    else if (grade >= 80)
    {
        cout << "Congratulations your Grade is A";
    }
    else if (grade >= 70)
    {
        cout << "Congratulations your Grade is B+";
    }
    else if (grade >= 60)
    {
        cout << "Congratulations your Grade is B";
    }
    else if (grade >= 50)
    {
        cout << "Congratulations your Grade is C+";
    }
    else if (grade >= 40)
    {
        cout << "Congratulations your Grade is C";
    }
    else if (grade >= 30)
    {
        cout << "Congratulations your Grade is D+";
    }
    else
    {
        cout << "You need more Practice";
    }

    return 0;
}
