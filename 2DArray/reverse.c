#include<stdio.h>

int main(){
    int arr[4]={1,2,3,4};
   
    for(int i=0;i<=3;i++){
        printf("%d ",arr[i]);
    }
     printf("\n");
    int i=0;
    int j=4-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

        i++;
        j--;
    }
    for(int i=0;i<=3;i++){
        printf("%d ",arr[i]);
    }
}