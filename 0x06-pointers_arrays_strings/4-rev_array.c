void reverse_array(int *a, int n){
    int eachMem, temp;
    for(eachMem = 0; eachMem < n; eachMem++){
        temp = a[eachMem];
        a[eachMem] = a[n-1];
        a[n-1] = temp;
        n--;
    }
}