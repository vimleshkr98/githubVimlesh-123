#include<stdio.h>

int main(){
    int arr[4][2]={{12,34},{34,35},{34,36},{12,38}};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}