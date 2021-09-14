#include<stdio.h>

void insertionSort(int array[],int n){
    int i,j,current;
    for(i=1;i<n;i++){
        current = array[i];
        j=i-1;
        while(j>=0 && current<array[j]){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = current;
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

    insertionSort(array,n);

    printf("Sorted elements: ");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}