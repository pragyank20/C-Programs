#include<stdio.h>

void selectionSort(int a[],int n){
int index;
for (int i = 0; i < n; i++)
{
    index=i;
    for (int j = i+1; j < n; j++)
    {
        if(a[j]<a[index]){
            index=j;
        }
    }
    int temp;
    temp=a[i];
    a[i]=a[index];
    a[index]=temp;
}

}

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
        
    }
    printf("\n");
}

int main()
{
    int a[] = {5, 25, 10, 26, 18};
    int n = 5;
    printArray(a,n);
    selectionSort(a,n);
    printArray(a,n);
}