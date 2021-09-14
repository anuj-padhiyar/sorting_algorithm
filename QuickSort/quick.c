#include<stdio.h>

void swap(int* a,int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

int partition(int array[],int left,int right){
    int pivot = array[right];
    int i = (left - 1);
    for (int j=left;j<=right-1;j++){
        if(array[j]<pivot){
            i++;
            swap(&array[i], &array[j]);
        }
    } 
    swap(&array[i + 1], &array[right]); 
    return (i + 1); 
}

void quickSort(int array[],int left,int right){
    if(left<right){
        int part = partition(array,left,right);
        quickSort(array,left,part-1);
        quickSort(array,part+1,right);
    }
}

int main(){
    int n,i;
    printf("Emter Array Length : ");
    scanf("%d",&n);

    int array[n];
    printf("Enter %d Elements : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    
    quickSort(array,0,n-1);
    printf("Sorted elements: ");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}