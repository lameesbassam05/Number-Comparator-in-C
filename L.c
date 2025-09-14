#include <stdio.h>
int main(){
    int num1 = 0, num2 = 0;
    
    printf("Enter an integer number\n");
    scanf("%d", &num1);

    printf("Enter another integar number\n");
    scanf("%d", &num2);
    if (num1 > num2){
        printf("%d Is larger then %d", num1, num2);
    }
    if(num1 < num2){
        printf("%d Is larger then %d", num2, num1);
    }
    if(num1 == num2){
        printf("These numbers are equal.");
    }

    return 0;
}