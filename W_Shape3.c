
#include <stdio.h>


int main (){

    int n, t=0;

    scanf ("%d", &n);

    for (int i = 1; i <= n*2; i++){
            if (i <= (n*2)/2){
                for (int j = i; j < n; j++){
                    printf(" ");
                }
                for (int j = 1; j <= i*2-1; j++){
                    printf("*");
                }
                printf("\n");

            }
            else {

                t++;
                for (int j = n+1; j < i; j++){
                    printf(" ");
                }
                for (int j = i ; j <= n*2+(n-t) ; j++){
                    printf("*");
                }
                printf("\n");

            }
    }


    return 0;
}
