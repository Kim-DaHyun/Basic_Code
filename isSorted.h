#include <vector>
bool isSorted(const vector<int>& seq)
{
    for(int i=0;i<seq.size()-1;i++)
        if(seq[i] > seq[i+1]) return false;
    return true;
}