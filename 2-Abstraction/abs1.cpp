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

int main()
{
    Employee Pehla("Rahul", "Amazon", 33);
    Employee Dusra("Rohit", "Microo", 27);

    Pehla.IntroduceYourself();
    Dusra.IntroduceYourself();

    Pehla.AskForPromotion();
    Dusra.AskForPromotion();

    cout << endl;
    return 0;
}

