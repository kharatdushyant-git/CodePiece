/////////////////////////////////////////////////////////////////////////
//
//  Problem  : 4A - Watermelon
//  Platform : Codeforces
//  Rating   : 800
//  Language : GNU C11
//
///////////////////////////////////////////////////////////////////////

//*******************************************************************//

///////////////////////////////////////////////////////////////////////
//
//  Header Files
//  stdio.h  : Provides standard input/output functions.
//
///////////////////////////////////////////////////////////////////////


#include <stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Entry point of the program. Accepts the weight of
//                  the watermelon and determines whether it can be
//                  divided into two even positive parts. Displays
//                  "YES" if possible; otherwise displays "NO".
//
//  Input         : Integer
//  Output        : Integer
//  Author        : ArcaneStage
//
///////////////////////////////////////////////////////////////////////

int main(void)
{
    int iWeight = 0;
    scanf("%d", &iWeight);

    printf((iWeight >2 && iWeight % 2 == 0) ? "YES\n" : "NO\n");
   
    return 0;
}