#include<iostream>
#include<cmath>
using namespace std;

int tablesNeeded(int students);

int main()
{
    int students;
    cin>>students;

    cout<<tablesNeeded(students);

    return 0;
}

int tablesNeeded(int students)
{
    return ceil(students/4.0);
}
