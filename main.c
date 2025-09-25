#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int sec, min;
  
  printf("input the second :");
  scanf("%i", &sec);

  min = sec / 60;
  
  printf("The time for %i second is %i : %i : %i\n", sec, min/60, min%60, sec%60 );     
  
  
  system("PAUSE");	
  return 0;
}
