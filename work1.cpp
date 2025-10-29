#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    double chinese;
    double math;
    double english;
public:
    string getName() const { return name; }
    double getChinese() const { return chinese; }
    double getMath() const { return math; }
    double getEnglish() const { return english; }
    
    Student(string name, double chinese, double math, double english)
        : name(name), chinese(chinese), math(math), english(english) {}
    Student() {}
};

void show(Student* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        double average = (arr[i].getChinese() + arr[i].getMath() + arr[i].getEnglish()) / 3.0;
        cout << arr[i].getName() << fixed << setprecision(2)
             << " " << arr[i].getChinese()
             << " " << arr[i].getMath()
             << " " << arr[i].getEnglish()
             << " " << average;
        if (average >= 90)
            cout << " Excellent";
        cout << endl;
    }
}

int main()
{
    int n;
    double s1, s2, s3;
    string name;
    cin >> n;
    Student* students = new Student[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> name >> s1 >> s2 >> s3;
        students[i] = Student(name, s1, s2, s3);
    }

    show(students, n);
    delete[] students;
    return 0;
}