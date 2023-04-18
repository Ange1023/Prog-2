#include <stdio.h>
#include<stdlib.h>
int main()
{
int t,a[]={2,5,4,3,6,8,9,1,16,23,45,63,29,37,12,18,36,49,33,76};
int i,j,n;
n = sizeof(a)/sizeof (int);
for(i = 1; i < n; i++)
{
j = i-1;
t = a[i];
while (j >= 0 && t < a[j])
{
a[j+1] = a[j];
j = j-1;
}
a[j+1] = t;
}
for(i = 0; i < n; i++)
printf("%d %10.2i \n",i,a[i]);
}