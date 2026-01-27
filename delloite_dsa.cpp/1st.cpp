// dsa of delloite nla

#include <bits/stdc++.h>
using namespace std;

/* 1. Climbing Stairs */
int climbStairs(int n) {
    if (n <= 2) return n;
    int a = 1, b = 2;
    for (int i = 3; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

/* 2. Leap Year */
bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

/* 3. Prime Number */
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

/* 4. Number is Positive, Negative, Odd, Even, Zero */
void checkNumber(int n) {
    if (n == 0) cout << "Zero";
    else {
        cout << (n > 0 ? "Positive " : "Negative ");
        cout << (n % 2 == 0 ? "Even" : "Odd");
    }
}

/* 5. All divisors of a number */
vector<int> divisors(int n) {
    vector<int> d;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            d.push_back(i);
            if (i != n / i) d.push_back(n / i);
        }
    }
    return d;
}

/* 6. Decimal to Hexadecimal */
string toHex(int n) {
    stringstream ss;
    ss << hex << n;
    return ss.str();
}

/* 7. Perfect Square */
bool isPerfectSquare(int n) {
    int r = sqrt(n);
    return r * r == n;
}

/* 8. Add two fractions */
pair<int,int> addFractions(int a, int b, int c, int d) {
    int num = a * d + b * c;
    int den = b * d;
    int g = __gcd(num, den);
    return {num / g, den / g};
}

/* 9. Fibonacci Numbers */
vector<int> fibonacci(int n) {
    vector<int> f(n);
    if (n > 0) f[0] = 0;
    if (n > 1) f[1] = 1;
    for (int i = 2; i < n; i++)
        f[i] = f[i - 1] + f[i - 2];
    return f;
}

/* 10. Add Digits */
int addDigits(int n) {
    return (n == 0) ? 0 : 1 + (n - 1) % 9;
}

/* 11. Replace 0 with 5 */
int replaceZeroWithFive(int n) {
    string s = to_string(n);
    for (char &c : s)
        if (c == '0') c = '5';
    return stoi(s);
}

/* 12. Perfect Number */
bool isPerfectNumber(int n) {
    int sum = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) sum += n / i;
        }
    }
    return n > 1 && sum == n;
}

/* 13. Armstrong Number */
bool isArmstrong(int n) {
    int sum = 0, temp = n;
    int digits = log10(n) + 1;
    while (temp) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == n;
}

/* 14. Replace 0 with 5 (Duplicate – same as Q11) */

/* 15. Sum of first n natural numbers */
long long sumN(long long n) {
    return n * (n + 1) / 2;
}

/* 16. Circular Permutations */
long long circularPermutations(int n) {
    return tgamma(n); // (n-1)!
}

/* 17. Roots of Quadratic Equation */
void quadraticRoots(double a, double b, double c) {
    double d = b * b - 4 * a * c;
    if (d < 0) cout << "Complex Roots";
    else {
        cout << (-b + sqrt(d)) / (2 * a) << " ";
        cout << (-b - sqrt(d)) / (2 * a);
    }
}

/* 18. Climbing Stairs (Same as Q1) */

/* 19. Maximum Product of Three Numbers */
int maxProduct(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    return max(nums[n - 1] * nums[n - 2] * nums[n - 3],
               nums[0] * nums[1] * nums[n - 1]);
}

/* 20. Happy Number */
bool isHappy(int n) {
    unordered_set<int> s;
    while (n != 1 && !s.count(n)) {
        s.insert(n);
        int sum = 0;
        while (n) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        n = sum;
    }
    return n == 1;
}
