#include "functions.h"

void DataEntry(Data* (&d), int& n)
{
	Initials initials;
	Years years;
	Sex sex;
	Money money;
	Job job;

	int _stateJob;
	
	
	cout << "������ ��������� ������: ";
	cin >> n;
	
	d = new Data[n];
	
	for (int i = 0; i<n; i++) {
		cout << "������ ϲ�: ";
		cin >> initials.surname >> initials.name >> initials.patrinymic;
		
		cout << "������ �� � ����� ������(�-��� ����): ";
		cin >> years.age >> years.experience;
		
		cout << "������ �����: ";
		cin >> sex.sex_val;
		
		cout << "������ �/�: ";
		cin >> money.salary;
		
		
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
			job.ajob = "���������";
			job.access = 1;
			break;
		case 2:
			job.ajob = "������������";
			job.access = 1;
			break;
		case 3:
			job.ajob = "��������������";
			job.access = 1;
			break;
		case 4:
			job.ajob = "����������-��������������";
			job.access = 0;
			break;
		case 5:
			job.ajob = "��������� �����������";
			job.access = 0;
			break;
		default:
			system("cls");
			cout << "����� ���� �������� �����������!" << endl;
			system("pause");}
		cout << "check �������: " << job.ajob << endl;
	
		d[i].DataEntry(initials, years, sex, money, job);
		cout << "_____________________________________\n";
	}
}
void DataReading(Data* (&d), int& n, string fileName)
{
	ifstream reading(fileName.c_str());
	
	if (reading) {
		Initials initials;
		Years years;
		Sex sex;
		Money money;
		Job job;
		/*Date date;
		Address address;*/
		
		reading >> n;
		
		d = new Data[n];
		
		for (int i = 0; i<n; i++) {
		reading >> initials.surname >> initials.name >> initials.patrinymic;
		reading >> years.age >> years.experience;
		reading >> sex.sex_val;
		reading >> money.salary;
		reading >> job.ajob >> job.access;
	/*	reading >> date.day >> date.month >> date.year;
		reading >> address.city >> address.home;*/
		
		d[i].DataEntry(initials, years, sex, money, job);/*, date, address);*/
	}
		cout << "��� �������!" << endl;
	}
	else
		cout << "������� �������� �����" << endl;
	
	reading.close();
}

void Print(Data* d, int n)
{
	for(int i = 0; i<n; i++){
		cout << "��� � " << i+1 << endl;
		
		d[i].Print();
		cout << "__________________________________________\n";
	}
}
void PrintOnlyExperience(Data* d, int n)
{
	for(int i = 0; i<n; i++){
		cout << "��� � " << i+1 << endl;
		
		d[i].PrintOnlyExperience();
		cout << "__________________________________________\n";
	}
}
void PrintOnlySex(Data* d, int n)
{
	for(int i = 0; i<n; i++){
		cout << "��� � " << i+1 << endl;
		
		d[i].PrintOnlySex();
		cout << "__________________________________________\n";
	}
}
void PrintOnlyAge(Data* d, int n)
{
	for(int i = 0; i<n; i++){
		cout << "��� � " << i+1 << endl;
		
		d[i].PrintOnlyAge();
		cout << "__________________________________________\n";
	}
}
void PrintOnlySalary(Data* d, int n)
{
	for(int i = 0; i<n; i++){
		cout << "��� � " << i+1 << endl;
		
		d[i].PrintOnlySalary();
		cout << "__________________________________________\n";
	}
}
void PrintOnlyJob(Data* d, int n)
{
	string selectedJob;
	cout << "������ ������� �������: " << endl;
	cin >> selectedJob;
	for(int i = 0; i<n; i++){
	//	cout << "��� � " << i+1 << endl;
		
		d[i].PrintOnlyJob(selectedJob);
		cout << "__________________________________________\n";
	}
}
void PrintOnlyAccess(Data* d, int n)
{
	string selectedPet;
	cout << "������ �������� ��� �� ��������� �������: " << endl;
	cin >> selectedPet;
	for(int i = 0; i<n; i++){
	//	cout << "��� � " << i+1 << endl;
		
		d[i].PrintOnlyAccess(selectedPet);
		cout << "__________________________________________\n";
	}
}

void SaveData(Data* d, int n, string fileName)
{
	ofstream record(fileName.c_str());
	
	if(record) {
		record << n << endl;
		
		for(int i = 0; i<n; i++){
			record << d[i].GetInitials().surname << " " << d[i].GetInitials().name << " " << d[i].GetInitials().patrinymic << endl;
			record << d[i].GetYears().age << " " << d[i].GetYears().experience << endl;
			record << d[i].GetSex().sex_val << endl;
			record << d[i].GetMoney().salary << endl;
			record << d[i].GetJob().ajob << "" << d[i].GetJob().access;
			
			if(i<n-1)
				record << endl;
		}
	}
	else
		cout << "������� �������� �����!" << endl;
		
	cout << "��� ��������� � ����: " << fileName << endl;
	
	record.close();
}
//-------------------------------------------------ANIMALS---------------------------------------------------------


void PetInfoEntry(PetInfo* (&p), int& n)
{
	string climate, species, kind, vaccination, disease, petSex, food;
	int petAge, weight, height, cagenumber;
	bool progeny, compatible;
	PetName petName;
	int _stateProgeny;
	cout << "������ ��������� ������: ";
	cin >> n;
	
	p = new PetInfo[n];
	
	for (int i = 0; i<n; i++) {
		cout << "������ ��� � ������ �������: ";
		cin >> petName.aspecies >> petName.alias;
		
		cout << "������ �� (�-��� ����): ";
		cin >> petAge;
		
		cout << "������ �����: ";
		cin >> petSex;
		
		cout << "������ ��� ������ (��������, ������): ";
		cin >> climate;
		
		cout << "������ ��� ���������� (���������, ���): ";
		cin >> kind;
		if(kind=="���") {
			compatible = 0;
		}
		else {
			compatible = 1;
		}
		
		cout << "������ ���: ";
		cin >> species;
		
		cout << "������ ��������� �������: ";
		cin >> disease;
		
		cout << "������ ���� �������: ";
		cin >> weight;
		
		cout << "������ ���� �������: ";
		cin >> height;
		
		cout << "������ ����� ��������: ";
		cin >> vaccination;
		
		cout << "������ ����� �����: ";
		cin >> cagenumber;
		
		cout << "������ ��������� ������ ��������� (0 - �� ����, 1 - ����): ";
		cin >> progeny;
		
		cout << "������ ����: ";
		cin >> food;
	
		cout << "check" << cagenumber << endl;

		p[i].PetInfoEntry(petName, petAge, petSex, climate, kind, species, disease, weight, height, vaccination, progeny, cagenumber, food, compatible);
		cout << "_____________________________________\n";
	}
}
void PetInfoPrint(PetInfo* p, int n)
{
	for(int i = 0; i<n; i++){
		cout << "��� � " << i+1 << endl;
		
		p[i].PetInfoPrint();
		cout << "__________________________________________\n";
	}
}
void PetInfoPrintProgeny(PetInfo* p, int n)
{
	for(int i = 0; i<n; i++){
		//cout << "��� � " << i+1 << endl;
		
		p[i].PetInfoPrintProgeny();
		cout << "__________________________________________\n";
	}
}
void PrintOnlyClimateAge(PetInfo* p, int n)
{
	int selectedAge;
	cout << "������ �������� ��: " << endl;
	cin >> selectedAge;
	for(int i = 0; i<n; i++){	
		p[i].PrintOnlyClimateAge(selectedAge);
		cout << "__________________________________________\n";
	}
}
void PrintOnlyClimateSpecies(PetInfo* p, int n)
{
	string selectedSpecies;
	cout << "������ �������� ���: " << endl;
	cin >> selectedSpecies;
	for(int i = 0; i<n; i++){	
		p[i].PrintOnlyClimateSpecies(selectedSpecies);
		cout << "__________________________________________\n";
	}
}
void PrintOnlyVaccination(PetInfo* p, int n)
{
	string selectedVac;
	cout << "������ ������� �������: " << endl;
	cin >> selectedVac;
	for(int i = 0; i<n; i++){
	//	cout << "��� � " << i+1 << endl;
		
		p[i].PrintOnlyVaccination(selectedVac);
		cout << "__________________________________________\n";
	}
}
void PrintOnlyFood(PetInfo* p, int n)
{
	string selectedFood;
	cout << "������ �������� ����: " << endl;
	cin >> selectedFood;
	for(int i = 0; i<n; i++){
	//	cout << "��� � " << i+1 << endl;
		
		p[i].PrintOnlyFood(selectedFood);
		cout << "__________________________________________\n";
	}
}
void PrintOnlyCage(PetInfo* p, int n)
{
	int selectedCage;
	cout << "������ �������� ����� �����: " << endl;
	cin >> selectedCage;
	for(int i = 0; i<n; i++){
	//	cout << "��� � " << i+1 << endl;
		
		p[i].PrintOnlyCage(selectedCage);
		cout << "__________________________________________\n";
	}
}
void PrintOnlyDisease(PetInfo* p, int n)
{
	string selectedDis;
	cout << "������ ������� �������: " << endl;
	cin >> selectedDis;
	for(int i = 0; i<n; i++){
	//	cout << "��� � " << i+1 << endl;
		
		p[i].PrintOnlyDisease(selectedDis);
		cout << "__________________________________________\n";
	}
}
void PrintOnlyCompatiblePet(PetInfo* p, int n)
{
	string selectedSpeciesP, foodKind;
	cout << "������ ���, ���� ������� ��������� �� ��������: " << endl;
	cin >> selectedSpeciesP;
	cout << "������ ��� ����������(���, ���������): " << endl;
	cin >> foodKind;
	for(int i = 0; i<n; i++){
	//	cout << "��� � " << i+1 << endl;
		
		p[i].PrintOnlyCompatiblePet(selectedSpeciesP, foodKind);
		cout << "__________________________________________\n";
	}
}
void SavePetInfo(PetInfo* p, int n, string fileName_pet)
{
	ofstream record(fileName_pet.c_str());
	
	if(record) {
		record << n << endl;
		
		for(int i = 0; i<n; i++){
			record << p[i].GetPetName().aspecies << " " << p[i].GetPetName().alias << endl;
			record << p[i].GetPetAge() << endl;
			record << p[i].GetPetSex() << endl;
			record << p[i].GetClimate() << endl;
			record << p[i].GetSpecies() << endl;
			record << p[i].GetDisease() << endl;
			record << p[i].GetWeight() << endl;
			record << p[i].GetHeight() << endl;
			record << p[i].GetVaccination() << endl;
			record << p[i].GetNumber() << endl;
			record << p[i].GetProgeny() << endl;
			record << p[i].GetKind();
			record << p[i].GetCompatible();
			
			if(i<n-1)
				record << endl;
		}
	}
	else
		cout << "������� �������� �����!" << endl;
		
	cout << "��� ��������� � ����: " << fileName_pet << endl;
	
	record.close();
}


//----------------------------------------------------------------FOOD-------------------------------------------------
void FoodEntry(Food* (&f), int& n)
{
	Date date;
	string provider, fname;
	int amount, price;
	
	cout << "������ ��������� ������: ";
	cin >> n;
	
	f = new Food[n];
	
	for (int i = 0; i<n; i++) {
		
		cout << "������ ����� �����: ";
		cin >> fname;
		
		cout << "������ �������������: ";
		cin >> provider;
		
		cout << "������ �������: ";
		cin >> amount;
		
		cout << "������ ����: ";
		cin >> price;
		
		cout << "������ ���� ��������: ";
		cin >> date.day >> date.month >> date.year;
		
		f[i].FoodEntry(fname, provider, amount, price, date);
		cout << "_____________________________________\n";
	}
}
void FoodReading(Food* (&f), int& n, string fileName_food)
{
	ifstream reading(fileName_food.c_str());
	
	if (reading) {
		string provider, fname;
		int amount, price;
		Date date;
		
		reading >> n;
		
		f = new Food[n];
		
		for (int i = 0; i<n; i++) {
		reading >> fname;
		reading >> provider;
		reading >> amount;
		reading >> price;
		reading >> date.day >> date.month >> date.year;
	
		
		f[i].FoodEntry(fname, provider, amount, price, date);
	}
		cout << "��� �������!" << endl;
	}
	else
		cout << "������� �������� �����" << endl;
	
	reading.close();
}
void FoodPrint(Food* f, int n)
{
	for(int i = 0; i<n; i++){
		cout << "��� � " << i+1 << endl;
		
		f[i].FoodPrint();
		cout << "__________________________________________\n";
	}
}
void PrintSelectedFood(Food* f, int n)
{
	string selectedFood;
	cout << "������ �������� ����: " << endl;
	cin >> selectedFood;
	for(int i = 0; i<n; i++){
	//	cout << "��� � " << i+1 << endl;
		
		f[i].PrintSelectedFood(selectedFood);
		cout << "__________________________________________\n";
	}
}
void PrintMadeByZoo(Food* f, int n)
{
	for(int i = 0; i<n; i++){
	//	cout << "��� � " << i+1 << endl;
		
		f[i].PrintMadeByZoo();
		cout << "__________________________________________\n";
	}
}

///------------------------------------------------ZOOOOOOOOO------------------------------------------------
void ZooEntry(Zoo* (&z), int& n)
{
	string zooName;
	PetName petName;
	cout << "������ ��������� ������: ";
	cin >> n;
	
	z = new Zoo[n];
	
	for (int i = 0; i<n; i++) {
		cout << "������ ��� � ������ �������: ";
		cin >> petName.aspecies >> petName.alias;
		
		cout << "������ ����� ��������, � ���� ��� ���������� ����: ";
		cin >> zooName;

		z[i].ZooEntry(petName, zooName);
		cout << "_____________________________________\n";
	}
}
void ZooPrint(Zoo* z, int n)
{
	for(int i = 0; i<n; i++){
		cout << "��� � " << i+1 << endl;
		
		z[i].PetInfoPrint();
		cout << "__________________________________________\n";
	}
}
void PrintOnlyChangePet(Zoo* z, int n)
{
	string selectedPetKind;
	cout << "������ �������� ���: " << endl;
	cin >> selectedPetKind;
	for(int i = 0; i<n; i++){
	//	cout << "��� � " << i+1 << endl;
		
		z[i].PrintOnlyChangePet(selectedPetKind);
		cout << "__________________________________________\n";
	}
}
