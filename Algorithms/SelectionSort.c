#include<stdio.h>
int main()
{
    int a[]={12,1,3,4,7};
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        if(min!=i)
        {
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }

    }

    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}

