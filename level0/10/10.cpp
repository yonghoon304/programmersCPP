#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = ""; // string문자열 초기화
    answer = my_string;
    answer.replace(s,overwrite_string.size(),overwrite_string);

    return answer;
}
int main() {
    cout<<solution("He11oWor1d", "lloWorl", 2);

    return 0;
}