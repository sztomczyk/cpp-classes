// student.h
#include <string>

using std::string;

class Student {
    public:
        Student(string name, string lastName, int subject, int mark);
        string name;
        string lastName;
        int subjects[5][0];
        void addMark(int subject, int mark);
        void show(int id);
        string mapper(int id);
};