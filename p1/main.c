#include <stdio.h>

int main(void)
{
  int sol, num, cnt=0; // 정답, 입력값, 시도횟수 변수 선언, 처음에는 시도한 적 없으므로 0으로 초기화
  
  scanf("%d", &sol); // 먼저 정답 숫자 입력받음

  do {
        scanf("%d", &num); // 사용자가 추측한 숫자 입력받음
        cnt++; // 숫자를 한 번 입력할 때마다 시도횟수를 1 증가시킴
    
        if (num > sol)
           printf("%d>?\n", num); // 입력한 숫자가 정답보다 클 때
        else if (num < sol)
           printf("%d<?\n", num); // 입력한 숫자가 정답보다 작을 때
        else
           printf("%d==?\n", num); // 입력한 숫자가 정답과 같을 때
  } while(num != sol); // 사용자가 입력한 숫자가 정답과 다르면 계속 반복, 정답을 맞히면 반복문 종료

  printf("%d", cnt); // 정답을 맞힐 때까지 입력한 총 시도 횟수를 입력

  return 0; // 프로그램 정상 종료
}


  
