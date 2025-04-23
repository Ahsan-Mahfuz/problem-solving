#include <stdio.h>

int main()
{
      int n;
      scanf("%d", &n);

      while (n--)
      {

            char string[100001];
            int count = 0;
            scanf("%s", &string);

            for (int i = 0; i < strlen(string) - 2; i++)
            {
                  if (string[i] == '1' && string[i + 1] == '0' && string[i + 2] == '1')
                  {
                        printf("Good\n");
                        count++;
                        break;
                  }

                  if (string[i] == '0' && string[i + 1] == '1' && string[i + 2] == '0')
                  {
                        printf("Good\n");
                        count++;
                        break;
                  }
            }

            if (count == 0)
                  printf("Bad\n");
      }

      return 0;
}