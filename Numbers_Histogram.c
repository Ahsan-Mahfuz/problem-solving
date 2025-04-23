#include <stdio.h>


int main (){

    int n, value;
    char symbol;

    scanf ("%c %d", &symbol, &n);

    for (int i = 1; i <= n; i++){
        scanf("%d",&value);

        for (int j = 1; j <= value; j++){
            printf("%c",symbol);
        }
        printf("\n");

    }



    return 0;
}
