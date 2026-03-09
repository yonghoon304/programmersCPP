#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode = 0;
    for (int i = 0; i < code.size(); i++) {
        if (code[i] == '1') {
            mode = !mode;
            continue;
        }
        
        if (mode == 0 && i%2==0) {
            answer += code[i];
  
        }
        else if (mode == 1 && i % 2 == 1) {
            answer += code[i];
        }
    }
    
    return (answer=="")?"EMPTY" : answer;
}
int main() {
    cout << solution("abc1abc1abc");

    return 0;
}