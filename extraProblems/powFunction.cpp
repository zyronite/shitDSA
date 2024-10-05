#include<iostream>
using namespace std;

int powFun(double x, int n) {
    if(x == 1) return 1.0;
    if(x == 0) return 0.0;
    if(n == 1) return x;
    if(x == -1 && n % 2 == 0) return 1.0;
    if(x == -1 && n % 2 != 0) return -1.0;

    long binForm = n;
    if(binForm < 0) {
        x = 1/x;
        binForm = -binForm;
    }
    double ans = 1;

    while(binForm > 0) {
        if(binForm % 2 == 1) {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}
int main() {
    double num = 3;
    int x = 5;

    int final = powFun(num, x);
    cout << final << endl;
    return 0;
}