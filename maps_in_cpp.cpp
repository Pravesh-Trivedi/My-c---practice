#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string, int>markMap;
    markMap["Harry"] = 78;
    markMap["Jack"] = 78;
    markMap["Rohan"] = 8;

    map<string, int> ::iterator iter;
    for (iter = markMap.begin(); iter!= markMap.end() ; iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
         
    

    return 0;
}