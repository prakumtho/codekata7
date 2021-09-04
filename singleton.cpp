
#include <iostream>

class singleton
{
    public:
        static singleton* instance();
    private:
        singleton();
        static singleton* _instance;
};

singleton* singleton::_instance = nullptr;

singleton::singleton()
{

}
singleton* singleton::instance()
{
    if(_instance == nullptr)
    {
        _instance = new singleton();
    }

    return _instance;
}

int main()
{
    singleton* obj1 = singleton::instance();
    singleton* obj2 = singleton::instance();

    if(obj1 == obj2)
    {
        std::cout << "singleton object created sucessfully" << std::endl;
    }
    else
    {
        std::cout << "singleton object creation failed";
    }

}