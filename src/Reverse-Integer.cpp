//
// Created by 闹闹 on 2021/11/13.
// https://github.com/anonymouss/my-leetcode-cpp.git
//

#include <iostream>

class Solution {
public:
    // option + enter
    static int reverse(int x) {
        int flag = x < 0 ? -1 : 1;
        int64_t xx = x * flag;
        int64_t res = 0;
        while (xx > 0) {
            auto i = xx % 10;
            xx /= 10;
            res = res * 10 + i;
        }
        res *= flag;
        if (res > INT32_MAX || res < INT32_MIN) return 0;
        return static_cast<int>(res);
    }
};

int main() {
    [[maybe_unused]] Solution s;

    int x1 = 123;
    int x2 = -123;
    int x3 = 120;
    int x4 = INT32_MAX;
    int x5 = INT32_MIN;

    std::cout << "Case 1: " << Solution::reverse(x1) << std::endl;
    std::cout << "Case 2: " << Solution::reverse(x2) << std::endl;
    std::cout << "Case 3: " << Solution::reverse(x3) << std::endl;
    std::cout << "Case 4: " << Solution::reverse(x4) << std::endl;
    std::cout << "Case 5: " << Solution::reverse(x5) << std::endl;
}
