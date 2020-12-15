#include<stdio.h>
void printNDown(int n);
void printNDownR(int n);
int main(void)
{
  printNDown(10);
  printf("\n");
  printNDownR(5);
}
void printNDown(int n)
{  
  while(n)   
  printf("%d ",n--);
} 
void printNDownR(int n)
{
  if (n)
  {   
   printf("%d ",n);   
   printNDownR(n-1); 
 } 
} 
