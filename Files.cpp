#include<iostream>
#include<fstream>

/*
The useful classes for working with files in c++ are :
1.fstreambase
2.ifstream-->derived from fstreambase
3.ofstream-->derived from fstreambase*/

//in order work with file in c++ , you will have to open it ,
//primarly, there are 2 ways to open a  file
//1.Using the constructor
//2.Using the member function open{} of the class
using namespace std;

int main(){
    string st = "pravesh ";
    string st2;
    //opening file using constructor and writing it
    //ofstream out("sample.txt");//write operation 
    //out<<st;
    //opening file using constructor and reading
    ifstream in("sample.txt");//write operation 
   // in>>st2;
   getline(in, st2);
    cout<<st2;
    return 0;
}