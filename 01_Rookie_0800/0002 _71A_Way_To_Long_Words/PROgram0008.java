/////////////////////////////////////////////////////////////////////////
//
//  Problem  : 71A - Way Too Long Words
//  Platform : Codeforces
//  Language : Java
//  Author   : Aracnestage
//
/////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////
//
//  Scanner : Used for taking input from user.
//
/////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

/////////////////////////////////////////////////////////////////////////
//
//  Class Name : PROgram0008
//  Description: Contains the helper function and main function.
//
/////////////////////////////////////////////////////////////////////////

class PROgram0008
{
    /////////////////////////////////////////////////////////////////////////
    //
    //  Function Name : PrintWord
    //  Input         : String
    //  Output        : void
    //  Description   : Prints the original word if its length is less
    //                  than or equal to 10. Otherwise, it prints the
    //                  abbreviated form of the word.
    //
    /////////////////////////////////////////////////////////////////////////

    public static void PrintWord(String words)
    {
        int len = words.length();

        if(len <= 10)
        {
            System.out.println(words);
        }
        else
        {
            System.out.println("" + words.charAt(0) + (len - 2) + words.charAt(len - 1));
        }
    }

    /////////////////////////////////////////////////////////////////////////
    //
    //  Function Name : main
    //  Input         : String[]
    //  Output        : void
    //  Description   : Accepts the number of words from the user,
    //                  reads each word, and passes it to the
    //                  PrintWord() function.
    //
    /////////////////////////////////////////////////////////////////////////


    public static void main(String Luffy[])
    {
        Scanner sobj = new Scanner(System.in);

        int strCount = sobj.nextInt();

        for(int iCnt = 0;iCnt < strCount; iCnt++)
        {
            String str = sobj.next();

            PrintWord(str);
        }          

        sobj.close();
    }
}