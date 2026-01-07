// #include <stdio.h>


// int main(){

//     int arr[] = {1,2,3,4,5};

//     int length = sizeof(arr) / sizeof(arr[0]);

//     for(int i=0 ; i<length ; i++){

//         printf("%d",arr[i]);
//     }

//     return 0;
// }


#include<stdio.h>

int main(){

    int a,b,c;
    char op;


    printf("Enter the first element");
    scanf("%d",&a);

    printf("Enter the operator");
    scanf("%s",&op);

    printf("Enter the second element");
    scanf("%d",&b);


    switch(op){
        case '+':
            printf("%d",c=a+b);
            break;
        case '/':
            if(b != 0){
                printf("%d",c=a/b);
            }else{
                printf("cant divide");
            }
            break;
        default:
            printf("invalid");
    }

    return 0;

}