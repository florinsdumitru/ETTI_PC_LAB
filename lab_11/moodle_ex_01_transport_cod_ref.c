#include <stdio.h>

typedef struct {
    char type;
    short number;
    char delay;
} Trip;

int compare(Trip * trip1, Trip * trip2) {
    if(trip1->delay != trip2->delay) {
        return trip1->delay - trip2->delay;
    }

    return trip2->type - trip1->type;
}

int main() {
    unsigned char currentHour, currentMinute;
    unsigned char vehicleCount;
    scanf("%hhu:%hhu %hhu", &currentHour, &currentMinute, &vehicleCount);

    Trip bestTrip;
    bestTrip.delay = 120;
    Trip currentTrip;
    while(vehicleCount--) {
        char waitTime, travelTime;
        scanf(" %c%hu%hhd%hhd", &currentTrip.type, &currentTrip.number,
                &waitTime, &travelTime);
        currentTrip.delay = waitTime + travelTime;
        if(compare(&bestTrip, &currentTrip) > 0) {
            bestTrip = currentTrip;
        }
    }

    printf("%c %hu %02hhu:%02hhu\n", bestTrip.type, bestTrip.number, (currentHour +
            (currentMinute + bestTrip.delay) / 60) % 24, (currentMinute + bestTrip.delay) % 60);
    return 0;
}