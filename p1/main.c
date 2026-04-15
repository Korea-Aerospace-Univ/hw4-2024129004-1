#include <stdio.h>

int main(void)
{
  int sol, num, cnt=0;
  
  scanf("%d", &sol);
  scanf("%d", &num);
  

  do {
        cnt++;
    
        if (num != sol) {
          if (num > sol)
           printf("%d>? \n", num);
          else
           printf("%d<? \n", num);
          scanf("%d", &num);
        }
    
        else {
           printf("%d==? \n", num);
        }
  } while(num != sol);

  printf("%d", cnt);

  return 0;
}


  
