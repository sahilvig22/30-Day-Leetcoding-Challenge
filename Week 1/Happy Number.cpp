class Solution {
public:
    int sum(int n) {
        int digit = 0, sum = 0;

        while (n > 0) {
            digit = n % 10;
            sum += digit * digit;
            n = n / 10;
        }
        return sum;

    }
    bool isHappy(int n) {
        map<int, int> seen;

        int n2;
        n2 = n;

        while (1) {
            if (seen[n2] > 1) {
                return false;
            }
            n2 = sum(n2);
            if (n2 == 1)
                return true;

            seen[n2]++;
        }


        return false;

    }
};