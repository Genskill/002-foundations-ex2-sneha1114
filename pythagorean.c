// pythagorean

#include <stdio.h>
#include <cs50.h>


int main(void) {
  float a = get_float("side 1 ");
  float b = get_float("side 2 ");
  float c = get_float("side 3 ");
  float sum;
  
  if(a > b && a > c) {
    sum = b*b + c*c;
    if(sum==a*a) {
     printf("Yes\n");
    } 
    else {
     printf("No\n");
    }   
  }  
  else if(b > a && b > c) {
    sum = a*a + c*c;
    if(sum==b*b) {
     printf("Yes\n");
    } 
    else {
     printf("No\n");
    }   
  }  
  else {
  sum = a*a + b*b;
    if(sum==c*c) {
     printf("Yes\n");
    } 
    else {
     printf("No\n");
    }   
  }    
}  
  
