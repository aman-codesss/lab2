//Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the structure and print out the values in the format 11/28/2004 by function. Pass the structure to the function
#include<iostream>
using namespace std;
struct date{
    int day,month,year;
};
void printDate(struct date d){
cout<<d.month<<"/"<<d.day<<"/"<<d.year<<endl;
}
int main(){
struct date d;
cout<<"Enter day: "<<endl;
cin>>d.day;
cout<<"Enter month: "<<endl;
cin>>d.month;
cout<<"Enter year: "<<endl;
cin>>d.year;
printDate(d);

}