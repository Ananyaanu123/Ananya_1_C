#include <stdio.h>
float meters_to_kilometers(float meters) {
    return meters / 1000.0;
}
float grams_to_kilograms(float grams) {
    return grams / 1000.0;
}

int main() {
    int choice;
    float value, result;

    printf("Unit Conversion Program\n");
    printf("Select a conversion option:\n");
    printf("1. Meters to Kilometers\n");
    printf("2. Grams to Kilograms\n");
    
    while (1) {
        ("\nEnter a choice(1-2):");
        scanf("%d",&choice);
    }
        switch (choice) {
            case 1:
                printf("Enter value in meters: ");
                scanf("%f", &value);
                result = meters_to_kilometers(value);
                printf("%.2f meters = %.2f kilometers\n", value, result);
                break;
            case 2:
                printf("Enter value in grams: ");
                scanf("%f", &value);
                result = grams_to_kilograms(value);
                printf("%.2f grams = %.2f kilograms\n", value, result);
                break;
                printf("Ananya ECE");
    }

    return 0;
}
