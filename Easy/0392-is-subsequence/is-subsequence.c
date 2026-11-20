#include <string.h>
#include <stdbool.h>

bool isSubsequence(char* s, char* t) {
    int n = strlen(t);
    int m = strlen(s);
    int k = 0;
    for(int i = 0; i<n; i++){
        if(s[k] == t[i]){
            k++;
        }
    }
    if(k == m){
        return true;
    }
    return false;
}