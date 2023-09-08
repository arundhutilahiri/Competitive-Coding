class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            if (rev > INT32_MAX / 10 || rev < INT32_MIN / 10)
                return 0;
            int n = x%10;
            rev = rev * 10 + n;
            x = x/ 10;
        }
        return rev;
    }
};