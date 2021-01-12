#include <iostream>
#include <string>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;
using std::cerr;
using std::string;
using std::setw;
using std::setprecision;
using std::fixed;

// void Horrible(int data[][3], size_t size);

int main(int argc, char* argv[]){
    const int MAX_STUDENTS = 3;
    const int MAX_COURSES = 2;
    string students[MAX_STUDENTS];
    string courses[MAX_COURSES];
    size_t grades[MAX_STUDENTS][MAX_COURSES];

    cout << "Input the Students: " << endl;
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        cout << "Student " << i + 1 << ": ";
        cin >> students[i];
    }
    cout << "Input the Courses: " << endl;
    for (int i = 0; i < MAX_COURSES; ++i) {
        cout << "Course " << i + 1 << ": ";
        cin >> courses[i];
    }

    for (int student = 0; student < MAX_STUDENTS; ++student) {
        cout << "Grades for " << students[student] << endl;
        for (int course = 0; course < MAX_COURSES; ++course) {
            cout << "\t" << courses[course] << ": ";
            cin >> grades[student][course];

        }

    }

    int TotalOfCourse1 = 0;
    int TotalOfCourse2 = 0;
    int SumOfAvg = 0;


    int TotalOfStudent;
    cout<<setw(14) <<courses[0]<<setw(12)<<courses[1]<<setw(12)<<"AVG"<<endl;
    for(int student = 0; student < MAX_STUDENTS; ++student){
        TotalOfCourse1 += grades[student][0];
        TotalOfCourse2 += grades[student][1];
        TotalOfStudent  = grades[student][0]+grades[student][1];
        cout<<students[student]<<setw(6)<<grades[student][0]<<setw(12)<<grades[student][1]<<setw(12)<<(TotalOfStudent)/MAX_COURSES<<endl;
        SumOfAvg += (TotalOfStudent)/MAX_COURSES;

    }
    int OverAllAvg = SumOfAvg/MAX_STUDENTS;
    cout<<"Avg"<<setw(6)<<(TotalOfCourse1)/MAX_STUDENTS<<setw(12)<<(TotalOfCourse2)/MAX_STUDENTS<<setw(12)<<OverAllAvg<<endl;


    

    return 0;
}

