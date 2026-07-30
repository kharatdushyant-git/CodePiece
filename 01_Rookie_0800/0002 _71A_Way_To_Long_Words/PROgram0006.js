/////////////////////////////////////////////////////////////////////////
//
//  Problem  : 71A - Way Too Long Words
//  Platform : Codeforces
//  Rating   : 800
//  Language : JavaScript (Node.js)
//
/////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////
//
//  Package
//  fs : Used to read input from standard input (stdin).
//
/////////////////////////////////////////////////////////////////////////

const fs = require("fs");

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : PrintWord
//  Description   : Displays the word as it is if its length is
//                  less than or equal to 10. Otherwise, displays
//                  the abbreviated form consisting of the first
//                  character, number of middle characters, and
//                  the last character.
//
/////////////////////////////////////////////////////////////////////////

function PrintWord(word) {
  let len = word.length;

  if (len <= 10) {
    console.log(word);
  } else {
    console.log(word[0] + (len - 2) + word[len - 1]);
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

function main() {
  let input = fs.readFileSync(0, "utf8").trim().split(/\r?\n/);

  let wordCount = Number(input[0]);

  for (let i = 1; i <= wordCount; i++) {
    PrintWord(input[i]);
  }
}

main();
