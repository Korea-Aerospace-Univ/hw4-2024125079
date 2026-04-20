#include <stdio.h>
int main(void){
    int answer = 0;
    int input = 0;
    int count = 0;
    int i = 0;
    scanf("%d",&answer);

    do{
        scanf("%d",&input);
        if(input > answer){
            printf("%d>?\n",input); 
            count ++;
        }
        else if(input < answer) {
            printf("%d < ?\n", input); 
            count ++;
        }
        else if(input == answer){
        printf("%d ==?\n",input); 
        ++count;
        printf("%d 시도횟수는 %d회\n",input, count);
        }
    }while(input != answer);

    
    return 0;
}
