#include <bits/stdc++.h>

using namespace std;

int main() {
    int l;
    cout << "Enter the length of the password: ";
    cin >> l;
    if (l <= 0) {
        cerr << "Invalid length.Please enter a positive integer." << endl;
        return 1;
    }
    const string word = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+";
    string password;
    srand(time(0));
    for (int i = 0; i <= l - 1; i++) {
        int j = rand() % word.length();
        password += word[j];
    }
    cout << "The Generated Password: " << password << endl;
    return 0;
}