#include<iostream>
using namespace std;
class sports; //forward declaration

class student{
private:
    int marks;
public:
    void setmarks(int m){
        marks=m;
    }
    //friend function
    friend void totalresult(student s,sports sp);
};

class sports{
private:
    int score;
public:
    void setscore(int s){
        score=s;
    }
    //friend fucntion
    friend void totalresult(student s,sports sp);
};

void totalresult(student s,sports sp){
    int total=s.marks+sp.score;
    cout<<"student marks:"<<s.marks<<endl;
    cout<<"sports score:"<<sp.score<<endl;
    cout<<"totalresult:"<<total<<endl;
}

int main(){
    student st;
    sports sp;
    st.setmarks(85);
    sp.setscore(15);
    totalresult(st,sp);
    return 0;
}

