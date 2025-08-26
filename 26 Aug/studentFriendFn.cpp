#include<iostream>
using namespace std;

class Sports;

class Academics {
    int marks;
public:
    void setMarks() {
        cout << "Enter academic marks: ";
        cin >> marks;
    }
    void showMarks() {
        cout << "Academic marks: " << marks << endl;
    }
    friend void updateDetails(Academics&, Sports&);
};

class Sports {
    int score;
public:
    void setScore() {
        cout << "Enter sports score: ";
        cin >> score;
    }
    void showScore() {
        cout << "Sports score: " << score << endl;
    }
    friend void updateDetails(Academics&, Sports&);
};

void updateDetails(Academics& a, Sports& s) {
    a.marks += 10;
    s.score += 5;
    cout << "After update:" << endl;
    cout << "Academic marks: " << a.marks << endl;
    cout << "Sports score: " << s.score << endl;
}

int main() {
    Academics a;
    Sports s;
    a.setMarks();
    s.setScore();
    a.showMarks();
    s.showScore();
    updateDetails(a, s);
    return 0;
}