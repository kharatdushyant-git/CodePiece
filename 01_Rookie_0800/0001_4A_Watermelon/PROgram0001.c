/////////////////////////////////////////////////////////////////////////
//
//  Problem  : 4A - Watermelon
//  Platform : Codeforces
//  Rating   : 800
//  Language : GNU C11
//  Date     : 27 JUL 2026
//
/////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////
//
//  Header Files
//  stdio.h : Used for standard input and output functions.
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  User Defined Data Types
//  BOOL : Represents Boolean values using int type.
//
//  User Defined Constants
//
//  TRUE  : Represents logical true.
//  FALSE : Represents logical false.
//
/////////////////////////////////////////////////////////////////////////

typedef int BOOL;

#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckWaterMelon
//  Description   : Checks whether the watermelon can be divided into
//                  two even positive parts.
//  Input         : Integer
//  Output        : BOOL
//  Author        : ArcaneStage
//
/////////////////////////////////////////////////////////////////////////

BOOL CheckWaterMelon(int iNo)
{
    if((iNo > 2) && (iNo % 2 == 0))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Entry point of the program. Accepts the weight of
//                  the watermelon, invokes CheckWaterMelon(), and
//                  displays the result.
//  Input         : None
//  Output        : Integer
//  Author        : ArcaneStage
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iWeight = 0;
    BOOL bRet = FALSE;

    scanf("%d", &iWeight);

    bRet = CheckWaterMelon(iWeight);

    if(bRet == TRUE)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
