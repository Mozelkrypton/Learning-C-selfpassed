#include<stdio.h>
#include<stdlib.h>

int main(){
    int red=1;
    for(int i=red; i<=24; i+=2){
        if(i==3)continue;
        printf("the number %d \n",i);
    }
    return 0;
}
