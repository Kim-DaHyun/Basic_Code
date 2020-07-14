#include <vector>
int majority2(const vector<int>& A,int min_value,int max_value)
{
    vector<int> count(max_value-min_value+1,0);
    for(auto i:A)
        count[i-min_value]++;
    
    int majority = min_value;
    for(int i=min_value;i<=max_value;i++)
        if(count[i] > count[majority]) majority = i;
        
    return majority;
}