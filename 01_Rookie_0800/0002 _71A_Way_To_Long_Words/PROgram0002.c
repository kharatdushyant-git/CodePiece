/////////////////////////////////////////////////////////////////////////
//
//  Problem  : 71A - Way Too Long Words
//  Platform : Codeforces
//  Rating   : 800
//  Language : GNU C11
//
/////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////
//
//  Header Files
//  stdio.h  : Used for standard input and output functions.
//  string.h : Used for string handling functions.
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

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
        printf("%s\n", strWord);
    }
    else
    {
        printf("%c%d%c\n",
               strWord[0],
               iLength - 2,
               strWord[iLength - 1]);
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
    int iWordCount = 0;

    char strWord[MAX_LENGTH];

    scanf("%d", &iWordCount);

    while(iWordCount--)
    {
        scanf("%100s", strWord);

        PrintWord(strWord);
    }

    return 0;
}