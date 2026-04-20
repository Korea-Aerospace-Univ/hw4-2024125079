#include <stdio.h>

int main(void)
{
    int N = 0;      //입력받을 문자열 문자 수 개수 입력받는 변수 선언및 초기화
    
    scanf("%d", &N);         
    // 문자열 문자 수 N 입력 받음, N을 입력 받은 후 배열을 선언해야 N만큼의 공간이 올바르게 할당됨

    char str[N+1];      
    // 입력받을 문자열을 문자형 배열로 선언
    int countletter = 0;        
    // 문자열에서 연속인 영어 소문자 수를 저장하는 변수 선언 및 초기화
    int countnumber = 0;
    // 문자열에서 연속인 숫자 수를 저장하는 변수 선언 및 초기화
    int maxletter = 0;
    // 저장한 연속인 영어 소문자 수의 최대값을 저장하는 변수 선언 및 초기화
    int maxnumber = 0;
    // 저장한 연속인 숫자 수의 최대값을 저장하는 변수 선언 및 초기화
  
    scanf("%s", str);       // 문자열 입력 받음

    for(int i = 0; i < N; i++) {        
    // 처음에 입력받은 문자열 크기만큼 반복실행
        if(str[i] >= 'a' && str[i] <= 'z') {        // 배열 안 문자가 영어 소문자일 때 실행되는 조건문 설정
            countletter++;      // 영어일 때 조건문 실행 다음 인덱스도 영어이면 연속된 문자로 +1됨
            countnumber = 0;        
            // 영어가 연속일때 숫자는 세면 안되므로 0으로 리셋, 영어 소문자 다음 숫자가 올때 1부터 시작하기 위함
            // 이 과정 없으면 연속된 문자 수가 아닌 문자열 안 총 문자 수 구해짐
            // 영어 소문자 나오고 다음에도 소문자 나오면 if문 반복되면서 연속인 문자수 세기 가능
            if(countletter > maxletter) {       
                maxletter = countletter;
                // +1된 countletter가 최대값인 maxletter보다 크면 maxletter에 최대값을 countletter로 갱신
            }
        }
        else if(str[i] >= '0' && str[i] <= '9') {       
        // 배열 안 문자가 영어 소문자 말고 숫자일때 실행되는 조건문
            countnumber++;      // 숫자일 때 조건문 실행 다음 인덱스도 숫자이면 연속된 문자로 +1됨
            countletter = 0;        
            // 연속된 문자만 세야하기 때문에 숫자 인덱스 일때 0으로 리셋, 
            // 이 과정이 없으면 연속된 문자 수가 아닌 문자열 안 총 문자 수 구해짐
            // 숫자가 나오고 다음에 숫자가 오면 else if문 반복되면서 연속인 숫자 수 세기 가능
            if(countnumber > maxnumber) {
                maxnumber = countnumber;
                // 측정한 countnumber가 최대값인 maxnumber보다 크면 maxnumber에 최대값을 countnumber로 갱신
            }
        }
        else {      // 영어 소문자나 숫자가 아닌 경우 셀 필요 없음
            countletter = 0;
            countnumber = 0;
        }
    }
    
    printf("%d\n", maxletter);      
    // 연속인 영어 소문자의 개수의 최대값 출력+다른줄 출력하기 위해 개행문자 넣음
    printf("%d", maxnumber);        // 연속인 숫자의 개수 최대값 출력

    return 0;
}
