#include <bits/stdc++.h>
using namespace std;

int main() {

    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    string s2;
    // Read and save an integer, double, and String to your variables.
   
    cin >> i2;
    cin >> d2;
    cin.get();
    getline(cin, s2);
    // Print the sum of both integer variables on a new line.
    cout << i+i2 << endl;
    // Print the sum of the double variables on a new line. 
    printf("%.1lf\n", d+d2);   
    // cout<< std::fixed <<std::setprecision(1)<< d + d2 << endl;
    // Concatenate and print the String variables on a new line
    cout << s << s2;
    // The 's' variable above should be printed first.
}