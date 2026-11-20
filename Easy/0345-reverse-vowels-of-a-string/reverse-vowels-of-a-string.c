char* reverseVowels(char* s) {

    int n = strlen(s);
    int *res = malloc(n*sizeof(int));
    int k = 0;

    for(int i = 0; i<n; i++){
        if(s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u'){
            res[k] = i;
            k++;
        }
    }

    int i = 0;
    int j = k-1;

    while(i<j){

        char temp = s[res[i]];
        s[res[i]] = s[res[j]];
        s[res[j]] = temp;
        i++;
        j--;
        
    }

    free(res);
    return s;

}