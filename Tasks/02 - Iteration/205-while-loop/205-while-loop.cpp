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
