#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    string name;
    string branch;
    float marks;
};

void input(Student *P, int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << ":\n";

        cout << "Roll No: ";
        cin >> P[i].rollNo;

        cout << "Name: ";
        cin >> P[i].name;
        
        cout << "Branch: ";
        cin >> P[i].branch;

        cout << "Marks: ";
        cin >> P[i].marks;
    }
}

void display(Student *P, int n) {
    cout << "\n--- Student Records ---\n";

    for (int i = 0; i < n; i++) {
        cout << "\nRoll No: " << P[i].rollNo;
        cout << "\nName: " << P[i].name;
        cout << "\nBranch: " << P[i].branch;
        cout << "\nMarks: " << P[i].marks << endl;
    }
}

int main() {
    Student students[50];
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    input(students, n);
    display(students, n);

    return 0;
}
