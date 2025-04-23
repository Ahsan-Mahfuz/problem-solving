#include <stdio.h>
#include <limits.h>

int main()
{
      int n, sum = 0;
      scanf("%d", &n);

      int array[n];
      for (int i = 0; i < n; i++)
      {
            scanf("%d", &array[i]);
            sum += array[i];
      }

      int main_sum = ((n + 1) * (n + 2)) / 2;

      printf("%d", main_sum - sum);

      return 0;
}