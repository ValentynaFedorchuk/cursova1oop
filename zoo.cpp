#include "data.h"

Zoo::Zoo(){
	petName.aspecies = "";
	petName.alias = "";
	zooName = "";
}
Zoo::Zoo(PetName petName_, string zooName_)
{
	petName.aspecies = petName_.aspecies;
	petName.alias = petName_.alias;
	zooName = zooName_;
}
Zoo::~Zoo(){
}
void Zoo::PetInfoPrint()
{
	cout << "��� � ������: " << petName.aspecies << " " << petName.alias << endl;
	cout << "����� ��������, � ���� ��� ���������� ����: " << zooName << endl;
}
void Zoo::PrintOnlyChangePet(string selected_PetKind)
{
	string selectedPetKind;
	selectedPetKind=selected_PetKind;
	if (petName.aspecies == selectedPetKind){
	cout << "����� ��������, � ���� ��� ���������� ����: " << zooName << endl;
	}
	else {
		cout << "�� �������� ������� ������ ����!" << endl;
	}
}
void Zoo::ZooEntry(PetName petName_, string zooName_)
{
	petName.aspecies = petName_.aspecies;
	petName.alias = petName_.alias;
	zooName = zooName_;
}
Zoo& Zoo::operator=(Zoo z_o)
{
	this->petName.aspecies = z_o.petName.aspecies;
	this->petName.alias = z_o.petName.alias;
	this->zooName = z_o.zooName;
	
	return *this;
}
