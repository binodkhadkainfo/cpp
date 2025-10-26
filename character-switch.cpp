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
