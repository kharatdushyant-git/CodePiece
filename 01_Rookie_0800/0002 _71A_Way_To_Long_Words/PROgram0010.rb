#########################################################################
#
#  Problem  : 71A - Way Too Long Words
#  Platform : Codeforces
#  Rating   : 800
#  Language : Ruby
#  Author   : Aracnestage
#
#########################################################################

#########################################################################
#
#  Function Name : PrintWord
#  Input         : String
#  Output        : None
#  Description   : Prints the word as it is if its length is less than
#                  or equal to 10. Otherwise, prints the abbreviated
#                  form (First Character + Count + Last Character).
#
#########################################################################

def printword(word)
    strlen = word.length

    if strlen <= 10
        puts(word)
    else    
        puts(word[0] + (strlen - 2).to_s + word[strlen - 1])
    end
end

#########################################################################
#
#  Main Function
#
#########################################################################

def main()
    strcnt = gets.to_i

    for newcnt in 0...strcnt
        strword = gets.chomp

        printword(strword)

    end

    # Ruby Style Loop
    #
    # strcnt.times do
    #     strword = gets.chomp
    #     printword(strword)
    # end

end

########################################################################
#
# Call the main function
#
########################################################################

main()