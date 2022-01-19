//this program takes in user input using C and checks that user input is within a specified range

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    //first we define a character array of fixed length (20 characters)
    char userInput[20] ="";

    //then we read in user input but we only want the first 19 characters to prevent buffer overflow
    printf("Pease enter a word with only uppercase or lowercase letters (max length 20 characters)\n");
    scanf("%19s",&userInput);

    //now we go through and extract the user input that is not the null character '\0'
    int lengthOfInput = 0;
    int maxInputLength = 20;

    for(int counter = 0; counter < maxInputLength; counter++){
        if(userInput[counter]=='\0'){
            break;
        }else{
            lengthOfInput += 1;
        }
    }

    printf("The length of the valid user input is %d", lengthOfInput);

    //finally, we create a new char array that stores only the non-null user input
    char extractedInput[lengthOfInput];//=userInput[0,lengthOfInput];
    extractedInput = userInput[0,lengthOfInput];

    //at this point, we can start validating user input
    printf("The extracted user input is: %s",extractedInput);
}
