#include <stdio.h>
int main ()
{
	
   int num[20],count=0;
   int i, j, a, n;
   printf("enter number of elements in an array\n");
   count++;
   scanf("%d", &n);
    count++;
   printf("Enter the elements\n");
    count++; count++;
   for (i = 0; i < n; ++i)
   {
   	 count++;
   	  count++;
   	  scanf("%d", &num[i]);
   	  count++;
   }
      count++;
   for (i = 0; i < n; ++i)
   {
   	count++;
   	count++;
      for (j = i + 1; j < n; ++j)
	  {
         if (num[i] > num[j])
		 {
		 	count++;
            a = num[i];
            count++;
            num[i] = num[j];
            count++;
            num[j] = a;
            count++;
         }
      }
   }
   count++;
   printf("The numbers in ascending order is:\n");
   count++;
   count++;
   for (i = 0; i < n; ++i)
   {
   	  count++;
   	  count++;
      printf("%d\n", num[i]);
      count++;
   }
   count++;
   printf("Time complexity:%d",count);
}

