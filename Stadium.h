#pragma once
#ifndef LABA4_STADIUM_H
#define LABA4_STADIUM_H
#include <string>
#include <iostream>
using namespace std;

class stadium {

private:
 string name;
 int visitors;
 int powerlight;

protected:
 int entrance;
 int height;

public:
 string country;
 int ticket_price;


 stadium();

 stadium(string stadiumname, int stadiumvisitors, int stadiumpowerlight, int stadiumentrance, int stadiumheight,string studiumcountry,int stadiumticket_price);
 
 string getName();

 int getVisitors();

 int getPowerlight();

 int getEntrance();

 int getHeight();
 
 string getCountry();

 int getTicket_price();

 void get_inf();

 ~stadium();
};
