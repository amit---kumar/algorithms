#include<stdio.h>

int al(int a[],int n)
{
 int static i=0,s;
 if(n==1)
 {
  s=a[i];
  return s;
 }
 else
 {
  i++;

  printf(" count=%d\n",i);
  s=a[i-1]+al(a,n-1);
  return s;
 }

}

void main()
{
 int a[10]={3,4,22,32,56,87,6,4,0,10},s;
 s=al(a,10);
 printf("%d\n",s);
}
