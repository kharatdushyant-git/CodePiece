/////////////////////////////////////////////////////////////////////////
//
//  Problem  : 4A - Watermelon
//  Platform : Codeforces
//  Rating   : 800
//  Language : Java 21
//
/////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////
//
//  Package
//  java.util.Scanner : Provides the Scanner class for accepting
//                      input from the user.
//
/////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name  : PROgram0005
//  Description : Accepts the weight of the watermelon and determines
//                whether it can be divided into two positive even
//                parts. Displays "YES" if possible; otherwise
//                displays "NO".
//
//  Input       : Integer
//  Output      : YES / NO
//  Author      : ArcaneStage
//
/////////////////////////////////////////////////////////////////////////

public class PROgram0005
{
    /////////////////////////////////////////////////////////////////////
    //
    //  Function Name : main
    //  Description   : Entry point of the program.
    //
    /////////////////////////////////////////////////////////////////////

    public static void main(String Luffy[])
    {
        Scanner sobj = new Scanner(System.in);

        int iWeight = 0;

        iWeight = sobj.nextInt();

        System.out.println((iWeight > 2 && iWeight % 2 == 0) ? "YES" : "NO");

        sobj.close();
    }
}