#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "dcl.h"

int main() {    /* convert declaration to words */
    while (gettoken() != EOF) {     /* First token on line */
        strcpy(datatype, token);    /* is the datatype */
        out[0] = '\0';
        dcl();      /* parse rest of line */
        if (tokentype != '\n')
            printf("syntax error\n");
        printf("%s: %s %s\n", name, out, datatype);
    }
    return 0;
}
