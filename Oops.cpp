
#include <iostream>
using std::string;
class Employee{ 
      
      public:     //doesnott represent the data, this class serve as a model for employee
        string Name;              // three types of access modifiers .public .private .protected
        string Company;           //default is private//
        int Age;
        void IntroduceYourself(){
            std::cout<<"Name - "<< Name <<std::endl;
            std::cout<<"Company - "<< Company <<std::endl;
            std::cout<<"Age - "<< Age <<std::endl;

        }
        Employee(string name,string company,int age)//now i have set the parameter , now i have to assign them with class properties
        
        {    
            Name=name;
            Company=company;
            Age=age;                                    
        }    // here you would get error that when we decided to make our own constructor at that time we lost our default constructor gennerated for us.
    //we can avoid this by giving constructor where the object of the class was created.
    //as argument we would pass our properties inside the constructor\.
};
int main(){

    Employee employee1=Employee("Saldina", "Youtube", 25);     //so how do you access those members of emplyee class, you type the name ofthat object and putr a dot 
  
    employee1.IntroduceYourself();     
    
    Employee employee2=Employee("John", "Youtube",35);
    employee2.IntroduceYourself();     

}



//now to make n number of employess we can follow this method
//so we have to use Constructors 
//whenever an object of a class is created , a method is invoked which is known as constructor, a default constructor always comes in by compiler under the hoood
// there are some rules to create constructors:
// we said that a constructor is a method but unlike other constrctor doesnt have return type
//constructor should have same name of the class it belongs to. if the class name is employee then name of the constructor should be employee
//contructor must be a public;
//