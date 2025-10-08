#include <iostream>
using namespace std;

int main() {
    int fuel= 300;
    int distanceAB;
    int distance BC;
    int weight;
    int consumption;

cout << "Введите расстроянние между А и Б"<<endl;
cin >>distanceAB;
cout << "Введите расстояние между Б и С"<<endl;
cin >> distanceBC;
cout << "Введите вес груза"<<endl;
cin >> weight;
if (AB> 300|| BC>300){
    cout << "слишком длинная дистанция"<<endl;

}
 if (weight >2000){
    cout <<"самолет не взлетит"<<endl;
    return;
    
 } else if (weight<=500){
    consumption =1;
 }else if (weight<=1000){
    consumption = 4;

 }else if (weight<=1500){
    consumption = 7;

 }else if(weight<=2000){
    consumption =9;
 }
 int fuelAB= distanceAB*consumption;
 int fuelBC= distanceBC*consumption;
 if (fuelAB>fuel){
    cout << "недостаточно топлива для полета от А до Б"<<endl;
    return;
 }
 int fuelLeftAB=fuel-fuelAB;
 int neededRefill=fuelBC-fuelLeftAB;
 if(neededRefil<0){
    cout<< "дозаправка не нужна"<<endl; 
 } else if (nedeedRefil>(fuel-fuelLeftAB)){
    cout << "невозможно дозаправиться"<<endl;

 } else{
    cout << "мин объем дозаправкии в В" <<neededRefill<<"литров"<<endl;
}