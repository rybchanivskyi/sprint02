int mx_max(int a, int b, int c) {
    int max = a ;

    if(b > a) {
        if(c > b) {
            max = c;
        }
        else {
            max = b;
        }
    }
    else if(c > a) {
        max = c;
    }
    return max;
}
