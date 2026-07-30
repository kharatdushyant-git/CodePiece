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
//  MAX_WORDS  : Maximum number of words.
//  MAX_LENGTH : Maximum length of each word including the
//               null terminating character.
//
/////////////////////////////////////////////////////////////////////////

#define MAX_WORDS 100
#define MAX_LENGTH 101

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : PrintWord
//  Description   : Displays the word as it is if its length is less
//                  than or equal to 10. Otherwise, prints the
//                  abbreviated form of the word.
//  Input         : Character Array
//  Output        : None
//  Author        : ArcaneStage
//
/////////////////////////////////////////////////////////////////////////

void PrintWord(const char word[])
{
    int iLength = strlen(word);

    if(iLength <= 10)
    {
        printf("%s\n", word);
    }
    else
    {
        printf("%c%d%c\n", word[0], iLength - 2, word[iLength - 1]);
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Accepts all words from the user, invokes
//                  PrintWord() for each word, and displays the
//                  required output.
//  Input         : None
//  Output        : Integer
//  Author        : ArcaneStage
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iWordCount = 0;

    char stringWords[MAX_WORDS][MAX_LENGTH];

    scanf("%d", &iWordCount);

    for(int iCnt = 0; iCnt < iWordCount; iCnt++)
    {
        scanf("%100s", stringWords[iCnt]);
    }

    for(int iCnt = 0; iCnt < iWordCount; iCnt++)
    {
        PrintWord(stringWords[iCnt]);
    }

    return 0;
}