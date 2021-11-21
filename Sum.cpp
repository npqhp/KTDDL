int Sum(int n){
    int s=0, i=0;
    for(;i<=n;i++)
    if (i % 2==0) {
        s += i;
    }
    return s;
}
