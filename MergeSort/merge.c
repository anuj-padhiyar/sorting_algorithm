#include<stdio.h>

void merge(int array[],int left,int mid,int right){
    int n1,n2,i,j,k;
    n1 = mid-left+1;
    n2 = right-mid;

    int L[n1],R[n2];
    for (i=0;i<n1;i++)
        L[i] = array[left + i];
    for (j=0;j<n2;j++)
        R[j] = array[mid + 1 + j];

    i=0;
    j=0;
    k=left;
    while(i<n1 && j<n2){
        if(L[i]<R[j])
            array[k++] = L[i++];
        else
            array[k++] = R[j++];
    }

    while(i<n1)
        array[k++] = L[i++];
    while(j<n2)
        array[k++] = L[j++];
}
void mergeSort(int array[],int left,int right){
    if(left>=right)
        return;
    int mid = left + (right - left)/2;
    mergeSort(array,left,mid);
    mergeSort(array,mid+1,right);
    merge(array,left,mid,right);
}

int main(){
    int n,i;
    printf("Emter Array Length : ");
    scanf("%d",&n);

    int array[n];
    printf("Enter %d Elements : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    
    mergeSort(array,0,n-1);
    printf("Sorted elements: ");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}