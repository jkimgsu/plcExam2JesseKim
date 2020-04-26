#include <iostream>
#include<stdlib.h>

using namespace std;

enum metricSystem{kg = 1 , g = 1000};
enum ingredients{flour, eggs};
enum requiredIngredients{neededFlourGrams = 1000, neededEggsKilograms = 1};

int main(){
  int flourWeightKG = 8;
  int eggsWeightGrams = 5000;
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
