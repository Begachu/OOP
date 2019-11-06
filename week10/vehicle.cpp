#include "vehicle.h" 


vehicle::vehicle(){
	has_name = false;
}
vehicle::vehicle(int x, int y){
	wheel_number = x;
	max_speed = y;
}
vehicle::vehicle(int x, int y, bool b){
	wheel_number = x;
	max_speed = y;
	has_name = b;
}
int vehicle::get_wheel_number(){
	return wheel_number;
}
int vehicle::get_max_speed(){
	return max_speed;
}
bool vehicle::get_has_name(){
	return has_name;
}
const char* vehicle::get_class_name(){
	char* c = "vehicle";
	return c;
}
void vehicle::set_wheel_number(int x){
	wheel_number = x;
}
void vehicle::set_max_speed(int x){
	max_speed = x;
}
void vehicle::set_has_name(bool b){
	has_name = b;
}

