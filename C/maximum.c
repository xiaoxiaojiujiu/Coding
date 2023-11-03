#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
    int lst[10] = {0};
    int i = 0;
    for(i=0;i<10;i++){
    scanf("%d",&lst[i]);
    }
    int max = lst[0];
    for(i=1;i<10;i++){
        if(lst[i] > max){
            max = lst[i];
        }
        else{
            max = max;
        }
    }
    printf("max = %d\n",max);
    return 0;
}