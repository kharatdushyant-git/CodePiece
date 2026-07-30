#########################################################################
#
#  Problem  : 71A - Way Too Long Words
#  Platform : Codeforces
#  Language : Python
#  Author   : Aracnestage
#
#########################################################################

#########################################################################
#
#  Function Name : PrintWord
#  Input         : String
#  Output        : None
#  Description   : Prints the original word if its length is less
#                  than or equal to 10. Otherwise, it prints the
#                  abbreviated form of the word.
#
#########################################################################

def PrintWord(words):

    strlength = len(words)

    if strlength <= 10:
        print(words)
    else:
        print(words[0] + str(strlength - 2)+ words[strlength - 1])

#########################################################################
#
#  Function Name : main
#  Input         : None
#  Output        : None
#  Description   : Accepts the number of words from the user,
#                  reads each word, and passes it to the
#                  PrintWord() function.
#
#########################################################################

def main():

    strcount = int(input())

    for Cnt in range(strcount):

        strword = input()

        PrintWord(strword)

#########################################################################
#
#  Entry Point of the Program
#
#########################################################################        

if __name__ == "__main__":
    main()
