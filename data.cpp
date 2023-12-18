#include "data.h"

Data::Data()
{
	initials.surname = "";
	initials.name = "";
	initials.patrinymic = "";
	
	years.age = 0;
	years.experience = 0;
	
	sex.sex_val = "";
	
	money.salary = 0;
	
	job.ajob = "";	
	
	
}

Data::Data(Initials initials_, Years years_, Sex sex_, Money money_, Job job_)

{
	initials.surname = initials_.surname;
	initials.name = initials_.name;
	initials.patrinymic = initials_.patrinymic;
	years.age = years_.age;
	years.experience = years_.experience;
	sex.sex_val = sex_.sex_val;
	money.salary = money_.salary;
	job.ajob = job_.ajob;
	job.access = job_.access;

}

Data::~Data()
{
}

void Data::Print()
{
	cout << "ϲ�: " << initials.surname << " " << initials.name << " " << initials.patrinymic << endl;
	cout << "³� -- ���� ������: " << years.age << " -- " << years.experience << endl;
	cout << "�����: " << sex.sex_val << endl;
	cout << "�������� �����: " << money.salary << endl;
	cout << "�������: " << job.ajob << endl;

}

void Data::PrintOnlyExperience()
{
	cout << "ϲ�: " << initials.surname << " " << initials.name << " " << initials.patrinymic << endl;
	cout << "���� ������: " << years.experience << endl;
}

void Data::PrintOnlySex()
{
	cout << "ϲ�: " << initials.surname << " " << initials.name << " " << initials.patrinymic << endl;
	cout << "�����: " << sex.sex_val << endl;
}

void Data::PrintOnlyAge()
{
	cout << "ϲ�: " << initials.surname << " " << initials.name << " " << initials.patrinymic << endl;
	cout << "³�: " << years.age << endl;
}
void Data::PrintOnlySalary()
{
	cout << "ϲ�: " << initials.surname << " " << initials.name << " " << initials.patrinymic << endl;
	cout << "�������� �����: " << money.salary << endl;
}
void Data::PrintOnlyJob(string selected_Job)
{
	string selectedJob;
	selectedJob=selected_Job;

	if (job.ajob == selectedJob){
	cout << "ϲ�: " << initials.surname << " " << initials.name << " " << initials.patrinymic << endl;
	cout << "³� -- ���� ������: " << years.age << " -- " << years.experience << endl;
	cout << "�����: " << sex.sex_val << endl;
	cout << "�������� �����: " << money.salary << endl;
	cout << "�������: " << job.ajob << endl;}
	else {
		cout << "�� �������� ���� ������!" << endl;
	}
}
void Data::PrintOnlyAccess(string selected_Pet)
{
	string selectedPet;
	selectedPet=selected_Pet;
	
	if (job.access == 1){
	cout << "ϲ�: " << initials.surname << " " << initials.name << " " << initials.patrinymic << endl;
	}
	else {
		cout << "�� �������� ������ ����������!" << endl;
	}
}
void Data::DataEntry(Initials initials_, Years years_, Sex sex_, Money money_, Job job_)/*, Date date_, Address addres_)*/
{
	initials.surname = initials_.surname;
	initials.name = initials_.name;
	initials.patrinymic = initials_.patrinymic;
	
	years.age = years_.age;
	years.experience = years_.experience;
	sex.sex_val = sex_.sex_val;
	money.salary = money_.salary;
	job.ajob = job_.ajob;
	job.access = job_.access;
	
}

void Data::JobsEntry(Job job_)
{
	int _stateJob;
	cout << "������� ������� ��������: " << endl
		 << "(1) ���������" << endl
		 << "(2) ������������" << endl
		 << "(3) ��������������" << endl
		 << "(4) ����������-��������������" << endl
		 << "(5) ��������� �����������" << endl
		 << "��� ����: ";
		cin >> _stateJob;
		switch (_stateJob){
		case 1:
			job_.ajob = "���������";
			break;
		case 2:
			job_.ajob = "������������";
			break;
		case 3:
			job_.ajob = "��������������";
			break;
		case 4:
			job_.ajob = "����������-��������������";
			break;
		case 5:
			job_.ajob = "��������� �����������";
			break;
		default:
			system("cls");
			cout << "����� ���� �������� �����������!" << endl;
			system("pause");
			//ClerksMenu();
}
cout << "������ ������� �������: " << job_.ajob << endl;
job.ajob = job_.ajob;
}

Data& Data::operator=(Data d_o)
{
	this->initials.surname = d_o.initials.surname;
	this->initials.name = d_o.initials.name;
	this->initials.patrinymic = d_o.initials.patrinymic;
	
	this->years.age = d_o.years.age;
	this->years.experience = d_o.years.experience;
	this->sex.sex_val = d_o.sex.sex_val;
	this->money.salary = d_o.money.salary;
	this->job.ajob = d_o.job.ajob;
	this->job.access = d_o.job.access;
	

	
	return *this;
}
