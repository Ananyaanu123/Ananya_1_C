#include <stdio.h>
float celsius_to_fahrenheit
(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}
float fahrenheit_to_celsius
(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    int choice;
    float temperature;
    printf("Temperature Converter\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Choose an option (1 or 2): ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        printf("%.2f°C is equal to %.2f°F.\n", temperature, celsius_to_fahrenheit(temperature));
    } 
    else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        printf("%.2f°F is equal to %.2f°C.\n", temperature, fahrenheit_to_celsius(temperature));
        printf("Ananya ECE");
    }
    
    return 0;
}
