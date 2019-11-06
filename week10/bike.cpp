#include "bike.h"

bike::bike(){
}
bike::bike(int x, int y){
	wheel_number = x;
	max_speed = y;
}
bike::bike(int x, int y, char* c, int n){
	wheel_number = x;
	max_speed = y;
	bike_name = c;
	bike_number = n;
}
bike::bike(int x, int y, char* c, int n, bool b){
	wheel_number = x;
	max_speed = y;
	bike_name = c;
	bike_number = n;
	has_name = b;
}
int bike::get_bike_number(){
	return bike_number;
}
char* bike::get_bike_name(){
	return bike_name;
}
const char* bike::get_class_name(){
	char* c = "bike";
	return c;
}
