  #pragma once

#include <iostream>
#include <string> 
#include <fstream> 
#include <Windows.h>

using namespace std;


struct Initials {
   string surname, name, patrinymic;
};
struct Years {
   int age;
   int experience;
};
struct Sex {
   string sex_val;
};
struct Money {
	int salary;
};
struct Job{
   string ajob;
   bool access;
};
struct PetName {
	string aspecies, alias;
};
struct Date {
	int day, month, year;
};


class Data {
	private:
		Initials initials;
		Years years;
		Sex sex;
		Money money;
		Job job;
		
	public: 
	    Data();
		Data(Initials initials_, Years years_, Sex sex_, Money money_, Job job_);
		~Data();
		void Print();
		void PrintOnlyExperience();
		void PrintOnlySex();
		void PrintOnlyAge();
		void PrintOnlySalary();
		void PrintOnlyJob(string selectedJob);
		void PrintOnlyAccess(string selectedPet);
		void JobsEntry(Job job_);
		void DataEntry(Initials initials_, Years years_, Sex sex_, Money money_, Job job_);
		Initials GetInitials() { return initials; };
		Years GetYears(){ return years; };
		Sex GetSex(){ return sex; };
		Money GetMoney(){ return money; };
		Job GetJob(){ return job; };
		Data& operator = (Data d_o);
			
};


class PetInfo{
protected:
	string climate, species, kind, vaccination, disease, petSex, food;
	int petAge, weight, height, cagenumber;
	bool progeny, compatible;
	PetName petName;
public:
	PetInfo();
	PetInfo(PetName petName_, int petAge_, int weight_, int height_, string climate_, string species_, string kind_, string vaccination_, string disease_, string petSex_, bool progeny_, int cagenumber_, string food_, bool compatible_);
	~PetInfo();
	void PetInfoPrint();
	void PrintOnlyVaccination(string selectedVac);
	void PrintOnlyDisease(string selectedDis);
	void PrintOnlyFood(string selectedFood);
	void PrintOnlyCage(int selectedCage);
	void PetInfoPrintProgeny();
	void PrintOnlyClimateSpecies(string selectedSpecies);
	void PetInfoEntry(PetName petName_, int petAge_, string petSex_,string climate_, string kind_, string species_, string disease_, int weight_, int height_, string vaccination_, bool progeny_, int cagenumber_, string food_, bool compatible_);
	void PrintOnlyClimateAge(int selectedAge);
	void PrintOnlyCompatiblePet(string selectedSpeciesP, string foodKind);
	//Job GetJob(){ return job; };
	string GetClimate(){ return climate; };
	string GetSpecies(){ return species; };
	string GetKind(){ return kind; };
	string GetVaccination(){ return vaccination; };
	string GetDisease(){ return disease; };
	string GetPetSex(){ return petSex; };
	int GetPetAge(){ return petAge; };
	int GetWeight(){ return weight; };
	int GetHeight(){ return height; };
	string GetFood(){ return food; };
	bool GetProgeny(){ return progeny; };
	int GetNumber(){ return cagenumber; };
	bool GetCompatible(){ return compatible; };
	PetName GetPetName(){ return petName; };
	PetInfo& operator = (PetInfo p_o);
};
//---------------------------------«ŒŒœ¿– »--------------------------------------
class Zoo : public PetInfo{
private:
	string zooName;
public:
	Zoo();
	Zoo(PetName petName_, string zooName_);
	~Zoo();
	void PetInfoPrint();
	void PrintOnlyChangePet(string selectedPetKind);
	void ZooEntry(PetName petName_, string zooName_);
	Zoo& operator = (Zoo z_o);
};
//---------------------------------------- Œ–Ã---------------------------------------------------------------------
class Food{
	private:
		string provider, fname;
		int amount, price;
		Date date;
	public:
		Food();
		Food(string fname_, string provider_, int amount_, int price_, Date date_);
		~Food();
		void FoodPrint();
		void PrintSelectedFood(string selectedFood);
		void PrintMadeByZoo();
		void FoodEntry(string fname_, string provider_, int amount_, int price_, Date date_);
		string GetFname(){ return fname; };
		string GetProvider(){ return provider; };
		int GetAmount(){ return amount; };
		int GetPrice(){ return price; };
		Date GetDate(){ return date; };
		Food& operator = (Food f_o);
};
