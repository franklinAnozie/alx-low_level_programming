char *leet(char *text){
    int i, j;

    for(i = 0; text[i] != '\0'; ){
        i++;
    }
    for(j = 0; j < i; j++){
        if(text[j] == 'a' || text[j] == 'A'){
            text[j] = '4';
        } else if(text[j] == 'e' || text[j] == 'E'){
            text[j] = '3';
        } else if(text[j] == 'o' || text[j] == 'O'){
            text[j] = '0';
        } else if(text[j] == 't' || text[j] == 'T'){
            text[j] = '7';
        } else if(text[j] == 'l' || text[j] == 'L'){
            text[j] = '1';
        } else {
            text[j] = text[j];
        }
    }
    return (text);
}