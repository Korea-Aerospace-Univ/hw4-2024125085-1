// [C-월] 2024125085 한수민

#include <stdio.h>

int main()
{
    // 변수 선언 및 초기화
    int N=0,i,alp=0,num=0, max_alp=0, max_num=0;
    scanf("%d",&N); // N값 입력받기
    char arr[N]; // N만큼의 크기의 배열 선언
    int cont01=0, cont02=0; // 0과 1은 true, false의 역할로 사용
    
    for(i=0; i<=N; i++){ // 배열입력
        scanf("%c",&arr[i]);
    }
    
    for(i=0; i<=N; i++){ //배열의 길이만큼 반복
        // ASCII코드 상으로 소문자 내의 값이 있을시
        if(arr[i]>=97 && arr[i] <= 122){
            num = 0;
            cont02 = 0;
            if(alp == 0 && max_alp == 0) { // 현재알파벳수와 최대알파벳수가 0일시
                alp++;  // 현재 알파벳 값 증가, cont를 true, max_alp값변경
                cont01 = 1;
                max_alp = alp;
            }else if(cont01 == 1 && max_alp <= alp){ // cont가 연속(true)적일시,
                alp++;                              // 그리고 최대알파벳갯수와
                max_alp = alp;                      // 현재알파벳 수를 비교
            }else{                                  // alp가 크면 max값갱신
                alp++;                              // 앞의 두 경우가 아닐시
                cont01 = 1;                         // 그냥 추가하고 true로변경
            }
        }
        else if(arr[i]>=48 && arr[i]<=57) {//ASCII코드상으로 숫자 문자열 값이 존재할시
            alp = 0;
            cont01 = 0;
            if(num == 0 && max_num == 0) { //현재숫자수와 최대숫자수가 0일시
                num++; // 현재 num값증가 cont를 true, max값변경
                cont02 = 1;
                max_num = num;
            }else if(cont02 == 1 && max_num <= num){//cont가연속이고 max값과 현재값비교
                num++;
                max_num = num;
            }else{
                num++;
                cont02 = 1;
            }
        }
        else{ //앞의 두 경우가 아닌 경우 보이는 네 변수 초기화
            num = 0;
            alp = 0;
            cont01 = 0;
            cont02 = 0;
        }
    }
    printf("%d\n%d",max_alp,max_num); // max값출력
    return 0;
}
