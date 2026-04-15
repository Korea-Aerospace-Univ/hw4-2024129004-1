#include <stdio.h>

int main(void)
{
  int sol, num, cnt=0;
  bool scanf_num = false;
  
  scanf("%d", sol);

  do {
        scanf("%d", num);
        scanf_num = true;

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
          
  } while(!scanf_num || num != sol);

  printf("%d", cnt);

  return 0;
}


  
