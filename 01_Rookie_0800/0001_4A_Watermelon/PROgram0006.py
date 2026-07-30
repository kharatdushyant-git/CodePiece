#########################################################################
#
#  Problem  : 4A - Watermelon
#  Platform : Codeforces
#  Rating   : 800
#  Language : Python 3
#
#########################################################################

#########################################################################
#
#  Function Name : CheckWaterMelon
#  Description   : Checks whether the given watermelon weight can
#                  be divided into two positive even parts.
#
#########################################################################

def CheckWaterMelon(No):
    if ((No >2) and (No % 2 == 0)): 
        return True
    else:
        return False    

#########################################################################
#
#  Function Name : main
#  Description   : Accepts the weight of the watermelon and displays
#                  "YES" if it can be divided into two positive even
#                  parts; otherwise displays "NO".
#
#########################################################################

def main():
    Weight = int(input())

    Ret = CheckWaterMelon(Weight)

    if Ret == True:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    main()