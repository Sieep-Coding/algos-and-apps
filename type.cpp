#include <iostream>
#include <typeinfo>

class Base
{
    virtual void dummy() {}
};

class Derived1 : public Base
{ /*...*/
};

class Derived2 : public Base
{ /*...*/
};

int main()
{
    Base *base_ptr = new Derived1;

    Derived1 *derived1_ptr = dynamic_cast<Derived1*>(base_ptr);
    if (derived1_ptr) {
        std::cout << "Downcast on Derived1 success\n";
    }
    else {
        std::cout << "Downcase on Derived1 failed\n";
    }
    Base *base_ptr2 = new Derived2;
    Derived2 *derived2_ptr = dynamic_cast<Derived2*>(base_ptr2);
    if (derived2_ptr) {
        std::cout << "Downcast on Derived2 success\n";
    }
    else {
        std::cout << "Downcase on Derived2 failed\n";
    }

    delete base_ptr, base_ptr2;
    return 0;
}