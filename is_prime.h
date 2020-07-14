bool is_prime(long long n)
{
    if(n<=1) return false;
    if(n==2) return true;
    if(n<9) return n%2;
    for(long long i=3; i*i<=n;i+=2)
        if(n%i==0) return false;
    return true;
}