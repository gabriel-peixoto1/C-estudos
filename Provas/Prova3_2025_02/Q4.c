#include <stdio.h>

int mdc(unsigned int a, unsigned int b) {

    if(b==0) {
        return a;
    }

    return mdc(b,a%b);
}