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
    string Company;
    int Age;

protected:
    string Name;

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
    virtual void work()
    {
        cout << Name << " is checking email, task backlog, performing taskss......" << endl;
    }
};

class Developer : public Employee
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
    void work()
    {
        cout << Name << " is wriing code in " << FavProgLang << " language " << endl;
    }
};

class Teacher : public Employee
{
public:
    string Subject;
    void PrepareLesson()
    {
        cout << Name << " is preaparing " << Subject << " lesson.";
    }
    Teacher(string namee, string companyy, int agee, string subject)
        : Employee(namee, companyy, agee)
    {
        Subject = subject;
    }
    void work()
    {
        cout << Name << " is teaching " << Subject << endl;
    }
};

int main()
{
    Developer D1 = Developer("Anuj Sharma", "StVincent", 30, "C++/Dsa");
    Teacher T1 = Teacher("Girnar Goyal", "Cool School", 26, "Physics");

    Employee *e1 = &D1;
    Employee *e2 = &T1;

    e1->work();
    e2->work();

    cout << endl;
    return 0;
}
