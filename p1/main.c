#include <stdio.h>

int main(void)
{
  int sol, num, cnt=0;
  
  scanf("%d", &sol); 

  do {
        scanf("%d", &num);
        cnt++;
    
        if (num > sol)
           printf("%d>?\n", num);
        else if
           printf("%d<?\n", num);
        else
           printf("%d==?\n", num);
  } while(num != sol);

  printf("%d", cnt);

  return 0;
}


  
