#include<stdio.h>

void swap(int* a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

void bubbleSort(int array[],int n){
    int i,j;
    for(i=0;i<n;i++){  
        for(j=i+1;j<n;j++){  
            if(array[j]<array[i])
                swap(&array[i],&array[j]);
        }   
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
    
    bubbleSort(array,n);

    printf("Sorted elements: ");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}