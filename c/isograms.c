// Isograms

#include <stdbool.h>

bool IsIsogram(char *str) 
{
    // Code on you crazy diamond!
         char s, letter1, letter2;
    int i = 0;
    
    if (* (str + i) == '\0')
        return 1;
    else
    {
        while(* (str + (i+1)) != '\0')
        {   
           letter1 = * (str + i);
           letter2 = * (str + (i + 1));
           
           if(letter1 >= 65 && letter1 <= 90)
               letter1 = letter1 + 32;
           if(letter2 >= 65 && letter2 <=90)
               letter2 = letter2 + 32;
               
           if((letter1 != letter2) && (letter1 != s) && (letter2 != s))
           {
               s = letter1;
               i++;
           }
           else
               return 0;
         }
         return 1;
    }
}