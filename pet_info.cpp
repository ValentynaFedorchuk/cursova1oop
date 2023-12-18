#include "data.h"

PetInfo::PetInfo()
{
	petName.aspecies = "";
	petName.alias = "";
	climate = "";
	species = "";
	kind = "";
	vaccination = "";
	disease = "";
	petSex = "";
	petAge = 0;
	weight = 0;
	height = 0;
	cagenumber = 0;
	food = "";
	//progeny = 0;
}
PetInfo::PetInfo(PetName petName_, int petAge_, int weight_, int height_, string climate_, string species_, string kind_, string vaccination_, string disease_, string petSex_, bool progeny_, int cagenumber_, string food, bool compatible_)
{
	petName.aspecies = petName_.aspecies;
	petName.alias = petName_.alias;
	climate = climate_;
	species = species_;
	kind = kind_;
	vaccination = vaccination_;
	disease = disease_;
	petSex = petSex_;
	petAge = petAge_;
	weight = weight_;
	height = height_;
	progeny = progeny_;
	cagenumber = cagenumber_;
	food = food;
	compatible = compatible_;
}
PetInfo::~PetInfo()
{
}
void PetInfo::PetInfoPrint()
{
	cout << "��� � ������: " << petName.aspecies << " " << petName.alias << endl;
	cout << "³�: " << petAge << endl;
	cout << "�����: " << petSex << endl;
	cout << "�����: " << climate << endl;
	cout << "��� �� �����������: " << kind << endl;
	cout << "���: " << species << endl;
	cout << "��������� �������: " << disease << endl;
	cout << "����: " << weight << endl;
	cout << "����: " << height << endl;
	cout << "��������� ������ ���������: " << progeny << endl;
	cout << "����� ��������: " << vaccination << endl;
	//cout << "��������: " << cagenumber << endl;
}
void PetInfo::PrintOnlyVaccination(string selected_Vac)
{
	string selectedVac;
	selectedVac=selected_Vac;
	/*string selectedJob;
	cout << "������ ������� �������: " << endl;
	cin >> selectedJob;*/
	if (vaccination == selectedVac){
	cout << "��� � ������: " << petName.aspecies << " " << petName.alias << endl;
	cout << "³�: " << petAge << endl;
	cout << "�����: " << petSex << endl;
	cout << "��������� ������ ���������: " << progeny << endl;}
	else {
		cout << "�� �������� ���� �������!" << endl;
	}
}
void PetInfo::PrintOnlyFood(string selected_Food)
{
	string selectedFood;
	selectedFood=selected_Food;
	if (food == selectedFood){
	cout << "��� � ������: " << petName.aspecies << " " << petName.alias << endl;
	}
	else {
		cout << "�� �������� �������, ��� ������� ����� ����!" << endl;
	}
}
void PetInfo::PrintOnlyCage(int selected_Cage)
{
	int selectedCage;
	selectedCage=selected_Cage;
	if ( cagenumber == selectedCage){
	cout << "��� � ������: " << petName.aspecies << " " << petName.alias << endl;
	cout << "³�: " << petAge << endl;
	cout << "�����: " << petSex << endl;
	cout << "�����: " << climate << endl;
	cout << "��� �� �����������: " << kind << endl;
	cout << "���: " << species << endl;
	cout << "��������� �������: " << disease << endl;
	cout << "����: " << weight << endl;
	cout << "����: " << height << endl;
	cout << "��������� ������ ���������: " << progeny << endl;
	cout << "����� ��������: " << vaccination << endl;
	}
	else {
		cout << "�� �������� ���� �����!" << endl;
	}
}
void PetInfo::PrintOnlyDisease(string selected_Dis)
{
	string selectedDis;
	selectedDis=selected_Dis;
	
	if (disease == selectedDis){
	cout << "��� � ������: " << petName.aspecies << " " << petName.alias << endl;
	cout << "³�: " << petAge << endl;
	cout << "�����: " << petSex << endl;
	cout << "��������� ������ ���������: " << progeny << endl;}
	else {
		cout << "�� �������� ���� �������!" << endl;
	}
}
void PetInfo::PrintOnlyClimateAge(int selected_Age)
{
	int selectedAge;
	selectedAge=selected_Age;
	if(climate=="������"){
	if (petAge == selectedAge){
	cout << "������� " << petName.aspecies << " " << petName.alias << endl;
	}
	else {
		cout << "�� �������� ������ ������ ���!" << endl;
	}}
	else {
		cout << "���� ������, ���� ������� ����� ���������!" << endl;
	}
}
void PetInfo::PrintOnlyClimateSpecies(string selected_Species)
{
	string selectedSpecies;
	if(climate=="������"){
	selectedSpecies=selected_Species;
	if (species == selectedSpecies){
		cout << "������� " << petName.aspecies << " " << petName.alias << endl;
	}
	else {
		cout << "�� �������� ������ ����!" << endl;
	}}
		else {
		cout << "���� ������, ���� ������� ����� ���������!" << endl;
	}
}
void PetInfo::PetInfoPrintProgeny()
{
	if(progeny==1){
	cout << "��� � ������: " << petName.aspecies << " " << petName.alias << endl;}
	//else {cout << "���� ������, �� ������ ������ ���������" << endl;}
}

void PetInfo::PrintOnlyCompatiblePet(string selected_SpeciesP, string food_Kind)
{
	string selectedSpeciesP, foodKind;
	selectedSpeciesP=selected_SpeciesP;
	foodKind=food_Kind;
	if(compatible==1){
	if (food_Kind == "���������"){
	cout << "��� � ������: " << petName.aspecies << " " << petName.alias << endl;
	}
	else {
		cout << "�� �������� �������, ��� ������ � ����� �����!" << endl;
	}}
	else {
		if (food_Kind == "���"){
	cout << "��� � ������: " << petName.aspecies << " " << petName.alias << endl;
	}
	else {
		cout << "�� �������� �������, ��� ������ � ����� �����!" << endl;
	}
	}
}
void PetInfo::PetInfoEntry(PetName petName_, int petAge_, string petSex_, string climate_, string kind_, string species_, string disease_, int weight_, int height_, string vaccination_, bool progeny_, int cagenumber_, string food_, bool compatible_)
{
	petName.aspecies = petName_.aspecies;
	petName.alias = petName_.alias;
	climate = climate_;
	species = species_;
	kind = kind_;
	//vaccination = vaccination_;
	disease = disease_;
	petSex = petSex_;
	petAge = petAge_;
	weight = weight_;
	height = height_;
	vaccination = vaccination_;
	progeny = progeny_;
	cagenumber = cagenumber_;
	food = food_;
	compatible = compatible_;	
}
PetInfo& PetInfo::operator=(PetInfo p_o)
{
	this->petName.aspecies = p_o.petName.aspecies;
	this->petName.alias = p_o.petName.alias;
	this->climate = p_o.climate;
	this->species = p_o.species;
	this->kind = p_o.kind;
	this->vaccination = p_o.vaccination;
	this->disease = p_o.disease;
	this->petSex = p_o.petSex;
	this->petAge = p_o.petAge;
	this->weight = p_o.weight;
	this->height = p_o.height;
	this->progeny = p_o.progeny;
	this->cagenumber = p_o.cagenumber;
	this->food = p_o.food;
	this->compatible = p_o.compatible;
	
	return *this;
}
