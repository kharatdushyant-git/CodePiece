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
//  Function Name : ChkSolution
//  Description   : Checks whether at least two friends are sure
//                  about the solution of the given problem.
//  Input         : Integer A, Integer B, Integer C
//  Output        : Integer
//                  Returns 1 if the team will solve the problem,
//                  otherwise returns 0.
//  Author        : Aracnestage
//
/////////////////////////////////////////////////////////////////////////

int ChkSolution(int A, int B, int C)
{
    /* My Logic

    if(((A && B) == 1) || ((A && C) == 1) || ((B && C) == 1))
    {
        return 1;
    }

    */

    int iSum = A + B + C;

    if(iSum >= 2)
    {
        return 1;
    }

    return 0;
}

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

    int iRet = 0;
    int iCount = 0;

    for(int iCnt = 0; iCnt < iProblem; iCnt++)
    {
        scanf("%d %d %d",&iPetya, &iVasya, &iTonya);

        iRet = ChkSolution(iPetya,iVasya,iTonya);

        iCount += iRet;
    }

    printf("%d",iCount);

    return 0;
}