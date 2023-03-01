char *_strncpy(char *dest, char *src, int n){
    int lengthOfDest = 0;

    while(lengthOfDest < n){
        dest[lengthOfDest] = src[lengthOfDest];
        if(src[lengthOfDest] == '\0') {
            break;
        }
        lengthOfDest++;
    }

    return dest;
}