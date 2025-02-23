  /*6.  Write a program that displays the current monthly salary of chief executive officer, information officer,
        and system analyst, programmer that has been increased by 9, 10, 12, and 12 percentages respectively in year 2010.
        Let us assume that the salaries in year 2009 are
        Chief executive officer Rs. 35000/m
        Information officer Rs. 25000/m
        System analyst Rs. 24000/m
        Programmer Rs. 18000/m
        Make a function that takes two arguments; one salary and the other increment.
        Use proper default argument.
*/
#include<iostream>
using namespace std;
float currMonthlySalary(float sal = 10000,float inc = 5.0){
return sal+ inc/100*sal;
}
int main(){
float a = 35000,b=25000,c=24000,d=18000;
cout<<"CEO salary: "<<currMonthlySalary(a,9)<<endl;
cout<<"Info Officer salary: "<<currMonthlySalary(b,10)<<endl;
cout<<"Analyst salary: "<<currMonthlySalary(c,12)<<endl;
cout<<"Programmer salary: "<<currMonthlySalary(d,12)<<endl;
}