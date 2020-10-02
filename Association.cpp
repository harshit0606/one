#include <bits/stdc++.h>
#include <string.h>
using namespace std;

class dept;
class Student;

class Student
{
    char *name;
    dept *d[10];
    int deptNum;

    public:
        Student(char *n)
        {
            deptNum = 0;
            name = new char[strlen(n)+1];
            strcpy(name, n);
        }

        void printStu();
        void printDept();
        void addDept(dept *dep);
};

class dept
{
    char *name;
    Student *stu[50];
    int stuNum;

    public:
        dept(char *n)
        {
            name = new char[strlen(n)+1];
            strcpy(name, n);
            stuNum = 0;
        }

        void addStu(Student *s);

        void printDep();

        void printStu();
};

void Student::printStu()
{
 cout<<"Student Name : "<<name<<endl;
}

void Student::printDept()
{
    for(int i=0;i<deptNum;i++)
    {
        d[i]->printDep();
    }
}

void Student::addDept(dept *dep)
{
    d[deptNum++] = dep;
}

void dept::addStu(Student *s)
{
    stu[stuNum++] = s;
}

void dept::printDep()
{
    cout<<"Department name : "<<name<<endl;
}

void dept::printStu()
{
    for(int i=0;i<stuNum;i++)
    {
        stu[i]->printStu();
    }
}

int main()
{
    dept *d1 = new dept("CSE");
    dept *d2 = new dept("ECE");
    dept *d3 = new dept("Biotech");

    Student *s1 = new Student("Chitransh");
    Student *s2 = new Student("Aditya");
    Student *s3 = new Student("Sanskar");
    Student *s4 = new Student("Saksham");
    Student *s5 = new Student("Harshit");

    //Adding dept to student        //Adding student to department
    s1->addDept(d1);                d1->addStu(s1);
    s1->addDept(d2);                d2->addStu(s1);
    s2->addDept(d3);                d3->addStu(s2);
    s2->addDept(d2);                d2->addStu(s2);
    s3->addDept(d1);                d1->addStu(s3);
    s4->addDept(d1);                d1->addStu(s4);
    s4->addDept(d3);                d3->addStu(s4);
    s5->addDept(d1);                d1->addStu(s5);
    s5->addDept(d2);                d2->addStu(s5);
    s5->addDept(d3);                d3->addStu(s5);

    d1->printDep();                 d1->printStu();
    d2->printDep();                 d2->printStu();
    d3->printDep();                 d3->printStu();

    s1->printStu();                 s1->printDept();
    s2->printStu();                 s2->printDept();
}
