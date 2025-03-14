#include<stdio.h>

int main(){
    printf("time it up");

    int red=1;
    printf("%d",red);
    // a for loop used to execute a block of code a number of times 
    //this for loop lists all odd numbers from 1 to 24 exept 3
    // for(initialization, condition, de/incrementation)
    for(int i=red; i<=24; i+=2){
        if(i==3)continue;
        printf("%d\n",i);
    }
    return 0;
}

