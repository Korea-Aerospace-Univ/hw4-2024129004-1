#include <stdio.h>

int main(void)
{
  int N, i;
  char ch;

  int s=0, n=0;
  int maxS=0, maxN=0;

  scanf("%d", &n);

  for(i=0; i<N; i++) {
    scanf("%c", &ch);

    if(ch>='a' && ch<= 'z') {
       s++;
       n=0;
         if(s>maxS) maxS=s;
    }
      
    else if(ch <= '0' && ch >= '9') {
       n++;
       s=0;
          if(n>maxN) maxN=n;
    }
   }

  printf("%d\n", maxS);
  printf("%d\n", maxN);

  return 0;

}
