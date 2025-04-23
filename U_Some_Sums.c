
#include <stdio.h>


int main (){

    int n, a, b, total=0;

    scanf ("%d %d %d", &n, &a, &b);


    for (int i = 1; i <= n ; i++ ){

        int temp = i, sum = 0;

        while(temp!=0){
            sum += temp%10;
            temp /= 10;
        }

        if ( sum >=a && sum <=b ){
                total += i;
        }
    }

    printf("%d",total);




    return 0;
}
