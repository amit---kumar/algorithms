#include<stdio.h>

int mn(int a[],int n,int m)
{
 int static i=0,m1;
 if(n==1)
 {
  m1=a[i];
 }
 else
 {
  i++;
  printf(" count=%d\n",i);
  printf("m=%d  a[i]=%d\n",m,a[i-1]);
  if(m<a[i-1])
  {
    m=a[i-1];
    printf("m=%d\n",m);
    return (m=mn(a,n-1,m));
  }
  else
  {
    m=m;
    return (m=mn(a,n-1,m));
  }
 }

 return m>m1?m:m1;

}

void main()
{
 int a[10]={3,4,22,132,56,87,6,4,1550,100},m;
 m=mn(a,10,0);
 printf("%d\n",m);
}
