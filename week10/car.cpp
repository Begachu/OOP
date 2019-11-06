#include "car.h"

car::car(){
}
car::car(int x, int y){
	wheel_number = x;
	max_speed = y;
}
car::car(int x, int y, char* c){
	wheel_number = x;
	max_speed = y;
	car_name = c;
}
car::car(int x, int y, char* c, bool b){
	wheel_number = x;
	max_speed = y;
	car_name = c;
	has_name = b;
}
char* car::get_car_name(){
	return car_name;
}
const char* car::get_class_name(){
	char* c = "car";
	return c;
}
void car::set_car_name(char* c){
	has_name = c;
}
