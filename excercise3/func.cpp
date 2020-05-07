// func.cpp
#include "student.h"
#include <iostream>
#include <string>

using namespace std;

Student::Student(string name, string lastname, int subject, int mark) {
    this->name = name;
    this->lastName = lastname;
    this->addMark(subject, mark);
}

void Student::addMark(int subject, int mark) {
    subjects[subject][0] = mark;
}

void Student::show(int id) {
    cout << "Name: " << name << "\n";
    cout << "Last name: " << lastName << "\n";
    cout << "Marks:" << "\n";

    cout << mapper(id) << ": " << subjects[id][0] << "\n";

}

string Student::mapper(int id) {
    string subjects[] = {
        "Math",
        "Art",
        "Music",
        "History",
        "Science"
    };

    return subjects[id];
}