#include <stdio.h>
#include <stdlib.h>



void FindRand(int num){

    int i;
    int arr[50000];
    for (i = 0; i <50000; i++)
    {
        arr[i] = rand();

     }




    int j,is_found=-1;

    for (j = 0; j <50000; j++)
    {       if(arr[j]==num){
            is_found=i;
        }
    }

    if(is_found==-1){
        printf("Item not found\n");

    }else{
        printf("Item found at index on. %d\n",is_found);
    }

     return 0;

}
int main(){

    int search_value, a;
    a = 1;
    do
    {
        printf("Enter search value:\n");
        scanf("%d",&search_value);
        printf("%d", search_value);
    }
    while(a != 5);
    return 0;


}

