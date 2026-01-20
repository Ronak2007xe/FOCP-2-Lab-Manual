#include <iostream>
using namespace std;

int main() {
    float s1, s2, s3, s4, s5;
    
    cout << "Enter marks of 5 subjects: " << endl;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    float total = s1 + s2 + s3 + s4 + s5;
    float average = total / 5;

    cout << "Total Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;

    return 0;
}
