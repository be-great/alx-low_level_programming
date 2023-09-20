#include "main.h"

int checksap(char c)
{

        char sap[] =" \t\n;.,!?\"(){}";
        
        for (int i = 0 ; i < 15 ; i++)
        {
                if (c == sap[i])
                {
                        return 1;
                }
        }       
        return 0;
}
int islowerc(char c)
{
        if (c >= 97 && c <=  122)
                return 1;
        return 0;
}
char *cap_string(char *str)
{

        int prevoiusvalue = 0;
        while (*str)
        {
                if(checksap(*str))
                        prevoiusvalue = 1;
                else if (islowerc(*str) && prevoiusvalue)
                
                {
                        *str -= 32;
                        prevoiusvalue = 0;
                }
                else
                        prevoiusvalue = 0;

                str++;
        }
            
        return (str);

}