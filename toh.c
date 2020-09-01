#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void TOH(int n, char b, char a, char e);
int n;
char b[]="beg",a[]="aux",e[]="end";
void main()
{
 printf("enter the total number if disk\n");
 scanf("%d",&n);
 TOH(n, b, a, e);
}
TOH(int n, char b, char a, char e)
{
 if(n==1)
 {
  printf("move disk 1 from %s to %s \n",b,e);
  return;
 }
 else
 {
  TOH(n-1,b,a,e);
  printf("move disk %d from %s to %s \n ",n,b,e);
  TOH(n-1,a,e,b);
 }
}
