#include<stdio.h>

int main(){

    int arr[] = {1,2,3,4,5,6};
    int length = sizeof(arr) / sizeof(arr[0]);
    int *p = arr;

    for(int i=0 ; i < length; i++ ){
        printf("%d", (*p + i ));
    }



    return 0;
}