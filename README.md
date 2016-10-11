# P11_Libraries
Libraries used for the class advanced programming

Static library  cointains the functions

/*
returns a integer that corresponds to the character or string received of binary numbers
param *s is a char pointer that can be a single char or an array
*/
int asciiBinaryToInt(char *s);

/*
returns a integer that corresponds to the character or string received of hexadecimal numbers
param *s is a char pointer that can be a single char or an array
*/
int asciiHEXToInt(char *s);

/*
print the integer that corresponds to the character or string received of hexadecimal numbers
param *s is a char pointer that can be a single char or an array
*/
void asciiHEXToIntCon(char *s);

/*
returns a double that corresponds to the character or string received in ascii
param *s is a char pointer that can be a single char or an array
*/
double asciiToDouble(char *s);

/*
function used to find the length of the character or string
param *s is a char pointer that can be a single char or an array
*/
size_t strlen(const char *str);

dynamic library
/*
this function catches inputt by the user endlessly until the char '~' is entered or until there is no more memory
param *cp is a pointer to the char or string in which it is saving the input
param icur is the current size of the spacce used by the string
*/
void DLL_EXPORT extremlyLargeString(char *cp, int *iCur);
