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
	cout << "Назва корму: " << fname << endl;
	cout << "Постачальник: " << provider << endl;
	cout << "Кількість: " << amount << endl;
	cout << "Ціна: " << price << endl;
	cout << "Дата поставки: " << date.day << "" << date.month << "" << date.year << endl;	
}
void Food::PrintSelectedFood(string selected_Food)
{
	string selectedFood;
	selectedFood=selected_Food;
	if (fname == selectedFood){
		cout << "Постачальник: " << provider << endl;
	cout << "Кількість: " << amount << endl;
	cout << "Ціна: " << price << endl;
	cout << "Дата поставки: " << date.day << "" << date.month << "" << date.year << endl;}
	else {
		cout << "Не знайдено такого корму!" << endl;
	}
}
void Food::PrintMadeByZoo()
{
	if (provider == "Зоопарк"){
	cout << "Назва корму: " << fname << endl;
	cout << "Кількість: " << amount << endl;
	cout << "Ціна: " << price << endl;
	cout << "Дата поставки: " << date.day << "" << date.month << "" << date.year << endl;}
	else {
		cout << "Зоопарк не постачає корм!" << endl;
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
