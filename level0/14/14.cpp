#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    if (stoi(to_string(a) + to_string(b)) >= stoi(to_string(b) + to_string(a))) {
        answer = stoi(to_string(a) + to_string(b));
    }
    else {
        answer = stoi(to_string(b) + to_string(a));
    }

    return answer;
}
int main() {
    cout << solution(89, 8);
    return 0;
}