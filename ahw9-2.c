#include <stdio.h>

int main() 
{
 int a[5], b[5];
 int i, j=0;
 for(i=0; i<5; i++)
 {
  scanf("%d", &a[i]);
 }

  for(i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    for(i = 0; i < 4; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(b[i] > b[j])
            {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    
    printf("sorted array:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    
    return 0;
}

