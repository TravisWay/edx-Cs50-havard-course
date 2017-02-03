#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void){

    float test;
       
    
    printf("O hai! How much change is owed?\n");
    
    test = get_float(); 
       
       
         //loop for positive double input
         while (test<=0)
        {
    
          printf("How much change is owed?\n");
    
          test = get_float(); 
    
        }
        
    
        float input = test*100;
    
          int change = (int)((round)(input));
    
          int quarters=0;
    
          int dimes=0;
    
          int nickels=0;
     
          int pennies=0;
    
    
        //change divided by quarters
        while (change >= 25){
        
        quarters = change / 25;
        
        change = change % 25;
  
        
        
        }
        
            //change after quarters out divided by dimes
            while (change >= 10){
        
            dimes = change / 10;
        
            change = change % 10;   
            
            }
        
        
                    //change after quarters and dimes out divided by nickels
                    while (change>= 5){
        
                    nickels = change / 5;
        
                
                    change = change % 5;
                        
                    }
        
        
                        //change after quarters, dimes, and nickels divided by pennies
                        while (change >= 1){
        
                        pennies =change / 1;
        
                        change = change % 1;
                            
                        }
        
    int coins = quarters+dimes+nickels+pennies;
                        
    printf("%i\n", coins);

    printf("j");










    

}