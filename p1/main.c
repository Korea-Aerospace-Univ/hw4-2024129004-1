#include <stdio.h>

int main(void)
{
  int sol, num, cnt=0;

  scanf("%d", sol);

  do {
        scanf("%d", num);

        if (num > sol) {
           printf("%d>?\n", num);
           cnt++;
        }
        if (num < sol) {
           printf("%d<?\n", num);
           cnt++;
        }
        if (num == sol) {
           printf("%d==?\n", num);
           cnt++;
        }
          
  } while(num != sol)

  printf("%d", cnt);

  return 0;
}


  
