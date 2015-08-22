#include<stdio.h>
#include<conio.h>

int findLargest(int arr[],int size);

void main()
{
   int arr[5];
   int i, max=0;
   clrscr();
   printf("Enter 5 numbers\t");
   for(i=0; i<5; i++)
   {
      scanf("%d", &arr[i]);
   }
   max = findLargest(arr, 5);
   printf("The largest element is %d", max);
   getch();
}

int findLargest(int *arr,int size)
{
   static int i=0, max=-999;
   if(i < size)
   {
      if( max < *(arr+i) )
      {
         max = *(arr+i);
      }
      i++;
      findLargest(arr, size);
   }
  return max;
}
