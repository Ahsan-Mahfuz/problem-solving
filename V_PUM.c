
#include <stdio.h>


int main (){

    int n, temp = 1;

    scanf ("%d", &n);


    for (int i = 1; i <= n; i++){

            printf("%d %d %d PUM\n", temp, temp+1, temp+2);
            temp += 4;

    }

    return 0;
}
