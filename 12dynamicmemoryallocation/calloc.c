#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    printf("enter the number of element");
    scanf("%d", &size);

    int *arr = (int*) calloc(size, sizeof(int));

    if (arr == NULL){
        printf("not enough memory");
        return 1;
    }
    for(int i=0; i< size; i++){
        printf("%d", arr[i]);
    }


    for(int i=0; i< size; i++){
        printf("enter element number= %d:", i+1);
        scanf("%d", &arr[i]);
    }
     
    long sum = 0;
    for(int i=0; i< size; i++){
        sum += arr[i];
    }
    printf("the sum of all the element is: %ld", sum);

    return 0;
}