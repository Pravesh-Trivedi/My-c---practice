#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};
// count is the static data member of class Employee
int Employee::count; // Default value is 0

int main()
{
    Employee harry, pravesh, lovish, sonick;
    harry.setData();
    harry.getData();
    Employee::getCount;

    pravesh.setData();
    pravesh.getData();
    Employee::getCount;

    lovish.setData();
    lovish.getData();
    Employee::getCount;

    return 0;
}