#include<stdio.h>

void swap(int* a,int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

void selectionSort(int array[],int n){
    int i,j,min,pos;
    for(i=0;i<n;i++){
        pos = i;
        min = array[i];
        for(j=i+1;j<n;j++){
            if(array[j]<min){  
                min = array[j];
                pos = j;
            }
        }
        swap(&array[i],&array[pos]);
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

    selectionSort(array,n);

    printf("Sorted elements: ");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}