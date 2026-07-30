/////////////////////////////////////////////////////////////////////////
//
//  Problem  : 4A - Watermelon
//  Platform : Codeforces
//  Rating   : 800
//  Language : GNU G++20
//
/////////////////////////////////////////////////////////////////////////

//*******************************************************************//

/////////////////////////////////////////////////////////////////////////
//
//  Header Files
//  iostream : Provides standard input/output stream functions.
//
/////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iWeight = 0;
    cin >> iWeight;

    cout << ((iWeight > 2 && iWeight % 2 == 0) ? "YES" : "NO") << '\n';

    return 0;
}