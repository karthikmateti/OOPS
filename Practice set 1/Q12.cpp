#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,discriminant,root1,root2,realPart,imagPart;
    cout<<"enter a,b,c:";
    cin>>a>>b>>c;
    discriminant=b*b-4*a*c;

    if(discriminant>0){
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        cout<<"Roots are real and unequal"<<endl;
        cout<<"root 1 = "<<root1<<" root 2 = "<<root2<<endl;
    }
    else if(discriminant==0){
        root1=-b/(2*a);
        cout<<"Roots are real and equal"<<endl;
        cout<<"root = "<<root1<<endl;
    }
    else{
        realPart=-b/(2*a);
        imagPart=sqrt(-discriminant)/(2*a);
        cout<<"Roots are complex and imaginary"<<endl;
        cout<<"root 1 = "<<realPart<<" + "<<imagPart<<"i"<<endl;
        cout<<"root 2 = "<<realPart<<" - "<<imagPart<<"i"<<endl;
    }
    return 0;
}
