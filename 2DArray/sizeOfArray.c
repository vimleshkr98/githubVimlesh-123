#include<stdio.h>

int main(){
    int arr[]={12,32,4,5,3,45,53};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }

   
    return 0;
}