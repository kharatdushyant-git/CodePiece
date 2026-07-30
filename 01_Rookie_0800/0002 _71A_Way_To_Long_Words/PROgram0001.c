#include<stdio.h>
#include<string.h>

int main()
{
    int iCnt = 0;
    int Strings = 0;

    scanf("%d",&Strings);

    char Crr[100][100];

    for(iCnt = 0; iCnt < Strings; iCnt++)
    {
        scanf("%s", Crr[iCnt]);
    }

    for(iCnt = 0; iCnt < Strings; iCnt++)
    {
        if(strlen(Crr[iCnt]) <= 10)
        {
            printf("%s\n", Crr[iCnt]);
        }
        else
        {
            //int len = strlen(Crr[iCnt]);
            //printf("%c%d%c\n", Crr[iCnt][0],len - 2, Crr[iCnt][len - 1]);

            printf("%c", Crr[0]);
            printf("%d", strlen(Crr) - 2);
            printf("%c", Crr[strlen(Crr) - 1]);
        }
    }

    return 0;
}