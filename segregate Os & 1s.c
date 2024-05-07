#include <stdio.h>
void printArr(int arr[] , int n );
int main(){
    int n ;
    printf("how many elements are present in the array : ");
    scanf("%d",&n);
    printf("\nRemember to enter values in 0s and 1s only else all other non zero elements will be treated as 1 \n");
    int arr[n];                               // array initialising...
    for (int i = 0 ; i < n ; i++){
        printf("enter 0/1 for position %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\norignal array enter is : ");
    printArr(arr , n );

    //counting number of zeros present in the array.
    int cnt = 0;
    for (int i = 0 ; i < n ; i++ ){
        if( arr[i] == 0 ){
            cnt++;
        }
    }


    for (int i = 0 ; i < n ; i++ ){
        if ( i < cnt ){
            arr[i] = 0;
        }
        else{
            arr[i] = 1 ;
        }
    }
    printf("\nsegregated array is    : ");
    printArr(arr , n );
    return 0 ;
}



void printArr(int arr[], int n){
    for (int i = 0 ; i < n; i++){
        printf("%d ",arr[i]);
    }
}
