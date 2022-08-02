#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    unordered_map <string, int> temp;
    int answer = 1;
    //assgin each cloth type to the hash map and increase the value by 1
    for(auto single: clothes)
        temp[single[1]]++;
    
    //find the combinations of all types
    for(auto pair: temp)
        answer  *= pair.second + 1;
        
    answer--;
    
    return answer;
}
