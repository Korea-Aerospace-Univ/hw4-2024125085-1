// [C-월] 2024125085 소프트웨어학과 한수민

#include <stdio.h>

int main(void)
{
    // 변수선언 및 초기화
    int i,num=0,guess=0,n=1;
    scanf("%d",&num);
    scanf("%d",&guess);
    // 입력받은 두 값이 같지 않을 때마다 반복
    do{
        if(num > guess) printf("%d보다 높습니다.\n",guess);
        else printf("%d보다 낮습니다.\n",guess);
        scanf("%d",&guess);
        n++;
    }while(num != guess);
    // n회 반복할 때마다 증가시킨 변수 n으로 시도횟수 계산
    printf("정답입니다.\n");
    printf("시도횟수는 %d회",n);
    
    return 0;
}
