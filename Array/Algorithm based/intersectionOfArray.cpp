// WAF to print intersected element from given 2 arrays

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void intersecArr(vector<int>& vec1, vector<int>& vec2, vector<int>& vec3)
{
    unordered_map<int, int> freq1;
    unordered_map<int, int> freq2;

    for(int val : vec1)
    {
        freq1[val]++;
    }

    for(int val : vec2)
    {
        freq2[val]++;
    }

    for(const auto& [key, value] : freq1)
    {
        if(freq2.count(key) > 0)
        {
            vec3.push_back(key);
        }
    }

    for(int val : vec3)
    {
        cout << val << endl;
    }
}

int main()
{
    vector<int> vec1 = {1,2,3,4,5,6,7,8,9};
    vector<int> vec2 = {1};
    vector<int> vec3;

    intersecArr(vec1, vec2, vec3);

    return 0;
}
