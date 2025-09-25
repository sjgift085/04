#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int a, b;
  
  printf("input two integers :");
  scanf("%i %i", &a, &b);
  
  printf("+ result is %i\n", a+b);
  printf("- result is %i\n", a-b);
  printf("* result is %i\n", a*b);
  printf("/ result is %i\n", a/b);
  printf("%% result is %i\n", a%b);
  
  
  system("PAUSE");	
  return 0;
}
