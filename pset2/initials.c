#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{

string s = get_string();



    //Prints first initial                          
    if (s[0] != ' ')
    {


    printf("%c",toupper(s[0]));
    
        
    }

        //Runs through string s
        for (int i =0; i<strlen(s)-1; i++)
        {
    
       
            //Prints the next char after space(s)
             if (s[i] == ' '&& s[i+1]!=' '){
    
       
         printf("%c", toupper(s[i+1]));
       
        }
        
        
    


}
printf("\n");
















    }