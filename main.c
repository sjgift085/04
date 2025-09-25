#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int year;
  
  printf("input the year : ");
  scanf("%i", &year);

  printf("is the year %i the leap year? : %i\n", year, (year%4 == 0 && year%100 != 0) || year%400 == 0);
  
  
  system("PAUSE");	
  return 0;
}
