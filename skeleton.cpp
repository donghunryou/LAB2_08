#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;


// Do not modify 
class Student {
public:
    string name;
    map<string, int> scores;

    Student() {}  // Default constructor

    Student(string name) : name(name) {}

    void addScore(string subject, int score) {
        scores[subject] = score;
    }
};


class School {
private:
    // Do not modify 
    map<string, Student> students;  // Key: Student ID, Value: Student object



public:
    void addStudent(string id, string name, map<string, int> subjects) {

        // TODO
        // if succeeded,    cout << "Added " << name << " with ID " << id << endl;
        // if duplicated,   cout << "Student with ID " << id << " already exists." << endl;



    }

    void updateScore(string id, string subject, int score) {

        // TODO
        // if succeeded,    cout << "Updated " << subject << " score for " << id << " to " << score << endl;
        // if not found,   cout << "Student with ID " << id << " not found." << endl;



    }

    void deleteStudent(string id) {

        // TODO
        // if succeeded,    cout << "Deleted student with ID " << id << endl;
        // if not found,   cout << "Student with ID " << id << " not found." << endl;



    }

    void printStudent(string id) {

        // TODO
        // if succeeded,    name, ID: ~~, Scores: subject1 score1, subject2 score2 ~~~
        // if not found,   cout << "Student with ID " << id << " not found." << endl;



    }

    void printAllStudents() {

        // TODO
        // cout << "- " << name << ", ID: " << id << endl;



    }
};

int main() {

    // Do not modify main function
    School mySchool;


    // sample 
    mySchool.addStudent("20230001", "student1", {{"Math", 95}, {"Science", 89}, {"English", 92}});
    mySchool.addStudent("20230002", "student2", {{"Math", 80}, {"Science", 100}, {"English", 90}});
   
    mySchool.printAllStudents();

    mySchool.updateScore("20230001", "Math", 98);
    mySchool.printStudent("20230001");

    mySchool.deleteStudent("20230002");
    mySchool.printAllStudents();

    return 0;
}