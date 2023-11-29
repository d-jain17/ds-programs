/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void linearSearch(int arr[],int ele,int n){
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            printf("element found at index %d",i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("element not present in array");
}
void binarySearch(int arr[],int ele,int n){
    int l=0,h=n-1,flag=0;
    while(l<h){
        int mid=(l+h)/2;
        if(arr[mid]==ele){
            printf("element found at %d",mid);
            flag=1;
            break;
        }
        else if(arr[mid]>ele){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    if(flag==0){
        printf("not present");
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int ele;
    scanf("%d",&ele);
    //linearSearch(arr,ele,7);
    binarySearch(arr,ele,7);

    return 0;
}

