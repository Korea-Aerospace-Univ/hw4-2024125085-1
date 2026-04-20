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
        if(num == guess){
            break;
        }
        else if(num > guess){
            printf("%d<?\n",guess);
        }
        else {
            printf("%d>?\n",guess);
        }
        scanf("%d",&guess);
        n++;
    }while(num != guess);
    // n회 반복할 때마다 증가시킨 변수 n으로 시도횟수 계산
    printf("%d==?\n",guess);
    printf("%d",n);
    
    return 0;
}
