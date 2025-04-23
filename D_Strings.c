#include <stdio.h>
#include <string.h>

int main()
{
      char a[11], b[11];
      scanf("%s %s", &a, &b);

      printf("%d %d\n", strlen(a), strlen(b));

      char concat[strlen(a) + strlen(b) + 1];
      for (int i = 0; i < strlen(a); i++)
      {
            concat[i] = a[i];
      }
      int j = 0;
      for (int i = strlen(a); i < strlen(a) + strlen(b); i++)
      {
            concat[i] = b[j];
            j++;
      }

      concat[strlen(a) + strlen(b)] = '\0';

      printf("%s", concat);

      char temp = a[0];
      a[0] = b[0];
      b[0] = temp;

      printf("\n%s %s\n", a, b);

      return 0;
}