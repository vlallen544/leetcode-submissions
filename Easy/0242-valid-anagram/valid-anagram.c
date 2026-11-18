#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    int n = strlen(s);
    int m = strlen(t);

    if(n != m){
        return false;
    }

    int *seen = calloc(26, sizeof(int));

    int i = 0;
    while(s[i] != '\0'){
        int chv = s[i] - 'a';
        seen[chv]++;
        i++;
    }

    int *teen = calloc(26, sizeof(int));

    int j = 0;
    while(t[j] != '\0'){
        int chv = t[j] - 'a';
        teen[chv]++;
        j++;
    }

    for(int i = 0; i < 26; i++){
        if(seen[i] != teen[i]){
            free(seen);
            free(teen);
            return false;
        }
    }

    free(seen);
    free(teen);

    return true;
}