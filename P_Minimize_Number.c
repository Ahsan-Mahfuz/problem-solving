#include <stdio.h>

int main()
{
      int n, odd_count, test_count = 0;
      scanf("%d", &n);

      int array[n];
      for (int i = 0; i < n; i++)
      {
            scanf("%d", &array[i]);
      }

      while (1)
      {
            odd_count = 0;
            for (int i = 0; i < n; i++)
            {
                  if (array[i] % 2 != 0)
                        odd_count++;
            }
            if (odd_count > 0 && test_count == 0)
            {
                  printf("0");
                  break;
            }
            else if (odd_count > 0 && test_count > 0)
            {
                  printf("%d", test_count);
                  break;
            }
            else
            {
                  for (int i = 0; i < n; i++)
                  {
                        array[i] = array[i] / 2;
                  }
                  test_count++;
            }
      }

      return 0;
}