#include<iostream>
using namespace std;
int main(){
    double monthly_salary , how_many_month , expences ,total_salry ,saved_money ;
    cout<<"What is your monthly salary: ";
    cin>>monthly_salary;
    cout<<"How many months have you been doing your job: ";
    cin>>how_many_month;
    //getting his expences
    cout<<"What are your monthly expenses: ";
    cin>>expences;
   
    total_salry = monthly_salary*how_many_month ;
   
    cout<<"Your total salary is: "<<total_salry<<endl;
    saved_money = total_salry - expences;
    cout<<"Your saved money: "<<saved_money;
}
