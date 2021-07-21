
#include <iostream>
using std::string;

class AbstractEmployee
{ // this class is going to serve as a contract. whichever class signed this contract that class will need to provide
    //implementation for a method called askforpromotion. we make this function a pure virtual function. then how can my employee class will sign this Abstract class
    virtual void AskForPromotion() = 0;
};
class Employee : AbstractEmployee
{ // Like this my class has signed successfully the abstact contract, but this will give you error saying that hey you signed the contract but you are not providing the implementation for askforpromotion function
private:
    //doesnott represent the data, this class serve as a model for employee
    string Name;    // three types of access modifiers .public .private .protected
    string Company; //default is private//
    int Age;

public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    };
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    };
    void setAge(int age)
    {
        Age = age;
    }
    int getAge()
    {
        return Age;
    };

    void IntroduceYourself()
    {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    //now i have set the parameter , now i have to assign them with class properties
    void AskForPromotion()
    {
        //here we are going to provide implementation for that contract
        //like for validation for promotion , here the ckecking will happen
        // we dont have lots of info right now so we will work on age
        //
        if (Age > 30)
            std::cout << Name << " got Promoted " << std::endl;
        else
            std::cout << Name << " sorry no promotion for you " << std::endl;
    }

    // here you would get error that when we decided to make our own constructor at that time we lost our default constructor gennerated for us.
    //we can avoid this by giving constructor where the object of the class was created.
    //as argument we would pass our properties inside the constructor\.
};
int main()
{

    Employee employee1 = Employee("Saldina", "Youtube", 25); //so how do you access those members of emplyee class, you type the name ofthat object and putr a dot
    Employee employee2 = Employee("John", "Youtube", 35);
    employee1.AskForPromotion();
    employee2.AskForPromotion();

    // employee1.setAge(24);
    // std::cout << employee1.getName() << " is " << employee1.getAge() << " years old " << std::endl;
}

//now to make n number of employess we can follow this method
//so we have to use Constructors
//whenever an object of a class is created , a method is invoked which is known as constructor, a default constructor always comes in by compiler under the hoood
// there are some rules to create constructors:
// we said that a constructor is a method but unlike other constrctor doesnt have return type
//constructor should have same name of the class it belongs to. if the class name is employee then name of the constructor should be employee
//contructor must be a public;
//
//4 pillars of OOPs;
//1. encapsulation

//bundling or tying together data and method that operates on that data so that they are grouped together within a class
//we do this for purpose of preventing anyone or anything outside our class to be able to directly access our data and
//and to interact with it and to modify it , its not like that we always dont want that anyone can access our data
//i just want that other clas  shouldnt have to access directly
//through methods we can access encapsulted data and these methods are getters and setters.

//2. Abstractions

//abstractions means hiding complex things behind a procedure that
//makes those things look simple
// lets take the example of a smartphone camera , we click a button
//and it takes a photo but the complexity behind that is hidden from us .
// thats a abstractions.
