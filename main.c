/* Color Code Resistance Calculator in C programming
* C functions,flow control statements,operators,loops
* © FaradTech
*/

// Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Declaring void functions
void stripe3(){
    char array[5][4][4] = {"Black","Brown","Red","Orange","Yellow",
    "Green","Blue","Violet","Grey",
    "White","Gold","Silver","No color"};
    int col_1,col_2,col_3;

   printf("**********Select the three colours ***********");
   scanf("%d %d %d",&col_1,&col_2,&col_3);

   if ( col_1 == array[0]){
    printf("Black");
   }

}
void stripe4(){

}
void stripe5(){

}
void userGuide(){
    printf("\n\t\t ************Basic Procedures for Calculating the resistance of Color code resistors.");
    getchar(); //holds screen
}
void Quit(){
    system("cls"); //clear the screen for another window
   return 0;
}
void start(){
    int choice;
    printf("\n\n\t\t\t\t ###### COLOR CODE RESISTANCE CALCULATOR #####"); // \t for tab and \n for newline - escape characters.
    printf("\n\n \t\t\t\t Select an option to continue ");
    printf("\n\n\n\n \t\t\t\t\t 1. Start");
    printf("\n\n\n\n \t\t\t\t\t 2. User Quide");
    printf("\n\n\n\n \t\t\t\t\t 3. Quit");

    scanf("%d",&choice); //take the choice from the user
    getchar(); //holds screen

    //control flow statements with if ... else
if (choice == 1){
   int stripe;
        system("cls");
        printf("\n\t\t\t\t\t**Choose the type of color code resistor");
        printf("\n\n\n\n\n\t\t\t\t\t[1] 3-stripes\n");
        printf("\t\t\t\t\t[2] 4-stripes\n");
        printf("\t\t\t\t\t[3] 5-stripes");

        scanf("%d",&stripe);
      //control flow with switch statement
        if (stripe == 1){
            stripe3();
        }
        return 0;
}
else if (choice == 2){
    userGuide();
    return 0;
}
else {

    Quit(); //call the void quit() function
}
}





int main()
{
    start(); //call the void start()function
    return 0;

    int i;
    int color_1, color_2, multiplier, tolerance;
}
