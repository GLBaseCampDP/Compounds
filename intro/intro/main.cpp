#include <iostream>
#include <string>

using namespace std;
enum days {mon = -1, tue=0, wed=0, thu=0, fri=0, sat, sun};


void info(days day) {
   static string dayType[] = {" weekday", " saturday", " holiday"};
   int rate = 100*(1 + int(day));	// !!! приведення до типу int змінної типу days
   cout << "Type of day:" << dayType[day] << ". " << "The rate is: " << rate << " USD" << endl;
}
int main() {
   info(mon);
   // days day1 = 0;			заборонені операції
   days day1 = days(0);			// дозволена операції
   // info(1); 			заборонені операції
   info(days(1)); 			// дозволена операції

   days day = sat;   	info(day);    day = sun; 		info(day);
   days day2 = days(1000); // дозволена операції
   cout << int(day2); // print 1000
}
