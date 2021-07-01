#include <stdio.h>
void swap(int*, int*);
int main()
{
   int a, b;
   printf("Enter the value to swap them ");
   scanf("%d %d",&a,&b);
   swap(&a, &b);
   printf("The swaped value are\n%d %d", a, b);
   return 0;
}
void swap(int *x, int *y)
{
   int temp;
   temp = *y;
   *y = *x;
   *x = temp;
}
