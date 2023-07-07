#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n,int swap[]);
void printArray(int arr[],int n,int swap[]);


int main(){
    //Initializing
    int arr[] = {97,16,45,63,13,22,7,58,72};
    int n = sizeof(arr)/sizeof(arr[0]);
    int swap[n];

    //Initializing all indexes of swap to 0
    for(int i=0;i<=n;i++){
        swap[i]=0;
    }
    
    bubbleSort(arr,n,swap);
    printArray(arr,n,swap);
    return 0;
}

void bubbleSort(int arr[],int n,int swap[]){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                //Swap
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                //Num of swaps gets made here
                swap[j]++;
            }
        }
    }
}

void printArray(int arr[],int n,int swap[]){
    int i;
    printf("Sorted Array:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    printf("Number of Swaps per Index:\n");
    for(i=0;i<n;i++){
        printf("Index: %d, # of swaps: %d\n",i,swap[i]);
    }
}