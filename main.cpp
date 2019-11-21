#include "stadium.h"
#include <iostream>

int main() {
 stadium first("Arena Lviv", 35000, 2400, 10, 41, "Ukraine", 200);
 first.country = "Ukraine";
 first.ticket_price = 200;
 first.get_inf();

 stadium second("Olimpik", 40000, 2500, 12, 42, "Ukraine", 300);
 second.country = "Ukraine";
 second.ticket_price = 300;
 second.get_inf();

 stadium three("Etihat", 52000, 3000, 15, 45,"England",400);
 three.country = "England";
 three.ticket_price = 400;
 three.get_inf();
 
}
