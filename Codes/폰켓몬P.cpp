#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int size = nums.size();
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    cout<< nums.size()/2;

    if(nums.size() >= size / 2)
        answer = size / 2;
    else 
        answer = nums.size();
    return answer;
}
