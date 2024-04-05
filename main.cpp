// Each task is written by a function
// In the main function I have only calls (commented out).
// In numerical order.
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


// 1 task
int Min(int n){
    int minVal = INT_MAX;
    for (int i = 0; i < n; i++){
        int k;
        cin >> k;

        if (k < minVal) {
            minVal = k;
        }
    }
    return minVal;
}

// 2 task

double Average(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        sum += k;
    }
    return (sum) / n;
}

// 3 task

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;

    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

// 4 task


int Fact(int n) {
    if (n == 0) return 1;
    else return n * Fact(n - 1);
}


// 5 task


int Fibona(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return Fibona(n - 1) + Fibona(n - 2);
}

// 6 task

int Radical(int n, int k) {
    return pow(n, k);
}

// 7 task

void generate(string symbols, string current_permutation = "") {
    if (symbols.empty()) {
        cout << current_permutation << endl;
        return;
    }

    for (int i = 0; i < symbols.size(); ++i) {
        string next_permutation = current_permutation + symbols[i];
        string remaining_symbols = symbols.substr(0, i) + symbols.substr(i + 1);
        generate(remaining_symbols, next_permutation);
    }
}

// 8 task

string checkDigits(const string& s) {
    for (char c : s) {
        if (!isdigit(c)) {
            return "no";
        }
    }
    return "yes";
}

// 9 task

int binomialCoefficient(int k, int n) {
    if (k == 0 || k == n)
        return 1;
    else
        return binomialCoefficient(k - 1, n - 1) + binomialCoefficient(k, n - 1);
}


// 10 task

int gcd(int a, int b){
    if (b == 0) return a;
    else  return gcd(b, a % b);
}

int main(){
    int n;
    cin >> n;
    int minVal = Min(n);
    cout << "Minimum value: " << minVal;


    //int n;
    //cin >> n;
    //double avg = Average(n);
    //cout << "Average: " << avg;



    //int n;
    //cin >> n;
    //if (isPrime(n)) {
      // cout << n << " is a prime number." << endl;
    //} else {
        // cout << n << " is not a prime number.";}



    //int n;
    //cin >> n;
    //int factorial = Fact(n);
    //cout << n;



    //int n;
    //cin >> n;
    //cout <<  Fibona(n);



    //int n;
    //cin >> n;
    //int k;
    //cin >> k;
    //cout << Radical(n,k);


    //string symbols;
    //cin >> symbols;
    // generate(symbols);


    //string input;
    //cin >> input;
    //cout << checkDigits(input);


    //int n, k;
    //cin >> n;
    //cin >> k;
    //int result = binomialCoefficient(k, n);
    //cout << result;

    //int a, b;
    //cin >> a;
    //cin >> b;
    //int result = gcd(a, b);
    //cout << result;

    return 0;
}
