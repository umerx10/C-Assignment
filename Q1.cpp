#include<iostream>
using namespace std;
int main()
{
    int birth_year=2005,age,current_year=2023;
    float weight=60.0,bmi,height_in_meters=1.78;
    bool has_middle_name=false;
    age=current_year-birth_year;
    bmi=weight/(height_in_meters*height_in_meters);
    cout<<"Weight IN KG:"<<weight<<endl;
    cout<<"Birth year:"<<birth_year<<endl;
    cout<<"has middle name:"<<(has_middle_name? "yes":"no")<<endl;
    cout<<"my AGE is:"<<age<<endl;
    cout<<"my BMI is:"<<bmi;
    return 0;

}