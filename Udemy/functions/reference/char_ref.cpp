#include <iostream>

using namespace std;

char* char_function(char* str_ptr)
{
    cout << "we are in char function, argument given = " << str_ptr << endl;
    
    // Modify the string directly (replace the character at index 3)
    if (str_ptr[3] != '\0') {
        str_ptr[3] = 'p';
    }

    return str_ptr;
}

int main()
{
    char r = 'c';
    char str[] = "this is char";  // Initialize str as a character array (string)

    // char_function
    cout << "Before char_function: " << str << endl;
    char* modified_str = char_function(str);
    cout << "After char_function: " << modified_str << endl;

    return 0;
}
