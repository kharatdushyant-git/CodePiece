/////////////////////////////////////////////////////////////////////////
//
//  Problem  : 231A - Team
//  Platform : Codeforces
//  Rating   : 800
//  Language : C
//  Author   : Aracnestage
//  Date     : 30/07/2026
//
/////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////
//
//  stdio.h : Contains declarations for standard input and output
//            functions such as printf() and scanf().
//
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Entry point of the application. Accepts the
//                  number of problems, processes each problem,
//                  counts how many problems the team will solve,
//                  and displays the final result.
//  Input         : None
//  Output        : Integer
//                  Returns 0 to the operating system.
//  Author        : Aracnestage
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iProblem = 0;
    scanf("%d",&iProblem);

    int iPetya = 0;
    int iVasya = 0;
    int iTonya = 0;

    int iCount = 0;

    for(int iCnt = 0; iCnt < iProblem; iCnt++)
    {
        scanf("%d %d %d",&iPetya, &iVasya, &iTonya);

        if((iPetya + iVasya + iTonya) >= 2)
        {
            iCount++;
        }
    }

    printf("%d",iCount);

    return 0;
}