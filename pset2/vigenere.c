#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //for accepting only one string 
   
    if (argc == 2)
    
    {
    
    string s = argv[1];
   
    //determines if the string entered is only alpha
    
    int i = 0;
    
        for(int j =0; j<strlen(s); j++){
        
            if(isalpha(s[j])){
            
                i = i+0;
            
            }
            
            else{
            
                i++;
            
            }
        
        }
     
    //continues only if key string is all alphas       
        if (i==0){
        
          //Prints and accepts string to be encrypted
        
          printf("plaintext: ");
       
          string t = get_string();
        
          printf("ciphertext: ");        
        
          int l =0;
          
            for(int k=0; k<strlen(t); k++){
        
                //prints lower after encrpyting it
                
                if(l>=strlen(s)){
                        
                        l=0;
                        }
                
                
                if (t[k]>='a' && t[k]<='z'){
                    
                    int m = (int)(t[k]-97);
                    
                        if(l>strlen(s)){
                        
                        //printf("fuck you");
                            
                        l=0;
                        }
                    int n = (int)(tolower(s[l]) -97);
                    
                    int o = (m + n) % 26;
                    
                    printf("%c",(char)(o + 97));
                    
                    l++;
                }   
                //prints upper after encrypting it
                
                else if (t[k]>='A' && t[k]<='Z'){
                    
                    int m = (int)(t[k]-65);
                    
                    int n = (int)(tolower(s[l]) -97);
                    
                    int o = (m + n) % 26;
                    
                    printf("%c",(char)(o + 65));
                    
                    l++;
                }        
                
                //prints a non alpha character without encrypting
                
                else{
                    
                    printf("%c",t[k]);
                    
                }
        
            }        
        }
        
        else{
      
        printf("usage");
      
        return 1;
      
        }        
        
        printf("\n");
        
      
    }
       
        
    else{
        
    printf("usage");    
   
    return 1;
        
    }    
        
    
    
}