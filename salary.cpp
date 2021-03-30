#include<iostream>
using namespace std;
int main(){
    double monthly_salary , how_many_month , expences ,total_salry ,saved_money ;
    cout<<"whai is your monthly slary :";
    cin>>monthly_salary;
    cout<<"how many month you have been doing job :";
    cin>>how_many_month;
    //getting his expences
    cout<<"what is your monthly expenses :";
    cin>>expences;
   
    total_salry = monthly_salary*how_many_month ;
   
    cout<<"your total salary is :"<<total_salry<<endl;
    saved_money = total_salry - expences;
    cout<<"your saved money "<<saved_money; 
    

}