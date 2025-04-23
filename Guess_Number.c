#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
      char n;

      int count = 1, max = 100, min = 1;

      int random = rand() % (max - min + 1) + min;

      int target_value = 105;

      printf("%d", random);

      while (count != 0)
      {

            printf("%d", random);

            scanf("%c", &n);

            if (n == '>')
            {
                  min = random;

                  if (count == 0)
                  {
                        max = rand() % (max - min + 1) + min;
                  }
            }
            else if (n == '<')
            {
                  max = random;
            }
            else
            {
                  printf("! %d", random);
                  break;
            }
            random = rand() % (max - min + 1) + min;
      }

      return 0;
}