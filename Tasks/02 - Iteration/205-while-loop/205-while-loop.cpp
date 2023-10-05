#include <stdio.h>

int main()
{
    int i = 0;

    puts("Start while loop");

    while (i < 5)
    {
        printf("i = %d\n", i);
        i++;        // same as i = i + 1 but more concise;
    }

    printf("Exiting with i=%d\n", i);
}

//Task 3: The loop will repeat 5 times
//Task 4: The loop exits when i = 5 
//Change i = 6 
//Task 5: The loop will exit straight away when i = 6 so will loop through once

//Task 6: make the code countdown from 10 to 0 in intervals of 2

int main()
{
    int i = 10 ;

    puts("Start while loop");

    while (i >= 0)
    {
        printf("i = %d\n", i);
        i = i - 2;    // This will subtract 2 can be written as i -= 2
    }

    printf("Exiting with i=%d\n", i);
}

// Difference between while and do while is do while runs once through whereas while doesnt have to run once
