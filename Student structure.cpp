//
//  main.cpp
//  Student structure
//
//  Created by CHRISTOPHER on 6/1/26.
//

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

// ============================================================================
// Part 1 — Define the Student Structure
// ============================================================================
struct Student {
    string name;
    string major;
    double gpa;

    // Member function to print a single student record exactly as requested
    void printStudent() const {
        // Set fixed precision to 2 decimal places for the GPA output
        cout << "Name: " << name
             << ", Major: " << major
             << ", GPA: " << fixed << setprecision(2) << gpa << endl;
    }
};

// ============================================================================
// Part 2 — Write the getRecord() Function
// ============================================================================
Student getRecord() {
    Student s;
    
    cout << "Enter student's name: ";
    getline(cin, s.name);
    
    cout << "Enter student's major: ";
    getline(cin, s.major);
    
    cout << "Enter student's GPA (0.0 – 4.0): ";
    cin >> s.gpa;
    
    // Clean up the input buffer newline character left behind by 'cin >>'
    // so the next 'getline' in a loop works properly.
    cin.ignore();
    
    cout << endl; // Formatting spacer
    return s;
}

// ============================================================================
// Part 4 — Write the showRoster() Function
// ============================================================================
void showRoster(const vector<Student>& roster) {
    cout << "CLASS ROSTER" << endl;
    for (const auto& student : roster) {
        student.printStudent();
    }
}

// ============================================================================
// Part 3 — Build the Input Loop in main()
// ============================================================================
int main() {
    vector<Student> roster;
    char choice;
    
    cout << "--- Begin Student Data Entry ---" << endl << endl;
    
    while (true) {
        // Collect student record and append to roster
        Student currentStudent = getRecord();
        roster.push_back(currentStudent);
        
        // Loop prompt for adding another student
        cout << "Add another student? (y/n): ";
        cin >> choice;
        cin.ignore(); // Clean newline from character reading
        cout << endl;
        
        if (choice != 'y' && choice != 'Y') {
            // Enforce a minimum of four students before allowing the user to stop
            if (roster.size() < 4) {
                cout << "Minimum 4 students required. Current count: "
                     << roster.size() << endl << endl;
            } else {
                break; // Break the loop safely if minimum requirements are met
            }
        }
    }
    
    // Display final aggregated records
    showRoster(roster);
    
    return 0;
}
