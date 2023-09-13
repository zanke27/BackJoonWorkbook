#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;    

int recurNum = 0;

int recursion(const char* s, int l, int r) {
    recurNum++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}

int main() {
    
    int i = 0, n = 0;
    char temp[1001];
    
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> temp; 
        cout << isPalindrome(temp) << " " << recurNum << endl;
        recurNum = 0;
    }
}