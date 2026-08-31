# include <stdio.h>

int tipoChar(int input) {

if (input >= 48 && input <= 57) 
    return 0;
else if (input >= 65 && input <= 90)
    return 1;
else if (input >= 97 && input <= 122)
    return 2;
else
    return -1;     
}