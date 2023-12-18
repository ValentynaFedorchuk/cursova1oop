
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
	cout << "������ �����, � ���� �� ������ ���������: " << endl
		 << "(0) ����� �� ��������" << endl
		 << "(1) ���������" << endl
		 << "(2) �������" << endl
		 << "(3) ����" << endl
		 << "(4) �������� � ������ ����������" << endl
		 << "��� ����: ";
	cin >> _stateMainMenu;
}
void ClerksMenu() {
	system("cls");
	cout << "������ ������, �� ���� �� ������ �������� ������ � �������� ����� ���������� ��������: " << endl
		 << "(0) ����������� �� ��������� ����" << endl
		 << "(1) ��������� ������" << endl
		 << "(2) ҳ���� ��������� ����� �������" << endl
		 << "(3) �� ������" << endl
		 << "(4) �� ������" << endl
		 << "(5) �� ����" << endl
		 << "(6) �� ������� ��������� �����" << endl
		 << "(7) ����������, �� �� ������ �� ������������ �� ����� ������� �� ���" << endl
		 << "(8) ���� ������ ���" << endl
		 << "(9) �������� ��� � ����" << endl
		 << "��� ����: ";
	cin >> _stateClerksMenu;
}
void AnimalsMenu() {
	system("cls");
	cout << "������ ������, �� ���� �� ������ �������� ������ � �������� ����� ������ ��������: " << endl
		 << "(0) ����������� �� ��������� ����" << endl
		 << "(1) ��������� ������" << endl
		 << "(2) ҳ���� �������, �� ���������� ������� ��������� �� ����" << endl
		 << "(3) ҳ���� �������, ���� ���������� ������� ��������" << endl
		 << "(4) ҳ���� �������, �� ���������� �������� ��������" << endl
		 << "(5) ҳ���� �������, ����� �� �������� �����" << endl
		 << "(6) ҳ���� �������, �� ������ � ������� �����" << endl
		 << "(7) ҳ���� �������, �� ���� ����� ��������� ���������" << endl
		 << "(8) ���� ������ ���" << endl
		 << "(9) �������� ��� � ����" << endl
		 << "��� ����: ";
	cin >> _stateAnimalsMenu;
}
void FoodMenu() {
	system("cls");
	cout << "������ ������, �� ���� �� ������ �������� ������ ����� �� �������������: " << endl
		 << "(0) ����������� �� ��������� ����" << endl
		 << "(1) ��������� ������" << endl
		 << "(2) ������������� ����� ��������� �����" << endl
		 << "(3) �����, �������� ���������" << endl
		 << "(4) ������ ������, ���� ���������� �������� ��� �����" << endl
		 << "(5) ���� ������ ���" << endl
		 << "(6) �������� ��� � ����" << endl
		 << "��� ����: ";
	cin >> _stateFoodMenu;
}
void ZooMenu() {
	system("cls");
	cout << "������ ������, �� ���� �� ������ �������� ��������: " << endl
		 << "(0) ����������� �� ��������� ����" << endl
		 << "(1) ��������� ������" << endl
		 << "(2) ���� ������ ���" << endl
		 << "(3) �������� ��� � ����" << endl
		 << "��� ����: ";
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
	
	
	cout << "³���� � ��� ����� ��������!" << endl;
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
						   cout << "��� �� �������!" << endl;
			   
						system("pause");
						system("cls");
						ClerksMenu();
						break;
					case 2:
						system("cls");
						if(_size != 0)
						   PrintOnlyJob(d, _size);
						else
						   cout << "��� �� �������!" << endl;
						system("pause");
						system("cls");
						ClerksMenu();
						break;
					case 3:
						system("cls");
						if(_size != 0)
						   PrintOnlyExperience(d, _size);
						else
						   cout << "��� �� �������!" << endl;
						system("pause");
						system("cls");
						ClerksMenu();
						break;
					case 4:
						system("cls");
						if(_size != 0)
						   PrintOnlySex(d, _size);
						else
						   cout << "��� �� �������!" << endl;
						system("pause");
						system("cls");
						ClerksMenu();
						break;
					case 5:
						system("cls");
						if(_size != 0)
						   PrintOnlyAge(d, _size);
						else
						   cout << "��� �� �������!" << endl;
						system("pause");
						system("cls");
						ClerksMenu();
						break;
					case 6:
						system("cls");
						if(_size != 0)
						   PrintOnlySalary(d, _size);
						else
						   cout << "��� �� �������!" << endl;
						system("pause");
						system("cls");
						ClerksMenu();
						break;
					case 7:
						system("cls");
						if(_size != 0)
						   PrintOnlyAccess(d, _size);
						else
						   cout << "��� �� �������!" << endl;
						system("pause");
						system("cls");
						ClerksMenu();
						break;
					case 8:
						system("cls");
						cout << "������ ��� ������(1) �� ������� �� �����(2)?";
						cin >> _actions;
			
						system("cls");
						if (_actions == 1) {
							DataEntry(d, _size);
						}
						else {
							/*cout << "������ ����� �����: ";
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
						cout << "������ ����� �����: ";
						cin >> fileName;
						SaveData(d, _size, fileName);
				*/
						SaveData(d, _size, "Out.txt");
		}
					else
					   cout << "��� �� �������!" << endl;
			   
					system("pause");
					system("cls");
					ClerksMenu();
					break;
			
						
				default:
						system("cls");
						cout << "����� ���� �������� �����������!" << endl;
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
						   cout << "��� �� �������!" << endl;
						system("pause");
						system("cls");
						AnimalsMenu();
						break;
					case 2:
						cout << "�������� ������ �� �������� �����(1) �� ����(2)?";
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
						   cout << "��� �� �������!" << endl;
						system("pause");
						system("cls");
						AnimalsMenu();
						break;
					case 4:
						system("cls");
						if(p_size != 0)
						   PrintOnlyDisease(p, p_size);
						else
						   cout << "��� �� �������!" << endl;
						system("pause");
						system("cls");
						AnimalsMenu();
						break;
					case 5:
						system("cls");
						if(p_size != 0)
						   PrintOnlyCompatiblePet(p, p_size);
						else
						   cout << "��� �� �������!" << endl;
						system("pause");
						system("cls");
						AnimalsMenu();
						break;
					case 6:
						system("cls");
						if(p_size != 0)
						   PrintOnlyCage(p, p_size);
						else
						   cout << "��� �� �������!" << endl;
						system("pause");
						system("cls");
						AnimalsMenu();
						break;
					case 7:
						system("cls");
						if(p_size != 0)
						   PetInfoPrintProgeny(p, p_size);
						else
						   cout << "��� �� �������!" << endl;
						system("pause");
						system("cls");
						AnimalsMenu();
						break;
					case 8:
						system("cls");
						//cout << "������ ��� ������(1) �� ������� �� �����(2)?";
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
						cout << "������ ����� �����: ";
						cin >> fileName;
						SaveData(d, _size, fileName);
				*/
						SavePetInfo(p, p_size, "Out_pet.txt");
		}
						else
						   cout << "��� �� �������!" << endl;
			   
						system("pause");
						system("cls");
						AnimalsMenu();
						break;
					
					default:
						system("cls");
						cout << "����� ���� �������� �����������!" << endl;
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
						   cout << "��� �� �������!" << endl;
			   
						system("pause");
						system("cls");
						FoodMenu();
						break;
					case 2:
						system("cls");
						if(f_size != 0)
						   PrintSelectedFood(f, f_size);
						else
						   cout << "��� �� �������!" << endl;
						system("pause");
						system("cls");
						FoodMenu();
						break;
					case 3:
						system("cls");
						if(f_size != 0)
						   PrintMadeByZoo(f, f_size);
						else
						   cout << "��� �� �������!" << endl;
						system("pause");
						system("cls");
						FoodMenu();
						break;
					case 4:
						system("cls");
						if(p_size != 0)
						   PrintOnlyFood(p, p_size);
						else
						   cout << "��� �� �������!" << endl;
						system("pause");
						system("cls");
						FoodMenu();
						break;
					case 5:
						system("cls");
						cout << "������ ��� ������(1) �� ������� �� �����(2)?";
						cin >> f_actions;
			
						system("cls");
						if (f_actions == 1) {
							FoodEntry(f, f_size);
						}
						else {
							/*cout << "������ ����� �����: ";
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
						cout << "����� ���� �������� �����������!" << endl;
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
						cout << "������ ��� ������(1) �� ������� �� �����(2)?";
						cin >> z_actions;
			
						system("cls");
						if (z_actions == 1) {
							//ZooEntry(z, z_size);
							ZooEntry(z, z_size);
						}
						else {
							/*cout << "������ ����� �����: ";
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
						   cout << "��� �� �������!" << endl;
			   
						system("pause");
						system("cls");
						ZooMenu();
						break;
					case 3:
						system("cls");
						if(z_size != 0)
						   PrintOnlyChangePet(z, z_size);
						else
						   cout << "��� �� �������!" << endl;
						system("pause");
						system("cls");
						ZooMenu();
						break;
					default:
						system("cls");
						cout << "����� ���� �������� �����������!" << endl;
						system("pause");
						ZooMenu();
		}}
			system("cls");
			MainMenu();
			break;
			
		default:
			cout << "����� ���� �������� �����������!" << endl;
			system("pause");
			system("cls");
			MainMenu();
			system("cls");
			
		}
	}
	system("cls");
	cout << "������ ���������!" << endl;
	system("pause");
	
return 0;
}

