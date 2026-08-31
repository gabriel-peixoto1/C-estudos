double raizb(double x, int n) {
    if(n==1) {
        return x/2;
    }

    return (raib(x,n-1) + (x/raizb(x,n-1)))/2;
}