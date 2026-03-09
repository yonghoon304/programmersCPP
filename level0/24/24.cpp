#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int sum = 0;
    int mul = 1;
    for (int i = 0; i < num_list.size(); i++) {
        mul *= num_list[i];
    }
    for (int i = 0; i < num_list.size(); i++) {
        sum += num_list[i];
    }
    if (mul < pow(sum, 2)) {
        answer = 1;
    }
    else {
        !answer;
    }


    return answer;
}
int main() {
    cout << solution({5, 7, 8, 3});

    return 0;
}