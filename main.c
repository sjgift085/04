#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int sec;
  
  printf("input the second :");
  scanf("%i", &sec);

  printf("the time is %i : %i\n", sec/60, sec%60);
  
  
  system("PAUSE");	
  return 0;
}
