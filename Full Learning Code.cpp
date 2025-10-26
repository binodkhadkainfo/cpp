
0
MAIN

#include <iostream>
using namespace std;
int main()
{
    cout << "Hello Founder Binod";
    return 0;
}





1
MAIN

#include <iostream>
int main()
{
    std::cout << "Hi Founder Binod";
    return 0;
}



2
MAIN


#include <iostream>
using namespace std;

int main()
{
    int binod;
    binod = 100;

    cout << binod;
    return 0;
}



// #include <iostream>
// using namespace std;

// int main(){
//     int binod = 100;
//     cout <<binod;
//     return 0;
// }





3 inputt

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout << "Hello boss enter a number";
    cin >> a;

    cout << "enter a second number";
    cin >> b;

    cout << "enter a third number";
    cin >> c;

    return 0;
}




4
addition


#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "enter a number";
    cin >> a;

    cout << "enter a second number";
    cin >> b;

    cout << "enter a third number";
    cin >> c;

    cout << "total sum is " << a + b + c;
    return 0;
}




5

substraction


#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "enter a first number";
    cin >> a;

    cout << "enter a second number";
    cin >> b;

    cout << "enter a third number";
    cin >> c;

    cout << "total subtraction is " << a - b - c;
    return 0;
}




6
multiplication


#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "hello world enter a first number";
    cin >> a;

    cout << "enter a second number";
    cin >> b;

    cout << "enter a third number";
    cin >> c;

    cout << "total number of multiplication is " << a * b * c;
    return 0;
}





7
division


#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter a first number";
    cin >> a;

    cout << "enter a second number ";
    cin >> b;

    cout << "enter a third number";
    cin >> c;

    cout << "total number of division is " << a / b / c;
    return 0;
}





8
 else if 
grade system



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




9

voting machine 


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





10
Odd Even 

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









11

switch

#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter a number: " << endl;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid number";
        break;
    }
    return 0;
}






12 
character switch


#include <iostream>
using namespace std;

int main()
{
    char vowel;
    cout << "Enter a vowel: ";
    cin >> vowel;

    switch (vowel)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        cout << "This letter is a vowel letter." << endl;
        break;
    default:
        cout << "This letter is not a vowel letter." << endl;
        break;
    }
    return 0;
}




13

logical_and_operator



#include<iostream>
using namespace std;

int main(){
    int num;
cout<<"Enter a number";
cin >>num;

if ((num%2==0)&&(num%3==0))
cout<<num<<endl;
return 0; 
}








14
Logical_or_Operator



#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a number";
    cin >> num;

    if ((num % 3 == 0) || (num % 5 == 0))
    {
        cout << num << endl;
    }
    return 0;
}





15
Ternary_Operator






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