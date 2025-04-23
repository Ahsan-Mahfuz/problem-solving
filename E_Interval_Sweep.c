#include <stdio.h>


int main ()
{
    int a, b, sub;
    scanf("%d %d", &a, &b);
    

    if (a > b){
         sub = a - b;
    } else {
        sub = b - a;
    }

    if (sub == 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}
