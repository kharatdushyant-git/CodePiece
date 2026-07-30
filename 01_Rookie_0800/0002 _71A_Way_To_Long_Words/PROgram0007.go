/////////////////////////////////////////////////////////////////////////
//
//  Problem  : 71A - Way Too Long Words
//  Platform : Codeforces
//  Rating   : 800
//  Language : Go
//  Author   : ArcaneStage
//
/////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////
//
//  Package
//  main : Contains the main function of the program.
//  fmt  : Used for input and output operations.
//
/////////////////////////////////////////////////////////////////////////

package main

import "fmt"

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : printword
//  Description   : Displays the word as it is if its length is
//                  less than or equal to 10. Otherwise, displays
//                  the abbreviated form consisting of the first
//                  character, number of middle characters, and
//                  the last character.
//
/////////////////////////////////////////////////////////////////////////

func printword(word string)
{
	var size = len(word)

	if size <= 10
	{
		fmt.Println(word)
	}
	else
	{
		fmt.Printf("%c%d%c\n", word[0], size-2, word[size-1])
	}
}

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Accepts the number of words followed by the
//                  words themselves and displays the required
//                  output for each word.
//
/////////////////////////////////////////////////////////////////////////

func main()
{
	var wordcount int

	fmt.Scan(&wordcount)

	for i := 0; i < wordcount; i++
	{
		var word string

		fmt.Scan(&word)

		printword(word)
	}
}