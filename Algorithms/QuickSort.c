//quick sort by rs
#include<stdio.h>

int a[]={22,33,1,445,6,1};
int partition(int a[],int l,int h)
{
    int pivot=a[l];
    int i=l,j=h;
    while(i<j)
    {
        do{
            i++;
        }while(a[i]<=pivot);
        do{
            j--;
        }while(a[j]>pivot);

        if(i<j)
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    int temp=a[l];
        a[l]=a[j];
        a[j]=temp;

    return j;
}
void quickSort(int a[],int l, int h)
{
    int j;
    if(l<h)
    {
        j=partition(a,l,h);
        quickSort(a,l,j);
        quickSort(a,j+1,h);

    }

}

int main(){
    int l=0,h=6;
    quickSort(a,l,h);
    for(int i=0;i<6;i++)
        printf("%d ",a[i]);

return 0;

}

