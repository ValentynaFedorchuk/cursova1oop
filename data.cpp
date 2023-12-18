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
	cout << "ПІБ: " << initials.surname << " " << initials.name << " " << initials.patrinymic << endl;
	cout << "Вік -- Стаж роботи: " << years.age << " -- " << years.experience << endl;
	cout << "Стать: " << sex.sex_val << endl;
	cout << "Заробітня плата: " << money.salary << endl;
	cout << "Професія: " << job.ajob << endl;

}

void Data::PrintOnlyExperience()
{
	cout << "ПІБ: " << initials.surname << " " << initials.name << " " << initials.patrinymic << endl;
	cout << "Стаж роботи: " << years.experience << endl;
}

void Data::PrintOnlySex()
{
	cout << "ПІБ: " << initials.surname << " " << initials.name << " " << initials.patrinymic << endl;
	cout << "Стать: " << sex.sex_val << endl;
}

void Data::PrintOnlyAge()
{
	cout << "ПІБ: " << initials.surname << " " << initials.name << " " << initials.patrinymic << endl;
	cout << "Вік: " << years.age << endl;
}
void Data::PrintOnlySalary()
{
	cout << "ПІБ: " << initials.surname << " " << initials.name << " " << initials.patrinymic << endl;
	cout << "Заробітна плата: " << money.salary << endl;
}
void Data::PrintOnlyJob(string selected_Job)
{
	string selectedJob;
	selectedJob=selected_Job;

	if (job.ajob == selectedJob){
	cout << "ПІБ: " << initials.surname << " " << initials.name << " " << initials.patrinymic << endl;
	cout << "Вік -- Стаж роботи: " << years.age << " -- " << years.experience << endl;
	cout << "Стать: " << sex.sex_val << endl;
	cout << "Заробітня плата: " << money.salary << endl;
	cout << "Професія: " << job.ajob << endl;}
	else {
		cout << "Не знайдено такої професії!" << endl;
	}
}
void Data::PrintOnlyAccess(string selected_Pet)
{
	string selectedPet;
	selectedPet=selected_Pet;
	
	if (job.access == 1){
	cout << "ПІБ: " << initials.surname << " " << initials.name << " " << initials.patrinymic << endl;
	}
	else {
		cout << "Не знайдено такого працівника!" << endl;
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
	cout << "Виберіть професію робітника: " << endl
		 << "(1) Ветеринар" << endl
		 << "(2) Прибиральник" << endl
		 << "(3) Дресирувальник" << endl
		 << "(4) Будівельник-ремонтувальник" << endl
		 << "(5) Працівник адміністрації" << endl
		 << "Ваш вибір: ";
		cin >> _stateJob;
		switch (_stateJob){
		case 1:
			job_.ajob = "Ветеринар";
			break;
		case 2:
			job_.ajob = "Прибиральник";
			break;
		case 3:
			job_.ajob = "Дресирувальник";
			break;
		case 4:
			job_.ajob = "Будівельник-ремонтувальник";
			break;
		case 5:
			job_.ajob = "Працівник адміністрації";
			break;
		default:
			system("cls");
			cout << "Пункт меню введений неправильно!" << endl;
			system("pause");
			//ClerksMenu();
}
cout << "Успішно введено провесію: " << job_.ajob << endl;
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
