#include <string.h>
#include <stdbool.h>

bool rotateString(char* s, char* goal) {
    int k = 0;
    if(strlen(s) != strlen(goal)) return false;
    else{
        int n = strlen(s);
        char *res = malloc(2*n + 1);
        strcpy(res, s);
        strcat(res, s);
        bool f = strstr(res, goal) != NULL;
        free(res);
        return f;
    }
}