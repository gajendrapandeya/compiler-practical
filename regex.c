
// C program for illustration of regcomp()
#include <regex.h>
#include <stdio.h>
 
// Driver Code
int main()
{
 
    // Variable to create regex
    regex_t reegex;
 
    // Variable to store the return
    // value after creation of regex
    int value;
 
    // Function call to create regex
    value = regcomp( &reegex, "[:word:]", 0);
 
    // If compilation is successful
    if (value == 0) {
        printf("RegEx compiled successfully.");
    }
 
    // Else for Compilation error
    else {
        printf("Compilation error.");
    }
    return 0;
}

// C program for illustration of regexec()
#include <regex.h>