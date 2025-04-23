#include <stdio.h>


int main (){

    int num1, num2, global_count=0 ;

    scanf ("%d %d", &num1, &num2);


    for (int i = num1; i <= num2; i++){
        int temp = i;



        if ((temp%10) != 4 && (temp%10) != 7)
            {

                continue;

            }
        else {
            int count = 0;

            while(temp!=0){
                if (temp%10 != 4  && temp%10 != 7)
                   {
                       count++;
                       break;
                   }

                temp = temp/10;
            }
            if (count==0)
            {
                global_count++;
                printf("%d ",i);
            }
        }

    }

    if (global_count == 0)
        printf("-1");


    return 0;
}
