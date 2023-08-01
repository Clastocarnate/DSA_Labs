//Write a code in C to input an array of size n and display the second largest element in
//the array

#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n ; i++){
       // printf("Enter Element");
        scanf("%d",&arr[i]);
    }
    
    int max1;
    int max2;
    max1 = arr[0];

    for (int i=0; i<n ; i++){
       // printf("%d",arr[i]);
        if ( max1 < arr[i]){
            max1 = arr[i];
        }
    }
    if (max1 != arr[0]){
        max2 = arr[0];
    }
    else{
        max2 = arr[1];
    }
    for (int i=0; i<n; i++){
        if ( arr[i] < max1 && max2 < arr[i]){
            max2 = arr[i];
        }
    }
    printf("%d %d",max2,max1);

}
