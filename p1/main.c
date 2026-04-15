#include <stdio.h>

int main(void)
{
  int sol, num, cnt=0;
  bool num1 = false;
  
  scanf("%d", sol);

  do {
        scanf("%d", num);
        num1 = true;

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
          
  } while(!num1 || num != sol);

  printf("%d", cnt);

  return 0;
}


  
