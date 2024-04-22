#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int idn;
    string name;
    double mark;
    bool repeater;
};

void information(const vector<Student>& stu, double& min, double& max, double& avg)
{
    min = 10;
    max = -1;
    double suma = 0;
    int numero = 0;
    int n = stu.size();

    for (int i = 0; i < n; ++i) {
        if (not stu[i].repeater) {
            if (stu[i].mark < min) {
                min = stu[i].mark;
            }
            if (stu[i].mark > max) {
                max = stu[i].mark;
            }
            suma += stu[i].mark;
            ++numero;
        }
    }

    avg = suma / numero;

    if (numero == 0) {
        avg = -1;
        max = -1;
        min = -1;
    }
}

int main()
{
    vector<Student> stu = {
        { 1, "gerard", -1, false },
        { 2, "olivia", 0, false },
        { 3, "airen", 10, true },
    };
    double min;
    double max;
    double avg;
    information(stu, min, max, avg);
    cout << avg << " " << max << " " << min << endl;
}
