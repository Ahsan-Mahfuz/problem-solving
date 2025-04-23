#include <stdio.h>
#include <string.h>

int main()
{
      char string[1000000];

      scanf("%s", string);
      printf("You entered: %s\n", string);

      int length = strlen(string);

      printf("Length: %d\n", length);

      return 0;
}
