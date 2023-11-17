/*
WAP to find the length of a string
with/without using library function
for getting length of the string
*/

#include <string.h>
#include <stdio.h>

int main(){

    char input[100];
    int count = 0;
    
    printf("Enter the string: ");
    fgets(input, 100,stdin);   

    for(int i=0; input[i+1] != '\0'; i++){
        if(input[i] != ' '){
            count++;
        }
    }

    printf("Length of the string is %d\n",count);
    
    return 0;
}