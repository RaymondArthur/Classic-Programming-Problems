#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void fizzBuzz(int num){
    for(int counter = 0; counter <= num; counter++){
        //divisible by 3 but not 5, print "fizz"
        if((counter % 3 == 0) && (counter % 5 != 0)){
            printf("%d, fizz\n");
        }
        //divisible by 5 but not 3, print "buzz"
        else if((counter % 3 != 0) && (counter % 5 == 0)){
            printf("%d, buzz\n");
        }
        //divisible by 3 and 5, print "fizzbuzz"
        else if((counter % 3 == 0) && (counter % 5 == 0)){
            printf("%d, fizzbuzz\n");
        }
        else{
            printf("%d,\n");
        }
    }
}

int main(int argc, char *argv[]){
    printf("Welcome to fizzbuzz! Please enter a positive integer.\nI will start a counter and print:");
    printf("\n \"Fizz\" if the number is divisible by 3");
    printf("\n \"Buzz\" if the number is divisible by 5");
    printf("\n \"FizzBuzz\" if the number is divisible by 3 or 5");
    
    int num = 0;
    printf("\nPlease enter a positive integer:\n");
    scanf("%d",&num);

    fizzBuzz(num);
}

