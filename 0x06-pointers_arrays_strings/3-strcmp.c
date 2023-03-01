int _strcmp(char *s1, char *s2){
    int lengthOfs1 = 0, returnVal = 0, comp = 0;

    while(s1[lengthOfs1] != '\0'){
        lengthOfs1++;
    }

    while (s1[comp] != '\0'){
        if(s1[comp] == s2[comp]){
            comp++;
        }
        if(s1[comp] > s2[comp]){
            returnVal = 15;
            break;
        }
        if(s1[comp] < s2[comp])
        {
            returnVal = -15;
            break;
        }
    }

    return(returnVal);
    
}