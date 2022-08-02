#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    // first solution
    // unordered_map<string, int> temp;
    // for (string name: participant){
    //     temp[name]++;
    // }
    // for(string name: completion){
    //     temp[name]--;
    // }
    // for(auto pair: temp){
    //     if(pair.second > 0){
    //         answer = pair.first;
    //         break;
    //     }
    // }
    // return answer;
    
    //second solution
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    for(int i ; i < completion.size(); i++){
        if(participant.at(i) != completion.at(i)){
            return participant.at(i);
        }
    }
    return participant.back();
}
