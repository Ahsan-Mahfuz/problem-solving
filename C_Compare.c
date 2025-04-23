#include <stdio.h>

int main()
{
      char x[21], y[21];
      int j = 0;

      scanf("%s %s", &x, &y);

      for (int i = 0; i < strlen(x); i++)
      {
            if (x[i] == y[i])
                  continue;
            else if (x[i] < y[i])
            {
                  printf("%s", x);
                  j++;
                  break;
            }
            else if (x[i] > y[i])
            {
                  printf("%s", y);
                  j++;
                  break;
            }
      }

      if (j == 0)
            printf("%s", x);

      return 0;
}