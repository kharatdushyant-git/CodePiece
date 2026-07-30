#########################################################################
#
#  Problem  : 4A - Watermelon
#  Platform : Codeforces
#  Rating   : 800
#  Language : Ruby
#
#########################################################################

#########################################################################
#
#  Function Name : CheckWaterMelon
#  Description   : Checks whether the given watermelon weight can
#                  be divided into two positive even parts.
#
#########################################################################

def check_watermelon(no)
    return (no > 2) && (no % 2 == 0)
end

#########################################################################
#
#  Function Name : main
#  Description   : Accepts the weight of the watermelon and displays
#                  "YES" if it can be divided into two positive even
#                  parts; otherwise displays "NO".
#
#########################################################################

def main()
    weight = gets.to_i

    ret = check_watermelon(weight)

    puts(ret ? "YES" : "NO")
end    

main()


####################################################################################
#
#   Starts with	        Ruby thinks it's a...	        Example
#   lowercase	    Local variable or method	    weight, puts, check_watermelon
#   Uppercase	    Constant, Class, or Module	    Math, String, Array, PI
#   @	                Instance variable	            @name
#   @@	                   Class variable	            @@count
#   $	                   Global variable	            $stdout
#
#
#   hence writting in capital for vairable is not allowed
#
####################################################################################