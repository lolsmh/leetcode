class Solution {
public:
    int getNumber(int n) {
        int r = 0;
        while (n > 0) {
            int p = n % 10;
            r += p * p;
            n /= 10;
        }
        return r;
    }
    bool isHappy(int n) {
        unordered_set<int> ban;
        while (n != 1) {
            int x = getNumber(n);
            if (ban.count(x)) {
                return false;
            }
            n = x;
            ban.insert(x);
        }
        return true;
    }
};