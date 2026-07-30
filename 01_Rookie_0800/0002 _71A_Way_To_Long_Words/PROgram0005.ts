import * as fs from "fs";

function PrintWord(word: string): void {
  let len: number = word.length;

  if (len <= 10) {
    console.log(word);
  } else {
    console.log(word[0] + (len - 2) + word[len - 1]);
  }
}

function main(): void {
  let input = fs.readFileSync(0, "utf8").trim().split("\n");

  let wordCount: number = Number(input[0]);

  for (let i: number = 1; i <= wordCount; i++) {
    PrintWord(input[i]);
  }
}

main();