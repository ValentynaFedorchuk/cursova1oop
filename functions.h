#pragma once

#include "data.h"

void DataEntry(Data* (&d), int& n);
void DataReading(Data* (&d), int& n, string fileName);
void Print(Data* d, int n);
void PrintOnlyExperience(Data* d, int n);
void PrintOnlySex(Data* d, int n);
void PrintOnlyAge(Data* d, int n);
void PrintOnlySalary(Data* d, int n);
void PrintOnlyJob(Data* d, int n);
void PrintOnlyAccess(Data* d, int n);
//void JobsEntry();
void DataChange(Data* d,int n);
void Copy(Data *d_n, Data *d_o, int n);
void AddData(Data* (&d), int& n);
void DeleteData(Data* (&d), int& n);
//void SortingData(Data* d, int n);
void SaveData(Data* d, int n, string filename);
//ўодо тварин
void PetInfoEntry(PetInfo* (&p), int& n);
void PetInfoPrint(PetInfo* p, int n);
void PrintOnlyClimateAge(PetInfo* p, int n);
void PrintOnlyClimateSpecies(PetInfo* p, int n);
void PetInfoPrintProgeny(PetInfo* p, int n);
void PrintOnlyVaccination(PetInfo* p, int n);
void PrintOnlyFood(PetInfo* p, int n);
void PrintOnlyCage(PetInfo* p, int n);
void PrintOnlyDisease(PetInfo* p, int n);
void PrintOnlyCompatiblePet(PetInfo* p, int n);
void SavePetInfo(PetInfo* p, int n, string fileName_pet);
//ўодо кл≥ток
void PrintInfo(PetInfo* p, int n);
//ўодо корму
void FoodEntry(Food* (&f), int& n);
void FoodReading(Food* (&f), int& n, string fileName_food);
void FoodPrint(Food* f, int n);
void PrintSelectedFood(Food* f, int n);
void PrintMadeByZoo(Food* f, int n);
//ўодо зоопарк≥в
void ZooEntry(Zoo* (&z), int& n);
void ZooPrint(Zoo* z, int n);
void PrintOnlyChangePet(Zoo* z, int n);
