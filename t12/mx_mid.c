int mx_mid(int a, int b, int c) {
    int max = a;
    int min = a;
    int sum = a + b + c;
    int mid;

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
    if(b < a) {
        if(c < b) {
            min = c;
        }
        else {
            min = b;
        }
    }
    else if(c < a) {
        min = c;
    }
    mid = (sum - min - max);
    return mid;
}

