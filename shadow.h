#include <stdio.h>
#include <math.h>

#define PI 3.142857

double get_length(int h, float alt) {
    double length;
    length = h / tan(alt);
    return length;
}


float get_altitude(int date, int time, float lattitude) {
    //* INCOMPLETE
    float alt;
    float equator_alt;
    equator_alt = 60.0;
    alt = 90 - (lattitude - equator_alt);
    return alt;
}


float get_direction(int date, int time) {
    //* INCOMPLETE
    float direction;
    direction = 60.0;
    return direction;
}


float radians_from_degrees(float degrees) {
    float radians;
    radians = 0.0174532925*degrees;
    return radians;
}


float get_equatorial_noon_altitude(int day) {
    //* NEED TO CHECK
    float alt;
    alt = 23.5 * cos(day * 2 * PI / 365);
    return alt;
}

