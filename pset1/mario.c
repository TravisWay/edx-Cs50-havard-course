#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    
    
    int height;
   
    
        do {
     
         printf("Height: ");
    
         height = get_int();
       
        
        
        }
    
        while(height > 23 || height < 0);
      
    
        int n = height + 1;
    
        int t = n-1;
    
        int k = 1;
    
            for (int i =1; i<n; i++ ){
        
                for (int w= 0; w<t-1; w++){
            
                    printf("%c",' ');
                    
                }
            
                for(int j=0; j<k; j++){
                            
                            printf("%c",'#');
                            
                    
                    
                }
                
                printf("%c", ' ', ' ');
                
                printf("%c", ' ');
                
                for(int j=0; j<k; j++){
                            
                            printf("%c",'#');
                            
                 }
                
                    printf("\n");
                
                    t--;
            
                    k++;
       
            }
}
        