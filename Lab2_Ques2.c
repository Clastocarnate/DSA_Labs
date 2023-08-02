// Store elements using dynamic memory allocation in an array and the print the two greatest numbers

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n;
    scanf("%d",&n);
    int *arr;
    arr = (int*)malloc(n * sizeof(int));
    for (int i=0; i<n ; i++){
        scanf("%d",&arr[i]);
    }

    int max1 = arr[0];

    for (int i=0; i<n; i++){
        if (arr[i] > max1){
            max1 = arr[i];
        }
    }

    int max2;
    if (max1 != arr[0]){
        max2=arr[0];
    }
    else{
        max2 = arr[1];
    }
    for (int i=0; i<n; i++){
        if (arr[i] > max2 && arr[i] < max1){
            max2 = arr[i];
        }
    }
    printf("%d %d",max1,max2);
    
    
    return 0;
}
