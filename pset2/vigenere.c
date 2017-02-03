#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    
    if (argc == 2)
    
    {
    string s = argv[1];
    
    
    
    
         
         for(int i =0; i<strlen(s); i++)
    
            int a = (int)s[i];
    
    printf("plaintext:");
   
    string s = get_string();


        printf("ciphertext:");
        
        for(int i =0; i<strlen(s); i++)

        {
            if ((s[i]>='a' && s[i]<='z'))
            {        
        
            int j = (int)s[i]-97;
            
            int l = (j + k) % 26;
            
            
            printf("%c",(char)(l+97));
            
            
            }
            
            else if((s[i]>='A' && s[i]<='Z'))
            {
                
            int j = (int)s[i]-65;
            
            int l = (j + k) % 26;
            
            
            printf("%c",(char)(l+65));
            
            
            
            }
            else
            {
            printf("%c",s[i]);    
                
            }
            
            
        }

            printf("\n");
    }    
    
     else
    { printf("Usage:\n");
        
        
        return 1;}

}