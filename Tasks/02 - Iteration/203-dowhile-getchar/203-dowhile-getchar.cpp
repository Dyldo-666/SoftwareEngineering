#include <stdio.h>

int main()
{
    puts("Press a letter or number, then press return");
    puts("Press q then return to quit");

    char userEnteredCharacter;
    char returnKey;

    do
    {
        userEnteredCharacter = getchar();   //ASCII character
        returnKey = getchar();              //Return key
        printf("You typed %c\n", userEnteredCharacter);
        //printf("You also pressed return (ASCII %d)\n", returnKey);    //Uncomment this

    } while (userEnteredCharacter != 'q');            //Repeat if condition is met - note the != operator

    puts("Finished");
}

//------------------------------------ My Work ------------------------------------------------------

int main()
{
    puts("Press a letter or number, then press return");
    puts("Press q then return to quit");

    char userEnteredCharacter;
    char returnKey;
    _Bool Exitcondition;
    
    do
    {
        userEnteredCharacter = getchar();   //ASCII character
        returnKey = getchar();              //Return key
        printf("You typed %c\n", userEnteredCharacter);
        printf("You also pressed return (ASCII %d)\n", returnKey);    //Uncomment this
        Exitcondition = (userEnteredCharacter == 'q' || userEnteredCharacter =='Q');
        
    } while  (!Exitcondition);           //Repeat if condition is met - note the != operator

    puts("Finished");
}
