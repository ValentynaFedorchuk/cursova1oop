#include "functions.h"

void DataEntry(Data* (&d), int& n)
{
	Initials initials;
	Years years;
	Sex sex;
	Money money;
	Job job;

	int _stateJob;
	
	
	cout << "Введіть розмірність масиву: ";
	cin >> n;
	
	d = new Data[n];
	
	for (int i = 0; i<n; i++) {
		cout << "Введіть ПІБ: ";
		cin >> initials.surname >> initials.name >> initials.patrinymic;
		
		cout << "Введіть вік і досвід роботи(к-сть років): ";
		cin >> years.age >> years.experience;
		
		cout << "Введіть стать: ";
		cin >> sex.sex_val;
		
		cout << "Введіть з/п: ";
		cin >> money.salary;
		
		
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
			job.ajob = "Ветеринар";
			job.access = 1;
			break;
		case 2:
			job.ajob = "Прибиральник";
			job.access = 1;
			break;
		case 3:
			job.ajob = "Дресирувальник";
			job.access = 1;
			break;
		case 4:
			job.ajob = "Будівельник-ремонтувальник";
			job.access = 0;
			break;
		case 5:
			job.ajob = "Працівник адміністрації";
			job.access = 0;
			break;
		default:
			system("cls");
			cout << "Пункт меню введений неправильно!" << endl;
			system("pause");}
		cout << "check провесію: " << job.ajob << endl;
	
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
		cout << "Дані зчитано!" << endl;
	}
	else
		cout << "Помилка відкриття файлу" << endl;
	
	reading.close();
}

void Print(Data* d, int n)
{
	for(int i = 0; i<n; i++){
		cout << "Дані № " << i+1 << endl;
		
		d[i].Print();
		cout << "__________________________________________\n";
	}
}
void PrintOnlyExperience(Data* d, int n)
{
	for(int i = 0; i<n; i++){
		cout << "Дані № " << i+1 << endl;
		
		d[i].PrintOnlyExperience();
		cout << "__________________________________________\n";
	}
}
void PrintOnlySex(Data* d, int n)
{
	for(int i = 0; i<n; i++){
		cout << "Дані № " << i+1 << endl;
		
		d[i].PrintOnlySex();
		cout << "__________________________________________\n";
	}
}
void PrintOnlyAge(Data* d, int n)
{
	for(int i = 0; i<n; i++){
		cout << "Дані № " << i+1 << endl;
		
		d[i].PrintOnlyAge();
		cout << "__________________________________________\n";
	}
}
void PrintOnlySalary(Data* d, int n)
{
	for(int i = 0; i<n; i++){
		cout << "Дані № " << i+1 << endl;
		
		d[i].PrintOnlySalary();
		cout << "__________________________________________\n";
	}
}
void PrintOnlyJob(Data* d, int n)
{
	string selectedJob;
	cout << "Введіть потрібну професію: " << endl;
	cin >> selectedJob;
	for(int i = 0; i<n; i++){
	//	cout << "Дані № " << i+1 << endl;
		
		d[i].PrintOnlyJob(selectedJob);
		cout << "__________________________________________\n";
	}
}
void PrintOnlyAccess(Data* d, int n)
{
	string selectedPet;
	cout << "Введіть потрібний вид чи конкретну тварину: " << endl;
	cin >> selectedPet;
	for(int i = 0; i<n; i++){
	//	cout << "Дані № " << i+1 << endl;
		
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
		cout << "Помилка відкриття файлу!" << endl;
		
	cout << "Дані збережено в файл: " << fileName << endl;
	
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
	cout << "Введіть розмірність масиву: ";
	cin >> n;
	
	p = new PetInfo[n];
	
	for (int i = 0; i<n; i++) {
		cout << "Введіть вид і кличку тварини: ";
		cin >> petName.aspecies >> petName.alias;
		
		cout << "Введіть вік (к-сть років): ";
		cin >> petAge;
		
		cout << "Введіть стать: ";
		cin >> petSex;
		
		cout << "Введіть тип клімату (холодний, жаркий): ";
		cin >> climate;
		
		cout << "Введіть вид харчування (рослиноїдні, хижі): ";
		cin >> kind;
		if(kind=="хижі") {
			compatible = 0;
		}
		else {
			compatible = 1;
		}
		
		cout << "Введіть вид: ";
		cin >> species;
		
		cout << "Введіть перенесені хвороби: ";
		cin >> disease;
		
		cout << "Введіть вагу тварини: ";
		cin >> weight;
		
		cout << "Введіть зріст тварини: ";
		cin >> height;
		
		cout << "Введіть наявні щеплення: ";
		cin >> vaccination;
		
		cout << "Введіть номер клітки: ";
		cin >> cagenumber;
		
		cout << "Введіть можливість давати потомство (0 - не може, 1 - може): ";
		cin >> progeny;
		
		cout << "Введіть корм: ";
		cin >> food;
	
		cout << "check" << cagenumber << endl;

		p[i].PetInfoEntry(petName, petAge, petSex, climate, kind, species, disease, weight, height, vaccination, progeny, cagenumber, food, compatible);
		cout << "_____________________________________\n";
	}
}
void PetInfoPrint(PetInfo* p, int n)
{
	for(int i = 0; i<n; i++){
		cout << "Дані № " << i+1 << endl;
		
		p[i].PetInfoPrint();
		cout << "__________________________________________\n";
	}
}
void PetInfoPrintProgeny(PetInfo* p, int n)
{
	for(int i = 0; i<n; i++){
		//cout << "Дані № " << i+1 << endl;
		
		p[i].PetInfoPrintProgeny();
		cout << "__________________________________________\n";
	}
}
void PrintOnlyClimateAge(PetInfo* p, int n)
{
	int selectedAge;
	cout << "Введіть потрібний вік: " << endl;
	cin >> selectedAge;
	for(int i = 0; i<n; i++){	
		p[i].PrintOnlyClimateAge(selectedAge);
		cout << "__________________________________________\n";
	}
}
void PrintOnlyClimateSpecies(PetInfo* p, int n)
{
	string selectedSpecies;
	cout << "Введіть потрібний вид: " << endl;
	cin >> selectedSpecies;
	for(int i = 0; i<n; i++){	
		p[i].PrintOnlyClimateSpecies(selectedSpecies);
		cout << "__________________________________________\n";
	}
}
void PrintOnlyVaccination(PetInfo* p, int n)
{
	string selectedVac;
	cout << "Введіть потрібну вакцину: " << endl;
	cin >> selectedVac;
	for(int i = 0; i<n; i++){
	//	cout << "Дані № " << i+1 << endl;
		
		p[i].PrintOnlyVaccination(selectedVac);
		cout << "__________________________________________\n";
	}
}
void PrintOnlyFood(PetInfo* p, int n)
{
	string selectedFood;
	cout << "Введіть потрібний корм: " << endl;
	cin >> selectedFood;
	for(int i = 0; i<n; i++){
	//	cout << "Дані № " << i+1 << endl;
		
		p[i].PrintOnlyFood(selectedFood);
		cout << "__________________________________________\n";
	}
}
void PrintOnlyCage(PetInfo* p, int n)
{
	int selectedCage;
	cout << "Введіть потрібний номер клітки: " << endl;
	cin >> selectedCage;
	for(int i = 0; i<n; i++){
	//	cout << "Дані № " << i+1 << endl;
		
		p[i].PrintOnlyCage(selectedCage);
		cout << "__________________________________________\n";
	}
}
void PrintOnlyDisease(PetInfo* p, int n)
{
	string selectedDis;
	cout << "Введіть потрібну хворобу: " << endl;
	cin >> selectedDis;
	for(int i = 0; i<n; i++){
	//	cout << "Дані № " << i+1 << endl;
		
		p[i].PrintOnlyDisease(selectedDis);
		cout << "__________________________________________\n";
	}
}
void PrintOnlyCompatiblePet(PetInfo* p, int n)
{
	string selectedSpeciesP, foodKind;
	cout << "Введіть вид, який потрібно перевірити на сумісність: " << endl;
	cin >> selectedSpeciesP;
	cout << "Введіть вид харчування(хижі, рослиноїдні): " << endl;
	cin >> foodKind;
	for(int i = 0; i<n; i++){
	//	cout << "Дані № " << i+1 << endl;
		
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
		cout << "Помилка відкриття файлу!" << endl;
		
	cout << "Дані збережено в файл: " << fileName_pet << endl;
	
	record.close();
}


//----------------------------------------------------------------FOOD-------------------------------------------------
void FoodEntry(Food* (&f), int& n)
{
	Date date;
	string provider, fname;
	int amount, price;
	
	cout << "Введіть розмірність масиву: ";
	cin >> n;
	
	f = new Food[n];
	
	for (int i = 0; i<n; i++) {
		
		cout << "Введіть назву корму: ";
		cin >> fname;
		
		cout << "Введіть постачальника: ";
		cin >> provider;
		
		cout << "Введіть кількість: ";
		cin >> amount;
		
		cout << "Введіть ціну: ";
		cin >> price;
		
		cout << "Введіть дату поставки: ";
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
		cout << "Дані зчитано!" << endl;
	}
	else
		cout << "Помилка відкриття файлу" << endl;
	
	reading.close();
}
void FoodPrint(Food* f, int n)
{
	for(int i = 0; i<n; i++){
		cout << "Дані № " << i+1 << endl;
		
		f[i].FoodPrint();
		cout << "__________________________________________\n";
	}
}
void PrintSelectedFood(Food* f, int n)
{
	string selectedFood;
	cout << "Введіть потрібний корм: " << endl;
	cin >> selectedFood;
	for(int i = 0; i<n; i++){
	//	cout << "Дані № " << i+1 << endl;
		
		f[i].PrintSelectedFood(selectedFood);
		cout << "__________________________________________\n";
	}
}
void PrintMadeByZoo(Food* f, int n)
{
	for(int i = 0; i<n; i++){
	//	cout << "Дані № " << i+1 << endl;
		
		f[i].PrintMadeByZoo();
		cout << "__________________________________________\n";
	}
}

///------------------------------------------------ZOOOOOOOOO------------------------------------------------
void ZooEntry(Zoo* (&z), int& n)
{
	string zooName;
	PetName petName;
	cout << "Введіть розмірність масиву: ";
	cin >> n;
	
	z = new Zoo[n];
	
	for (int i = 0; i<n; i++) {
		cout << "Введіть вид і кличку тварини: ";
		cin >> petName.aspecies >> petName.alias;
		
		cout << "Введіть назву зоопарку, з яким був проведений обмін: ";
		cin >> zooName;

		z[i].ZooEntry(petName, zooName);
		cout << "_____________________________________\n";
	}
}
void ZooPrint(Zoo* z, int n)
{
	for(int i = 0; i<n; i++){
		cout << "Дані № " << i+1 << endl;
		
		z[i].PetInfoPrint();
		cout << "__________________________________________\n";
	}
}
void PrintOnlyChangePet(Zoo* z, int n)
{
	string selectedPetKind;
	cout << "Введіть потрібний вид: " << endl;
	cin >> selectedPetKind;
	for(int i = 0; i<n; i++){
	//	cout << "Дані № " << i+1 << endl;
		
		z[i].PrintOnlyChangePet(selectedPetKind);
		cout << "__________________________________________\n";
	}
}
