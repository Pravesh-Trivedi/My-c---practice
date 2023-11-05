#include<iostream>
using namespace std;

class CWH{
    protected:
    string tittle;
    float rating;
    public:
    CWH(string s, float r){
        tittle = s;
        rating = r;
    }
    virtual void display(){}

};

class cwhvideo: public CWH{
    float videolength;
    public :
    cwhvideo(string s, float r, float vl) : CWH(s, r){
        videolength = vl;
    }
        void display(){
            cout<<"This is an amazing video with tittle "<<tittle<<endl;
            cout<<"Ratings "<<rating<<" out of 5 star "<<endl;
            cout<<"length of this video is "<<videolength<<" minutes "<<endl;
        }
    
};
class cwhText: public CWH{
    int words;
    public :
    cwhText(string s, float r, float wc ) : CWH(s, r){
         words = wc;
    }
    void display(){
        cout<<"This is an amazing text tutorial with tittle "<<tittle<<endl;
        cout<<"Ratings of this text tutorial "<<rating<<" out of 5 stars "<<endl;
        cout<<"No of word is "<<words<<endl;
    }
};



int main(){
    string tittle;
    float rating, vlen;
    int words;
    //for video
    tittle = "Pravesh trivedi ";
    vlen = 4.56;
    rating = 3.89;
    cwhvideo djvideo(tittle, rating, vlen);
    //djvideo.display();

    
    tittle = "Sonick ";
    words = 447;
    rating = 4.89;
    cwhText djtext(tittle, rating, words);
    //djtext.display();

    CWH* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();

    

    return 0;
}
/* Rules for virtual function
1.They cannot be static;
2.They are accessed by object pointers
3.Virtual function can be a friend of another class
4.A virtual function in base class might not be used
5.If a virtual function is define in a base class , there is no necessity of redefining it in the derived class
*/
