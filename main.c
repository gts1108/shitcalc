#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/*
 * 
 * 
 * HELP IDK HOW TO USE C 
 * 
 *
 *  
*/

int main()
{


    addInput();
    return 0;
}


void addInput(void){
    int firstNum;
    int secondNum;


    printf("This is a calc you should add numbers\nFirst Number:\n");
    scanf("%i",&firstNum);
    printf("Second Number:\n");
    scanf("%i",&secondNum);
    int resultado = firstNum + secondNum;
    printf("Result: %i ", resultado);
}
