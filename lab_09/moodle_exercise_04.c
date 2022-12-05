// moodle exercise 4 - celsius to fahrenheit
#include <stdio.h>

double readTempCelsius(){
    double tempCelsius;
    scanf("%lf", &tempCelsius);
    return tempCelsius;
}

double celsius2Fahrenheit(double tempCelsius){
    return tempCelsius * 9.0/5.0 + 32.0;
}

int main(){
    double temp = readTempCelsius();
    printf("%.2lf", celsius2Fahrenheit(temp));
    return 0;
}