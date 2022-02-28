class Student {
    private:
    static int totalStudents; //total students present. We use the static property to solve the problem. Static properties are 
                             //initialized outside the class

    public:

    int rollNumber;
    int age;
   
    Student(){
        totalStudents++;
    }

    int getRollNumber(){
        return rollNumber;
    }

    static int getTotalStudents(){
        return totalStudents;
    }
};

int Student::totalStudents = 0; //This is how you inititalize the static data member.
                                //Has to be initialized outside the class.

                                //static functions dont have this keyword.