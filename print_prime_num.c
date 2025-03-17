#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// Function to check if a number is prime
int is_prime(int n) {
    if (n < 2) return 0;  // Numbers less than 2 are not prime
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;  // Not a prime number
    }
    return 1;  // Prime number
}

int main(){
    int red=1;
    int black=1000;
    for(int i=red; i<=black; i++){

        if(is_prime(i)){
            printf("%d \n", i);
        }


    }
    return 0;
}
