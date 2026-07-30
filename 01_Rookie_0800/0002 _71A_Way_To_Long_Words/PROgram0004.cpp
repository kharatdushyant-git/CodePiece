/////////////////////////////////////////////////////////////////////////
//
//  Problem  : 71A - Way Too Long Words
//  Platform : Codeforces
//  Rating   : 800
//  Language : GNU G++20
//
/////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////
//
//  Header Files
//  iostream : Used for standard input and output operations.
//  cstring  : Used for C-style string handling functions.
//
/////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<cstring>

using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  User Defined Constants
//
//  MAX_LENGTH : Maximum length of a word including the
//               null terminating character.
//
/////////////////////////////////////////////////////////////////////////

#define MAX_LENGTH 101

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : PrintWord
//  Description   : Displays the original word if its length is
//                  less than or equal to 10. Otherwise, displays
//                  the abbreviated form of the word.
//  Input         : Character Array
//  Output        : None
//  Author        : ArcaneStage
//
/////////////////////////////////////////////////////////////////////////

void PrintWord(const char strWord[])
{
    int iLength = strlen(strWord);

    if(iLength <= 10)
    {
        cout << strWord << "\n";
    }
    else
    {
        cout << strWord[0]
             << iLength - 2
             << strWord[iLength - 1]
             << "\n";
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Accepts the number of words from the user,
//                  reads each word one by one, invokes
//                  PrintWord(), and displays the required output.
//  Input         : None
//  Output        : Integer
//  Author        : ArcaneStage
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int iWordCount = 0;
    char strWord[MAX_LENGTH];

    cin >> iWordCount;

    while(iWordCount--)
    {
        cin >> strWord;

        PrintWord(strWord);
    }

    return 0;
}