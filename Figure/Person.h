class Person
{
public:

    Person(int _age, int _name);
    ~Person();

    int getAge()
    {
        return age;
    }

    void setAge(int _age)
    {
        age = _age;
    }
    

private:
    int age;
    int name;

};


Person TW(1,1);

int aa = TW.setAge(5);