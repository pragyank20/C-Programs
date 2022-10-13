#include <stdio.h>
#include <stdlib.h>



int partition(int a[], int s, int e)
{
    int pivot = a[s];

    int cnt;
    for (int i = s + 1; i < e; i++)
    {
        if (a[i] <= pivot)
        {
            cnt++;
        }
    }

    // place pivot at right place

    int pivotindex = s + cnt;
    int temp;
    temp=a[pivotindex];
    a[pivotindex]=a[s];
    a[s]=temp;

    int i = s, j = e;

    while (i < pivotindex && j > pivotindex)
    {
        while (a[i]<pivot)
        {
            i++;
        }
         while (a[j]>pivot)
        {
            j--;
        }

        if(i < pivotindex && j > pivotindex){
            int temp1;
            temp1=a[i++];
            a[i++]=a[j--];
            a[j--]=temp1;
            
        }
        
    }
    return pivotindex;
}

void quickSort(int a[], int s, int e)
{
    if (s >= e)
        return ;
    

    int p = partition(a, s, e);
    //left
    quickSort(a, s, p - 1);
    // right
    quickSort(a, p + 1, e);
    
}

int main()
{
    int a[5] = {5, 25, 10, 26, 18};
    int n = 5;
     for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    quickSort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;

}
