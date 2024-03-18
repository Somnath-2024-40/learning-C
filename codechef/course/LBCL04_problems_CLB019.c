// Syntax
// Let's learn about the different elements of a C program.

// Let's take this example code:

// #include <stdio.h>

// int main() {
 
//   printf("%d", 12 + 7);

// }
// #include <stdio.h>: This line is including the Standard Input Output header file. In simple terms, it tells the compiler to include a set of standard input/output functions (like printf) that you can use in your program.

// int main() { ... }: This is the main function of your C program. Every C program starts executing from the main function. It's the entry point. The int before main indicates that this function will return an integer value.

// Inside the main function, we have:

// printf("%d", 12 + 7);: We have already learned about this in a previous lesson.
// Curly Braces {}: The opening curly brace { after main() indicate the start of main function. The closing cury braces } indicate the end of main function block.

// This code, when run, will simply display 19 on the screen, which is the sum of 12 and 7.

// Task
// Now that we have some idea of what these lines mean. I want you to write the complete code in the editor. It will help you in remembering all the lines.

// Write the exact code which we discussed in this lesson, to output the sum of 12 and 7. If you miss anything like curly braces, you will get an error, don't worry, just ask about the error in Help tab.
// Write complete code to print the sum of 12 and 7
#include <stdio.h>

int main() {

    int a = 12;
    int b = 7;
    
   
    int sum = a + b;

  
    printf("%d\n", sum);

    return 0;
}