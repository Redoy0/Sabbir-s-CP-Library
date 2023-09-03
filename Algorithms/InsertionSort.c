//insertion sort by Rs
#include<stdio.h>
int main()
{
    int a[]={0,5,8,1,2};
    int n=sizeof(a)/sizeof(int),j,temp;
    printf("Before Insertion Sorting\n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    for(int i=1,j=0;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0 && a[j]>temp;j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }

printf("\nAter Using Insertion Sort");
    printf("\n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}

