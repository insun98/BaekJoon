#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    int count = 0;
    //first solution
    // sort(phone_book.begin(), phone_book.end());
    // for (int i = 0; i < phone_book.size()-1; i++){
    //     if(phone_book[i]==phone_book[i+1].substr(0,phone_book[i].length()))
    //         return false;
    // }
    
    //second solution
    unordered_map <string, int> phone_number;
    for(string number: phone_book)
        phone_number[number]++;
    
    for(int i = 0 ; i < phone_book.size(); i++){
        string check = "";
        for (int j = 0; j < phone_book[i].size(); j++){
            check  += phone_book[i][j];
            if(phone_number[check] && check != phone_book[i]){
                answer = false;
                return answer;
            }
        }
    }
   return answer;
}
