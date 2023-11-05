#include<iostream>
using namespace std;

/*INHERITANCE::
student-->test 
student-->sports
test-->result
sports-->result
*/

class Student{
    protected:
        int roll_no;
    public:
    void set_number(int a){
        roll_no = a;
    }
    void print_number(){
        cout<<"Your roll number is "<<roll_no<<endl;
    }
};

class Test : virtual public Student{
    protected:
    float maths, physics;
    public:
    void set_marks(float m1, float m2){
        maths = m1;
        physics = m2;
    }
    void print_marks(){
        cout<<"You result here: "<<endl
        <<"Maths: "<<maths<<endl
        <<"Physics: "<<physics<<endl;
    }


};

class Sprts: virtual public Student{
    protected:
    float score;
    public: 
    void set_score(float sc){
        score = sc;
    }
    void print_score(){
        cout<<"Your score is "<<score<<endl;
    }

    
};

class Result: public Test, public Sprts{
    private :
    float total;
    public:
     void display(){
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout<<"Your total score is: "<<total<<endl;
}

};

int main(){
    Result Pravesh;
    Pravesh.set_number(1089);
    Pravesh.set_marks(99.99, 78.89);
    Pravesh.set_score(9);
    Pravesh.display();
    
    return 0;
}