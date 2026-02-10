#include <iostream>
using namespace std;

class Game {
    int s1, s2, s3;

public:
    void getScores() {
        cout << "Enter score of Player 1: ";
        cin >> s1;
        cout << "Enter score of Player 2: ";
        cin >> s2;
        cout << "Enter score of Player 3: ";
        cin >> s3;
    }

    void findWinner() {
        if (s1 > s2 && s1 > s3)
            cout << "Player 1 is the winner";
        else if (s2 > s1 && s2 > s3)
            cout << "Player 2 is the winner";
        else if (s3 > s1 && s3 > s2)
            cout << "Player 3 is the winner";
        else
            cout << "Match is a tie";
    }
};

int main() {
    Game g;      // object creation
    g.getScores();
    g.findWinner();

    return 0;
}
