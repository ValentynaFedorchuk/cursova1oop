#include "data.h"

Food::Food()
{
	date.day = 0;
	date.month = 0;
	date.year = 0;
	fname = "";
	provider = ""; 
	amount = 0;
	price = 0;
}
Food::Food(string fname_, string provider_, int amount_, int price_, Date date_) 
{
	date.day = date_.day;
	date.month = date_.month;
	date.year = date_.year;
	fname = fname_;
	provider = provider_; 
	amount = amount_;
	price = price_;	
}
Food::~Food(){
}
void Food::FoodPrint()
{
	cout << "����� �����: " << fname << endl;
	cout << "������������: " << provider << endl;
	cout << "ʳ������: " << amount << endl;
	cout << "ֳ��: " << price << endl;
	cout << "���� ��������: " << date.day << "" << date.month << "" << date.year << endl;	
}
void Food::PrintSelectedFood(string selected_Food)
{
	string selectedFood;
	selectedFood=selected_Food;
	if (fname == selectedFood){
		cout << "������������: " << provider << endl;
	cout << "ʳ������: " << amount << endl;
	cout << "ֳ��: " << price << endl;
	cout << "���� ��������: " << date.day << "" << date.month << "" << date.year << endl;}
	else {
		cout << "�� �������� ������ �����!" << endl;
	}
}
void Food::PrintMadeByZoo()
{
	if (provider == "�������"){
	cout << "����� �����: " << fname << endl;
	cout << "ʳ������: " << amount << endl;
	cout << "ֳ��: " << price << endl;
	cout << "���� ��������: " << date.day << "" << date.month << "" << date.year << endl;}
	else {
		cout << "������� �� ������� ����!" << endl;
	}
}
void Food::FoodEntry(string fname_, string provider_, int amount_, int price_, Date date_)
{
	date.day = date_.day;
	date.month = date_.month;
	date.year = date_.year;
	fname = fname_;
	provider = provider_; 
	amount = amount_;
	price = price_;	
}
Food& Food::operator = (Food f_o)
{
	this->date.day = f_o.date.day;
	this->date.month = f_o.date.month;
	this->date.year = f_o.date.year;
	this->fname = f_o.fname;
	this->provider = f_o.provider; 
	this->amount = f_o.amount;
	this->price = f_o.price;	
}
