#include <stdio.h>

void print_dashboard() {
    char ship_class[64];
    unsigned int available_seats;
    unsigned int mission_days;

    printf("Input class: ");
    if (scanf("%63s", ship_class) != 1) {
        printf("Invalid input\n");
        return;
    }

    printf("Input available seats: ");
    if (scanf("%d", &available_seats) != 1) {
        printf("Invalid input\n");
        return;
    }

    printf("Input mission days: ");
    if (scanf("%d", &mission_days) != 1) {
        printf("Invalid input\n");
        return;
    }

    unsigned long odometer_km = 123456789;
    float fraction_lightspeed = 0.9;
    float remaining_range_km = 10000.0;

    printf("%-30s%s\n", "Name", "Value");

    for (int i = 0; i < 45; i++) {
        printf("-");
    }
    printf("\n");

    printf("%-30s%s\n", "Class", ship_class);
    printf("%-30s%d\n", "Available seats", available_seats);
    printf("%-30s%d\n", "Mission days", mission_days);
    printf("%-30s%ld km\n", "Travelled distance", odometer_km);
    printf("%-30s%.1f %%\n", "Fraction travelled at c", fraction_lightspeed * 100.0);
    printf("%-30s%.3f km\n", "Remaining range", remaining_range_km);
}

int main() {
    print_dashboard();

    return 0;
}
