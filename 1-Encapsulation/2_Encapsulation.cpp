#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
private:
    string Name;
    string Company;
    int Age;

public:
    void SetName(string name)
    {
        Name = name;
    }
    void SetCompany(string company)
    {
        Company = company;
    }
    void SetAge(int age)
    {
        Age = age;
    }

    string GetName()
    {
        return Name;
    }
    string GetCompany()
    {
        return Company;
    }
    int GetAge()
    {
        return Age;
    }

    void IntroduceYourself()
    {
        cout << "Name: " << Name << endl;
        cout << "Comapny: " << Company << endl;
        cout << "Age: " << Age << endl;
    }

    Employee(string namee, string companyy, int agee)
    {
        Name = namee;
        Company = companyy;
        Age = agee;
    }
};

int main()
{
    Employee Pehla("Rahul", "Amazon", 23333);
    Employee Dusra("Rohit", "Microo", 27);

    Pehla.IntroduceYourself();
    Dusra.IntroduceYourself();

    // This can't be read as we have defined it in private & it is encapsulated
    // cout << Pehla.Age;

    Pehla.SetAge(999999);
    cout << Pehla.GetAge();
    cout << endl;
    return 0;
}


