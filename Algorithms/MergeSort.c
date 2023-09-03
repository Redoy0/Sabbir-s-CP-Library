//merge sort by rs
#include<stdio.h>
int b[100];
 int a[]= {22,1,332,5,6,1};
void Merge(int l,int mid,int h)
{
    int i=l;
    int k=l;
    int j=mid+1;
    while(i<=mid && j<=h)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            k++;
            i++;
        }
        else
        {
            b[k]=a[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        b[k]=a[i];
        k++;
        i++;
    }
    while(j<=h)
    {
        b[k]=a[j];
        k++;
        j++;
    }
    for(int i=l;i<=h;i++)
        a[i]=b[i];

}

void MergeSort(int l,int h)
{
    if(l<h){
    int mid=(l+h)/2;
    MergeSort(l,mid);
    MergeSort(mid+1,h);
    Merge(l,mid,h);

    }else return;
}
int main()
{



    int n=6;

    int l=0,h=n;
    printf("before sort : ");
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
    MergeSort(l,h);
    printf("\nafter sort : ");
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);


    return 0;
}
