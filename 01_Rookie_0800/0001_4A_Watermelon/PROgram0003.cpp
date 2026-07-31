/////////////////////////////////////////////////////////////////////////
//
//  Problem  : 4A - Watermelon
//  Platform : Codeforces
//  Rating   : 800
//  Language : GNU G++20
//
/////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////
//
//  Header Files
//  bits/stdc++.h : Includes all standard C++ standard libraries.
//
/////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  User Defined Data Types
//  BOOL : Represents Boolean values using bool type.
//
//  User Defined Constants
//
//  TRUE  : Represents logical true.
//  FALSE : Represents logical false.
//
/////////////////////////////////////////////////////////////////////////

typedef bool BOOL;

#define TRUE true
#define FALSE false

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
    if ((iNo > 2) && (iNo % 2 == 0))
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
    
    // Improves the speed of input and output operations.

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    // Logic
    int iWeight = 0;
    BOOL bRet = FALSE;

    cin >> iWeight;

    bRet = CheckWaterMelon(iWeight);

    if (bRet == TRUE)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
} give me same for c
