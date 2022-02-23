#include <iostream>
#include <string.h>
using namespace std;

class AbstractEmp
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmp
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

    void AskForPromotion()
    {
        if (Age > 30)
            cout << Name << " Got Promoted!" << endl;
        else
            cout << Name << ",Sorry No Promotion for you!" << endl;
    }
};

class Developer : Employee
{
public:
    string FavProgLang;

    Developer(string namee, string companyy, int agee, string favProgLang)
        : Employee(namee, companyy, agee)
    {
        FavProgLang = favProgLang;
    }
    void FixBug()
    {
        cout << GetName() << " fixed bug using " << FavProgLang;
    }
};

int main()
{
    Developer D1 = Developer("Shamii", "StVincent", 30, "C++/Dsa");

    D1.FixBug();
    cout << endl;
    return 0;
}

