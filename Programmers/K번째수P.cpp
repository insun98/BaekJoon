
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for(int i = 0; i<commands.size(); i++){
        vector<int> singleCommand = commands.at(i);
        int begin = singleCommand[0];
        int end = singleCommand[1];
        int location = singleCommand[2];
        int vectorSize = end - begin + 1;
        vector<int> subarray;

        for(int j = begin-1; j<end; j++){
           int count =0;
           subarray.push_back(array.at(j));
        }
        sort(subarray.begin(), subarray.end());
        answer.push_back(subarray.at(location-1));
    }
    return answer;
}
