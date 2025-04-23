
#include <stdio.h>


int main (){

    int num1, num2 ;

    while(scanf ("%d %d", &num1, &num2)){
            int sum = 0;
        if (num1 <= 0 || num2 <= 0)
            break;

        if (num1>num2){
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }


        for (int i = num1; i <= num2; i++){
            sum += i;
            printf("%d ", i);
        }
        printf("sum =%d\n", sum);

    }



    return 0;
}
