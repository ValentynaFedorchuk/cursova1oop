
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*#include <iostream>
#include <string> 
#include <fstream> 
#include <Windows.h>*/
#include "functions.h"
using namespace std;


int _stateMainMenu;
int _stateClerksMenu;
int _stateAnimalsMenu;
int _stateFoodMenu;
int _stateZooMenu;
void MainMenu() {
	system("cls");
	cout << "Оберіть розділ, з яким ви бажаєте працювати: " << endl
		 << "(0) Вихід із програми" << endl
		 << "(1) Службовці" << endl
		 << "(2) Тварини" << endl
		 << "(3) Корм" << endl
		 << "(4) Співпраця з іншими зоопарками" << endl
		 << "Ваш вибір: ";
	cin >> _stateMainMenu;
}
void ClerksMenu() {
	system("cls");
	cout << "Оберіть ознаку, за якою ви хочете отримати список і загальне число службовців зоопарку: " << endl
		 << "(0) Повернутись до головного меню" << endl
		 << "(1) Загальний список" << endl
		 << "(2) Тільки службовці певної категорії" << endl
		 << "(3) За стажем" << endl
		 << "(4) За статтю" << endl
		 << "(5) За віком" << endl
		 << "(6) За розміром заробітньої плати" << endl
		 << "(7) Службовець, що має доступ чи відповідальний за певну тварину чи вид" << endl
		 << "(8) Хочу ввести дані" << endl
		 << "(9) Зберегти дані у файл" << endl
		 << "Ваш вибір: ";
	cin >> _stateClerksMenu;
}
void AnimalsMenu() {
	system("cls");
	cout << "Оберіть ознаку, за якою ви хочете отримати список і загальне число тварин зоопарку: " << endl
		 << "(0) Повернутись до головного меню" << endl
		 << "(1) Загальний список" << endl
		 << "(2) Тільки тварини, що потребують теплого приміщення на зиму" << endl
		 << "(3) Тільки тварини, яким поставлено вказане щеплення" << endl
		 << "(4) Тільки тварини, які перехворіли вказаною хворобою" << endl
		 << "(5) Тільки тварини, сумісні із вказаним видом" << endl
		 << "(6) Тільки тварини, що живуть у вказаній клітці" << endl
		 << "(7) Тільки тварини, від яких можна очікувати потомство" << endl
		 << "(8) Хочу ввести дані" << endl
		 << "(9) Зберегти дані у файл" << endl
		 << "Ваш вибір: ";
	cin >> _stateAnimalsMenu;
}
void FoodMenu() {
	system("cls");
	cout << "Оберіть ознаку, за якою ви хочете отримати список кормів чи постачальників: " << endl
		 << "(0) Повернутись до головного меню" << endl
		 << "(1) Загальний список" << endl
		 << "(2) Постачальники тільки вказаного корму" << endl
		 << "(3) Корми, вироблені зоопарком" << endl
		 << "(4) Перелік тварин, яким необхідний вибраний тип кормів" << endl
		 << "(5) Хочу ввести дані" << endl
		 << "(6) Зберегти дані у файл" << endl
		 << "Ваш вибір: ";
	cin >> _stateFoodMenu;
}
void ZooMenu() {
	system("cls");
	cout << "Оберіть ознаку, за якою ви хочете отримати зоопарки: " << endl
		 << "(0) Повернутись до головного меню" << endl
		 << "(1) Загальний список" << endl
		 << "(2) Хочу ввести дані" << endl
		 << "(3) Зберегти дані у файл" << endl
		 << "Ваш вибір: ";
	cin >> _stateZooMenu;
}

int main(int argc, char **argv) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int _actions, f_actions, z_actions;
	int p_actions, pc_actions;
	string fileName, fileName_pet, fileName_food;
	int _size = 0;
	int p_size = 0;
	int f_size = 0;
	int z_size = 0;
	Data* d = new Data[_size];
	PetInfo* p = new PetInfo[p_size];
	Food* f = new Food[f_size];
	Zoo* z = new Zoo[z_size];
	
	
	cout << "Вітаємо в базі даних зоопарку!" << endl;
	system("pause");
	system("cls");
	MainMenu();
	
	
	while (_stateMainMenu != 0)
	{
		switch (_stateMainMenu)
		{
		case 1:
			system("cls");
			ClerksMenu();
				while (_stateClerksMenu != 0)
				{
					switch (_stateClerksMenu)
					{
					case 1:
						system("cls");
						if(_size != 0)
						   Print(d, _size);
						else
						   cout << "Дані не існують!" << endl;
			   
						system("pause");
						system("cls");
						ClerksMenu();
						break;
					case 2:
						system("cls");
						if(_size != 0)
						   PrintOnlyJob(d, _size);
						else
						   cout << "Дані не існують!" << endl;
						system("pause");
						system("cls");
						ClerksMenu();
						break;
					case 3:
						system("cls");
						if(_size != 0)
						   PrintOnlyExperience(d, _size);
						else
						   cout << "Дані не існують!" << endl;
						system("pause");
						system("cls");
						ClerksMenu();
						break;
					case 4:
						system("cls");
						if(_size != 0)
						   PrintOnlySex(d, _size);
						else
						   cout << "Дані не існують!" << endl;
						system("pause");
						system("cls");
						ClerksMenu();
						break;
					case 5:
						system("cls");
						if(_size != 0)
						   PrintOnlyAge(d, _size);
						else
						   cout << "Дані не існують!" << endl;
						system("pause");
						system("cls");
						ClerksMenu();
						break;
					case 6:
						system("cls");
						if(_size != 0)
						   PrintOnlySalary(d, _size);
						else
						   cout << "Дані не існують!" << endl;
						system("pause");
						system("cls");
						ClerksMenu();
						break;
					case 7:
						system("cls");
						if(_size != 0)
						   PrintOnlyAccess(d, _size);
						else
						   cout << "Дані не існують!" << endl;
						system("pause");
						system("cls");
						ClerksMenu();
						break;
					case 8:
						system("cls");
						cout << "Ввести дані вручну(1) чи зчитати із файлу(2)?";
						cin >> _actions;
			
						system("cls");
						if (_actions == 1) {
							DataEntry(d, _size);
						}
						else {
							/*cout << "Введіть назву файлу: ";
							cin >> fileName;
							DataReading(d, _size, fileName);
							*/
				
							DataReading(d, _size, "Out.txt");
						}
						system("pause");
						system("cls");
						ClerksMenu();
						break;
					case 9:
					system("cls");
			
					if(_size != 0) {
					/*
						cout << "Введіть назву файлу: ";
						cin >> fileName;
						SaveData(d, _size, fileName);
				*/
						SaveData(d, _size, "Out.txt");
		}
					else
					   cout << "Дані не існують!" << endl;
			   
					system("pause");
					system("cls");
					ClerksMenu();
					break;
			
						
				default:
						system("cls");
						cout << "Пункт меню введений неправильно!" << endl;
						system("pause");
						ClerksMenu();
					}}
				system("cls");
				MainMenu();
				break;
		
		case 2:
			system("cls");
			AnimalsMenu();
				while (_stateAnimalsMenu != 0)
				{
					switch (_stateAnimalsMenu)
					{
					case 1:
						system("cls");
						if(p_size != 0)
						   PetInfoPrint(p, p_size);
						else
						   cout << "Дані не існують!" << endl;
						system("pause");
						system("cls");
						AnimalsMenu();
						break;
					case 2:
						cout << "Отримати список за вказаним видом(1) чи віком(2)?";
						cin >> pc_actions;
			
						system("cls");
						if (pc_actions == 1) {
							PrintOnlyClimateSpecies(p, p_size);
						}
						else{
							PrintOnlyClimateAge(p, p_size);
						}
						system("pause");
						system("cls");
						AnimalsMenu();
						break;
					case 3:
						system("cls");
						if(p_size != 0)
						   PrintOnlyVaccination(p, p_size);
						else
						   cout << "Дані не існують!" << endl;
						system("pause");
						system("cls");
						AnimalsMenu();
						break;
					case 4:
						system("cls");
						if(p_size != 0)
						   PrintOnlyDisease(p, p_size);
						else
						   cout << "Дані не існують!" << endl;
						system("pause");
						system("cls");
						AnimalsMenu();
						break;
					case 5:
						system("cls");
						if(p_size != 0)
						   PrintOnlyCompatiblePet(p, p_size);
						else
						   cout << "Дані не існують!" << endl;
						system("pause");
						system("cls");
						AnimalsMenu();
						break;
					case 6:
						system("cls");
						if(p_size != 0)
						   PrintOnlyCage(p, p_size);
						else
						   cout << "Дані не існують!" << endl;
						system("pause");
						system("cls");
						AnimalsMenu();
						break;
					case 7:
						system("cls");
						if(p_size != 0)
						   PetInfoPrintProgeny(p, p_size);
						else
						   cout << "Дані не існують!" << endl;
						system("pause");
						system("cls");
						AnimalsMenu();
						break;
					case 8:
						system("cls");
						//cout << "Ввести дані вручну(1) чи зчитати із файлу(2)?";
						//cin >> p_actions;
			
						//system("cls");
						//if (_actions == 1) {
							PetInfoEntry(p, p_size);
						
						
						system("pause");
						system("cls");
						AnimalsMenu();
						break;
					case 9:
						system("cls");
						if(p_size != 0) {
					/*
						cout << "Введіть назву файлу: ";
						cin >> fileName;
						SaveData(d, _size, fileName);
				*/
						SavePetInfo(p, p_size, "Out_pet.txt");
		}
						else
						   cout << "Дані не існують!" << endl;
			   
						system("pause");
						system("cls");
						AnimalsMenu();
						break;
					
					default:
						system("cls");
						cout << "Пункт меню введений неправильно!" << endl;
						system("pause");
						AnimalsMenu();
					}
					}
			system("cls");
			MainMenu();
			break;
		case 3:
			system("cls");
			FoodMenu();
				while (_stateFoodMenu != 0)
				{
					switch (_stateFoodMenu)
					{
					case 1:
						system("cls");
						if(f_size != 0)
						   FoodPrint(f, f_size);
						else
						   cout << "Дані не існують!" << endl;
			   
						system("pause");
						system("cls");
						FoodMenu();
						break;
					case 2:
						system("cls");
						if(f_size != 0)
						   PrintSelectedFood(f, f_size);
						else
						   cout << "Дані не існують!" << endl;
						system("pause");
						system("cls");
						FoodMenu();
						break;
					case 3:
						system("cls");
						if(f_size != 0)
						   PrintMadeByZoo(f, f_size);
						else
						   cout << "Дані не існують!" << endl;
						system("pause");
						system("cls");
						FoodMenu();
						break;
					case 4:
						system("cls");
						if(p_size != 0)
						   PrintOnlyFood(p, p_size);
						else
						   cout << "Дані не існують!" << endl;
						system("pause");
						system("cls");
						FoodMenu();
						break;
					case 5:
						system("cls");
						cout << "Ввести дані вручну(1) чи зчитати із файлу(2)?";
						cin >> f_actions;
			
						system("cls");
						if (f_actions == 1) {
							FoodEntry(f, f_size);
						}
						else {
							/*cout << "Введіть назву файлу: ";
							cin >> fileName;
							DataReading(d, _size, fileName);
							*/
				
							FoodReading(f, f_size, "Out_Food.txt");
						}
						system("pause");
						system("cls");
						FoodMenu();
						break;
					case 6:
						system("cls");
						MainMenu();
						break;
					default:
						system("cls");
						cout << "Пункт меню введений неправильно!" << endl;
						system("pause");
						FoodMenu();
				}
				}
			system("cls");
			MainMenu();
			break;
		case 4:
			system("cls");
			ZooMenu();
				while (_stateZooMenu != 0)
				{
					switch (_stateZooMenu)
					{
					case 1:
						system("cls");
						cout << "Ввести дані вручну(1) чи зчитати із файлу(2)?";
						cin >> z_actions;
			
						system("cls");
						if (z_actions == 1) {
							//ZooEntry(z, z_size);
							ZooEntry(z, z_size);
						}
						else {
							/*cout << "Введіть назву файлу: ";
							cin >> fileName;
							DataReading(d, _size, fileName);
							*/
							cout << "......";
							//FoodReading(f, f_size, "Out_Food.txt");
						}
						system("pause");
						system("cls");
						ZooMenu();
						break;
					case 2:
						system("cls");
						if(z_size != 0)
						   ZooPrint(z, z_size);
						else
						   cout << "Дані не існують!" << endl;
			   
						system("pause");
						system("cls");
						ZooMenu();
						break;
					case 3:
						system("cls");
						if(z_size != 0)
						   PrintOnlyChangePet(z, z_size);
						else
						   cout << "Дані не існують!" << endl;
						system("pause");
						system("cls");
						ZooMenu();
						break;
					default:
						system("cls");
						cout << "Пункт меню введений неправильно!" << endl;
						system("pause");
						ZooMenu();
		}}
			system("cls");
			MainMenu();
			break;
			
		default:
			cout << "Пункт меню введений неправильно!" << endl;
			system("pause");
			system("cls");
			MainMenu();
			system("cls");
			
		}
	}
	system("cls");
	cout << "Роботу завершено!" << endl;
	system("pause");
	
return 0;
}

