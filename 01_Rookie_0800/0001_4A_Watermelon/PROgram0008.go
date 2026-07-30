/////////////////////////////////////////////////////////////////////////
//
//  Problem  : 4A - Watermelon
//  Platform : Codeforces
//  Rating   : 800
//  Language : Go
//
/////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////
//
//  Package
//  main : Entry point of the Go program.
//
/////////////////////////////////////////////////////////////////////////

package main

/////////////////////////////////////////////////////////////////////////
//
//  Package
//  fmt : Used to accept input from standard input (stdin)
//        and display output on standard output (stdout).
//
/////////////////////////////////////////////////////////////////////////

import "fmt"

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckWaterMelon
//  Description   : Checks whether the given watermelon weight can
//                  be divided into two positive even parts.
//
/////////////////////////////////////////////////////////////////////////

func CheckWaterMelon(No int) bool {
	return (No > 2) && (No%2 == 0)
}

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Accepts the weight of the watermelon and displays
//                  "YES" if it can be divided into two positive even
//                  parts; otherwise displays "NO".
//
/////////////////////////////////////////////////////////////////////////

func main() {
	var iWeight int = 0

	fmt.Scan(&iWeight)

	var bRet bool = CheckWaterMelon(iWeight)

	/////////////////////////////////////////////////////////////////////
	//
	//  Go does not support the ?: (ternary) operator.
	//  Therefore, an if-else statement is used.
	//
	/////////////////////////////////////////////////////////////////////

	if bRet {
		fmt.Printf("YES")
	} else {
		fmt.Printf("NO")
	}
}

/////////////////////////////////////////////////////////////////////////
//
//  Important Note:
//
//  In Go, the opening curly brace '{' must be placed on the
//  same line as the function, if, for, switch, and other
//  statements. Otherwise, the compiler reports a syntax error.
//
//  Incorrect:
//
//      func Display()
//      {
//          // Logic
//      }
//
//      if bRet
//      {
//          // Logic
//      }
//
//  Correct:
//
//      func Display() {
//          // Logic
//      }
//
//      if bRet {
//          // Logic
//      }
//
//  Reason:
//
//  Go automatically inserts a semicolon (;) at the end of
//  certain lines. Writing '{' on the next line causes the
//  compiler to treat it as a separate statement, resulting
//  in a compilation error.
//
//
//		go version          # Check Go version
//		go env              # Show Go environment
//		go run main.go      # Run program
//		go build            # Build executable
//		go fmt              # Format code
//		go test             # Run tests
//		go mod init ProjectName
//		go mod tidy         # Download/update dependencies
//
/////////////////////////////////////////////////////////////////////////