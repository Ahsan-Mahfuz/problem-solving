#include <stdio.h>
#include <string.h>

int main()
{
      char string[10000001];
      scanf("%s", string);

      int len = strlen(string);

      for (char i = 'a'; i <= 'z'; i++)
      {
            int count = 0;
            for (int j = 0; j < len; j++)
            {
                  if (string[j] == i)
                  {
                        count++;
                  }
            }
            if (count > 0)
                  printf("%c : %d\n", i, count);
      }

      return 0;
}
