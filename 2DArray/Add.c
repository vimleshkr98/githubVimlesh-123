#include<stdio.h>

int main(){
    int arr[2][2]={{1,2},{1,2}};
    int arr2[2][2]={{1,2},{1,2}};

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d %d",arr1[i]+arr2[j]);
        }
        printf("\n");
    }



    return 0;  
}