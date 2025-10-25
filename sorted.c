#include<stdio.h>
void main()
{
int a[20], b[20], c[40], n1, n2, n3;
void readdata (int [], int);
void sortdata (int [], int);
void printdata (int[], int);
void mergedata(int[], int[], int[], int,int);
printf("No of elements in first array[1-20]:");
scanf("%d",&n1);
readdata(a, n1);
printf("No of elements in second array:");
scanf("%d", &n2);
readdata (b,n2);
sortdata (a, n1);
sortdata(b,n2);
mergedata(a,b,c,n1,n2);
printf("Sorted array 1:");
printdata(a,n1);
printf("\n sorted array 2:");
printdata(b,n2);
printf("\n merged array:");
printdata(c,n1+n2);
}
//function to read an array
void readdata(int a[],int n)
{
int i;
printf("Enter %d numbers:", n);
for(i=0;i<n;i++)
scanf("%d", &a[i]);
return;
}
// function to display contents 
void printdata(int a[], int n)
{
int i;
for(i=0;i<n;i++)
printf("%d  ", a[i]);
return;
}
//function to sort an array
void sortdata (int a[], int n)
{
int i,j,temp;
for(i=0;i<n-1;i=i+1)
for(j=i+1;j<n;j=j+1)
if (a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
return;
}
//merge an array
void mergedata(int a[], int b[], int c[], int n1,int n2)
{
int i,j,k;
i=j=k=0;
while(i<n1 && j<n2)
{
if (a[i]<b[j])
{
c[k]=a[i];
i++;
k++;
}
else
{
c[k]=b[j];
j++;
k++;
}
}
//copying remaining elements from array a
while(i<n1)
{
c[k]=a[i];
i++;
k++;
}
//copying remaining elements from array b 
while(j<n2)
{
c[k]=b[j];
j++;
k++;
}
return; 
}

