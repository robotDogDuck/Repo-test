#include <iostream>
#include <string>
int main()
{
    char* pcMyCharacterPointer = "Hello World";
    while (*pcMyCharacterPointer != '\0') {
        //if (*pcMyCharacterPointer == '.' || *pcMyCharacterPointer == ',' || *pcMyCharacterPointer == ';' || *pcMyCharacterPointer == ':' || *pcMyCharacterPointer == '!')
        //{
        //    cout << " ";
        //}
        cout << *pcMyCharacterPointer;
        pcMyCharacterPointer++;
    }
}
/*#include <iostream>
#include <string>
#include <fstream>



int main()
{
    std::ofstream fileHandle;                   // Declares an output file
    fileHandle.open("text.txt", std::ios::app); // Opens the file

    if (fileHandle.is_open())
    {
        fileHandle << "first line in the file" << std::endl;
        fileHandle << "second line in the file" << std::endl;
        fileHandle << "-----------------------" << std::endl;
    }
    else
    {
        std::cout << "Error, could not open file.";
    }

    fileHandle.close();                         // Closes the file
    return 0;
}*/


using namespace std;

char toCapital(char cOne)
{
    if (cOne >= 'a' && cOne <= 'z')
        return cOne - ('a' - 'A');
    return cOne;
}

string space(string hyphen)
{
    string emptySpace;
    emptySpace = ' ';
    string hyphen = emptySpace;
    return hyphen;
}

int main()
{
    string sUserInput;      // variable to hold the user string
    int iStringLength;      // the length of the user string
    int iSpacePosition;     // position of a space character
    int iSearchPosition;    // position to search from
    int iSearchExclamation; // searches for exclamation marks
    string emptySpace = " ";

    cout << "Enter your string: ";
    // get user input from the keyboard
    getline(cin, sUserInput);

    cout << "\nYour string: " << sUserInput << endl;

    // get the string length
    iStringLength = sUserInput.length();

    // check the string isn't empty
    if (!sUserInput.empty())
    {
        // capitalise the first letter
        sUserInput[0] = toCapital(sUserInput[0]);

        // find each space
        iSearchPosition = 0;
        iSpacePosition = sUserInput.find(" ", iSearchPosition);

        // find 
        iSearchExclamation = 0;
        iSearchExclamation = sUserInput.find("!", iSearchPosition);

        while (iSpacePosition != -1)
        {
            if (sUserInput[iSearchExclamation] == '!')
            {
                cout << "This code is working!\n";
                sUserInput[iSearchExclamation] = ' ';
            }
            // capitalise the letter
            else if (iSpacePosition + 1 < iStringLength)
            {
                sUserInput[iSpacePosition + 1] = toCapital(sUserInput[iSpacePosition + 1]);
            }
            //for (int i = 0; i < iStringLength; i++)
            //{


            //    if (sUserInput == "." || sUserInput == "," || sUserInput == ";" || sUserInput == ":" || sUserInput == "!")
            //    {a

            //    }
            //}
            //else if (iSearchExclamation + 1 < iStringLength)
            //{
            //    sUserInput[iSpacePosition] = space(sUserInput[iSpacePosition]);
            //}
            // increment loop variables
            iSearchPosition = iSpacePosition + 1;
            iSpacePosition = sUserInput.find(" ", iSearchPosition);

            iSearchExclamation = sUserInput.find("!", iSearchPosition);
        }
    }

    cout << "\nThe capitalised version of your string is: " << endl;
    cout << sUserInput << endl;

    return 0;
}