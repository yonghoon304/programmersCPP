#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    for (int i = 0; i < included.size(); i++) {
        if (included[i]) {
            answer += a + i * d;
        }
    }
    return answer;
}
int main() {
    cout << solution(3, 4, { true, false, false, true, true });

    return 0;
}