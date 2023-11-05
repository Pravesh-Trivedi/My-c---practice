#include<iostream>
using namespace std;

class student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void student :: set_roll_number(int r){
    roll_number = r;
}
void student :: get_roll_number (){
    cout<<" The roll number is "<<roll_number<<endl;
}
     

class Exam : public student{
    protected:
    float Maths;
    float Physics;
    public:
    void set_marks(float, float);
    void get_marks(void);

};

void Exam :: set_marks(float m1, float p1){
    Maths = m1;
    Physics = p1;
}

void Exam :: get_marks(){
     cout<<" The marks obtained in maths are "<<Maths<<endl;
     cout<<" The marks obtained in physics are "<<Physics<<endl;
}
class Result : public Exam{
    float percentage;
    public:
    void display_result(){
        get_roll_number();
        get_marks();
        cout<<" Your percentage is "<<(Maths+Physics)/2<<"%"<<endl;
    }
};
int main(){
    /*
    Notes
    1.If we are inheriting B form to A  and C form B : [ A-->B-->C ]
    2.A-->--B-->C is called Inheritance path*/
    Result pravesh;
    pravesh.set_roll_number(747);
    pravesh.set_marks(94.0, 90.0);
    pravesh.display_result();
    
    return 0;
}