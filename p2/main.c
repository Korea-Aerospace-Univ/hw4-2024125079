#include <stdio.h>

int main(void)
{
    int N = 0;
    char str[N+1];
    int countletter = 0;
    int countnumber = 0;
    int maxletter = 0;
    int maxnumber = 0;
  
    scanf("%d", &N);
    scanf("%s", str); 

    for(int i = 0; i < N; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            countletter++;
            countnumber = 0;
            if(countletter > maxletter) {
                maxletter = countletter;
            }
        }
        else if(str[i] >= '0' && str[i] <= '9') { 
            countnumber++;
            countletter = 0; 
            if(countnumber > maxnumber) {
                maxnumber = countnumber;
            }
        }
        else {
            countletter = 0;
            countnumber = 0;
        }
    }
    
    printf("%d\n", maxletter);
    printf("%d\n", maxnumber);


    return 0;
}
