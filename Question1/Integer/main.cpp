#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
  int flourWeightKG = 8, 
      eggsWeightGrams = 10000, 
      neededFlourGrams = 1000, 
      neededEggsKilograms = 1, 
      kg = 1 , 
      g = 1000;
  
  int flourGrams, eggsKG, cakesFlour, cakesEggs, cakesTotal;

  flourGrams = flourWeightKG * g;
  cakesFlour = flourGrams/neededFlourGrams;
  eggsKG = eggsWeightGrams/g;
  cakesEggs = eggsKG/neededEggsKilograms;

  if(cakesFlour < cakesEggs){
    cakesTotal = cakesFlour;
  }else if(cakesEggs < cakesFlour){
    cakesTotal = cakesEggs;
  }
    cout << "You can bake " << cakesTotal << " cakes with your current ingredients" << endl;
  }
