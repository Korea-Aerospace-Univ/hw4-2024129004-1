#include <stdio.h>

int main(void)
{
  int sol, num, cnt=0;
  
  scanf("%d", sol);
  getchar();
  scanf("%d", num);
  

  do {
        if (num != sol) {
          if (num > sol) {
           printf("%d>?\n", num);
           cnt++;
          }
          if (num < sol) {
           printf("%d<?\n", num);
           cnt++;
          }
          getchar();
          scanf("%d", num);
        }
    
        else {
           printf("%d==?\n", num);
           cnt++;
        }
  } while(num != sol);

  printf("%d", cnt);

  return 0;
}


  
