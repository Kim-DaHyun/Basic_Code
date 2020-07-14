#include <vector>
int majority(const vector<int>& A)
{
    int = A.size();
    int majority = -1, majorityCount = 0;
    for(auto i:A)
    {
        int count = 0;
        for(auto j:A)
            if(i==j) count ++;
        
        if(count>majorityCount)
        {
            majorityCount = count;
            majority = i;
        }
    }
    return majority;    
}