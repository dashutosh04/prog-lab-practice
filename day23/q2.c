/*Write a program to extract last
character of every word present
in a sentence.*/

#include <stdio.h>
#include <string.h>

int main(){

    char input[100];
    int count = 0;
    
    printf("Enter the string: ");
    fgets(input, 100,stdin);   

    for(int i=0; input[i] != '\0'; i++){
        if(input[i+1] == ' ' || input[i+2] == '\0'){ 
            printf("%c",input[i]);
        }
    }

    printf("\n");
    
    return 0;
}