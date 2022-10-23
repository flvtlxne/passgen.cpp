#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{
    char test[] = {'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F',
    'f', 'G', 'g', 'H', 'h', 'I', 'i', 'J', 'j', 'K', 'k', 'L', 'l', 'M', 'm', 'N',
    'n', 'O', 'o', 'P', 'p', 'Q', 'q', 'R', 'r', 'S', 's', 'T', 't', 'U', 'u', 'V', 'v', 'W', 'w', 'X',
    'x', 'Y', 'y', 'Z', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    unsigned short Passwords, Characters, Size = sizeof(test) / sizeof(test[0]);
    srand(time(0));

    cout << "Quantity of passwords: ";
    cin >> Passwords;

    cout << "Quantity of symbols in password: ";
    cin >> Characters;
    const unsigned short SaveCharacters = Characters;

    ofstream outFile('GenPass.txt');
        for(; Passwords > 0; Passwords--)
        {
            for(; Characters > 0; Characters--) 
            {
                outFile << test[rand() % size];
            }
            
            if (Characters == 0)
            {
                Characters = SaveCharacters;
                outFile << endl;
            }   
        }
    outFile.close();

    cout << "Your passwords has been saved in GenPass.txt\n";

    return 0;
}