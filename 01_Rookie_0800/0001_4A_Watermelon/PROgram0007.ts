/////////////////////////////////////////////////////////////////////////
//
//  Problem  : 4A - Watermelon
//  Platform : Codeforces
//  Rating   : 800
//  Language : TypeScript
//
/////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////
//
//  Package
//  fs : Used to read input from standard input (stdin).
//
/////////////////////////////////////////////////////////////////////////

import * as fs from "fs";

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckWaterMelon
//  Description   : Checks whether the given watermelon weight can
//                  be divided into two positive even parts.
//
/////////////////////////////////////////////////////////////////////////

function CheckWaterMelon(No: number): boolean
{
    if ((No > 2) && (No % 2 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Accepts the weight of the watermelon and displays
//                  "YES" if it can be divided into two positive even
//                  parts; otherwise displays "NO".
//
/////////////////////////////////////////////////////////////////////////

function main(): void
{
    let Weight: number = Number(fs.readFileSync(0, "utf8").trim());

    let Ret: boolean = CheckWaterMelon(Weight);

    console.log(Ret ? "YES" : "NO");
}

main();