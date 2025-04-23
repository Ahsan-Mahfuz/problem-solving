#include <stdio.h>
#include <string.h>

int main()
{
      int n;
      scanf("%d", &n);

      while (n--)
      {
            char string[101];
            scanf("%s", &string);

            if (strlen(string) <= 10)
                  printf("%s\n", string);
            else
            {
                  char first = string[0], last = string[strlen(string) - 1];
                  int count = strlen(string) - 2;

                  printf("%c%d%c\n", first, count, last);
            }
      }

      return 0;
}