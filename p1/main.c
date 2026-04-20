#include <stdio.h>
int main(void){
    int answer = 0;     // 답 입력받을 변수 answer 선언 및 초기화 
    int guess = 0;      // 답 입력받을 변수 input 선언 및 초기화
    int count = 0;      // 답 맞추기 위해 입력한 횟수 세는 변수 count 선언 및 초기화
    scanf("%d",&answer);        // scanf로 answer 입력 받음
    

    do{
        scanf("%d",&guess);     
        // 예측한 값이 정답될 때까지 반복되도록 do while 반복문 시작에서 scanf로 geuss변수로 입력 받음
        count ++;       // 예측값 입력 후에 입력한 횟수 +1
        if(guess > answer){     // 예측한 값이 answer보다 클 때 예측한 값이 정답보다 크다고 출력 
            printf("%d > ?\n",guess);
        }
        else if(guess < answer) {       // 예측한 값이 answer보다 작을 때 에측한 값이 정답보다 작다고 출력
            printf("%d < ?\n", guess); 
        }
        else if(guess == answer){       // 예측한 값이랑 정답이 같을때 정답이라고 출력
        printf("%d == ?\n",guess); 
        printf("%d\n", count);        // 지금까지 센 횟수 출력
        }
    }while(guess != answer);        
    // 예측한 값과 정답이 같으면 반복문 종료, 예측한 갑이 정답이 아니면 반복되도록 조건설정

    return 0;
}
