#include<iostream>
using namespace std;

float calcBMIto(float weight, float height)
{
    float bmi;
    bmi=weight/(height*height);
    return bmi;
}

int displayFitnessResults(float weight, float height)
{
    //float weight=0;
    //float height=0;
    calcBMIto(weight,height);
    string letter=" ";
    if(calcBMIto(weight,height) < 8.5)
        letter= "Underweight";
    if(calcBMIto(weight,height) > 8.5 || calcBMIto(weight,height)<24.9)
        letter= "Healthy";
    if(calcBMIto(weight,height) > 25 || calcBMIto(weight,height)<29.9)
        letter= "Overweight";
    if(calcBMIto(weight,height) > 30)
        letter= "Obese";    

    cout<<"he is "<<letter<<endl;
    return 0;           

}


float getDatathat(float weight, float height)
{
    cout<<"Please enter your weight: ";
    cin>>weight;
    cout<<"Please enter your height: ";
    cin>>height;
    //return calcBMIto(weight, height);
    return displayFitnessResults(weight, height);
    
}

int main()
{
    float weight=0;
    float height=0;
    getDatathat(weight,height);

    return 0;
}