class Student{
    public:
        int age;
        const int rollNumber = 100;
        int &x = this->age; //age reference variable.

        Student(int r, int age):rollNumber(r), age (age){
          //  rollNumber = r;
        }
};