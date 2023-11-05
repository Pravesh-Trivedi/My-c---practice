#include<iostream>
#include<fstream>
#include<string>
using namespace std;



int main(){
    //ofstream out;
    //out.open("sample.txt");
    //out<<"This is me "<<endl;

    ifstream in;
    string st , st2;
    in.open("sample.txt");
    while (in.eof()==0)
    {
        getline(in, st);
        cout<<st<<endl;
    }
    

    //in>>st;
    //cout<<st;
    in.close();
    return 0;
}