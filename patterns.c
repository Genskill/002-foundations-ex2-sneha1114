// patterns.c


#include <stdio.h>
#include <cs50.h>


int main(void) {
  int pattern=get_int("Enter type of pattern (1or2) ");
  int n=get_int("Number of rows ");
  int m=1;
  
  if (pattern==1) {
    for(int i=n; i >=1; i--) {
     for(int j=1; j <=i; j++) {
      printf("#");
     }
     printf("\n");
    }
  }  
  else {
    for(int i=n; i >=1; i--) {
     for(int j=1; j<=i-1; j++) {
      printf(" ");
     }
     for(int k=1;k<=m;k++) {
      printf("#");
     }
     printf("\n");
     m++;
    }
  }    
}  
    
    
    
    
  
