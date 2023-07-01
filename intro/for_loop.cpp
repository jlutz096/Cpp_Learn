#include <iostream>
#include <string>


int main()
{
    // for-loop example
    for(int n = 0; n > 0; n--){
        std::cout << n << ", ";
    }
    std::cout << "liftoff!\n";

    


    // ranged-based for loop
    std::string str {"Hello!"};
    for (char c : str){
        std::cout << "[" << c << "]";
    }
    std:: cout << '\n';


    return 0;

}



/*
* The for loop is designed to iterate a number of times. 
Syntax : for ( initialization; condition; increase) statement

Steps for for loop
1. initialization is executed. Generally, this declares a counter variables, and sets it to some initial value. This is excuted a single time, at the beginning.
2. condition is checked. If it is true, the loop continues; otherwise, the loop ends, and statement is skipped, going directly to step 5.
3. statement is executed. As usual, it can be either a single statement of a block enclosed in curly braces { }.
4. increase is executed. and the loop gets back to step 2.
5. the loop ends: execution continues by the next statement after it.
*/