
#include <stdio.h>


int main (){

    char alphabet;

    scanf ("%c", &alphabet);



    if (alphabet >= 'a' && alphabet <='z'){
            if (alphabet == 'z')
                printf ("a");
            else
                printf ("%c",alphabet+1);
    }




    return 0;
}
