#include "stadium.h"
using namespace std;

stadium::stadium() {
 name;
 visitors;
 powerlight;
 entrance;
 height;
 country;
 ticket_price;
 
}

stadium::stadium(string stadiumname, int stadiumvisitors, int stadiumpowerlight, int stadiumentrance, int stadiumheight, string stadiumcountry, int stadiumticket_price) {
 name = stadiumname;
 visitors = stadiumvisitors;
 powerlight = stadiumpowerlight;
 entrance = stadiumentrance;
 height = stadiumheight;
 country = stadiumcountry;
 ticket_price = stadiumticket_price;
}
string stadium::getName() {
 return name;
}
int stadium::getVisitors() {
 return visitors;
}
int stadium::getPowerlight() {
 return powerlight;
}
int stadium::getEntrance() {
 return entrance;
}
int stadium::getHeight() {
 return height;
}
string stadium::getCountry() {
 return country;
}
int stadium::getTicket_price() {
 return ticket_price;
}
void stadium::get_inf() {
 cout << "\nYour stadium name is: " << "\"" << getName() << "\"" << ", amount of visitors is: " << getVisitors() << " Power light  is: " << getPowerlight() << " lux, number of entrances is: " << getEntrance() << ", height of stadium is: " << getHeight() << " m, country is: "<< getCountry()<<", ticket price is: "<<getTicket_price()<< " \n";
}
stadium::~stadium() {
 cout << "Destructed" << endl;
}
