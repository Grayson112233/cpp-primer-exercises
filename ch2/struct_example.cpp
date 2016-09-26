// Program to demonstrate a struct object

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

struct student {
    string name;
    int grade;
    int age;
};

void print_student(struct student *s) {
    cout << "Student: \n    Name:  " << s->name << endl;
    cout << "    Grade: " << s->grade << endl;
    cout << "    Age:   " << s->age << endl;
}

int main() {

    struct student s1 = {"Grayson", 12, 18};
    print_student(&s1);

    return 0;
}