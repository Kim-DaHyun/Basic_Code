#include <cstring>
#include <algorithm>
#include <vector>

vector<bool> SieveOfEratosthenes(vector<long long> n)
{
    long long maximum = -1;
    for(auto i:n)
        maximum = max(maximum,i);
    bool prime[maximum+1];
    memset(prime,true,sizeof(prime));
    for(int i=2;i*i<=maximum;i++)
        if(prime[i]==true)
            for(int j=i*2;j<=maximum;j+=i)
                prime[j] = false;
    
    vector<bool> output;
    for(auto i:n)
        output.push_back(prime[i]);
    return output;
}