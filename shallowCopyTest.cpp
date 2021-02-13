#include <iostream>
#include <string>
using namespace std;

class Student {
    int age;
    const char *className;

    public :
        Student(int age, char const *name){
            this -> age = age;
            this -> className = name; 
        }

        void display() {
            cout << className << " " << age << endl;
        }
};

int main() {
    char name[5] = "abce";
    Student s1 = Student(10, name);
    s1.display();

    // name[4] = "f"; #Giving Error
    Student s2 = Student(11, name);
    s2.display();

    s1.display();
}