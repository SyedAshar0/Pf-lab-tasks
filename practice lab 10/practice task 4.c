#include <stdio.h>
#include <string.h>

typedef struct {
    char flightNumber[10], departureCity[50], arrivalCity[50], departureTime[20], arrivalTime[20];
    int availableSeats;
} Flight;

Flight flights[100];  // A fixed-size array of flights, no need for #define
int flightCount = 0;

void addFlight(char *flightNumber, char *departureCity, char *arrivalCity, char *departureTime, char *arrivalTime, int availableSeats) {
    if (flightCount < 100) {
        Flight *f = &flights[flightCount++];
        strcpy(f->flightNumber, flightNumber);
        strcpy(f->departureCity, departureCity);
        strcpy(f->arrivalCity, arrivalCity);
        strcpy(f->departureTime, departureTime);
        strcpy(f->arrivalTime, arrivalTime);
        f->availableSeats = availableSeats;
        printf("Flight %s added.\n", flightNumber);
    } else {
        printf("Flight system full.\n");
    }
}

void bookSeat(char *flightNumber) {
int i;
    for ( i = 0; i < flightCount; i++) {
        if (strcmp(flights[i].flightNumber, flightNumber) == 0) {
            if (flights[i].availableSeats > 0) {
                flights[i].availableSeats--;
                printf("Seat booked on %s. Remaining seats: %d\n", flightNumber, flights[i].availableSeats);
                return;
            } else {
                printf("No seats available on %s.\n", flightNumber);
                return;
            }
        }
    }
    printf("Flight %s not found.\n", flightNumber);
}

void displayFlightsBetweenCities(char *departureCity, char *arrivalCity) {
    int found = 0;
    int i;
    printf("Available flights from %s to %s:\n", departureCity, arrivalCity);
    for ( i = 0; i < flightCount; i++) {
        if (strcmp(flights[i].departureCity, departureCity) == 0 &&
            strcmp(flights[i].arrivalCity, arrivalCity) == 0 && flights[i].availableSeats > 0) {
            printf("Flight %s, Departure: %s, Arrival: %s, Seats: %d\n", flights[i].flightNumber, flights[i].departureTime, flights[i].arrivalTime, flights[i].availableSeats);
            found = 1;
        }
    }
    if (!found) printf("No flights found.\n");
}

void updateFlightDetails(char *flightNumber, char *newDepartureTime, char *newArrivalTime, int newAvailableSeats) {
int i;
    for (i = 0; i < flightCount; i++) {
        if (strcmp(flights[i].flightNumber, flightNumber) == 0) {
            strcpy(flights[i].departureTime, newDepartureTime);
            strcpy(flights[i].arrivalTime, newArrivalTime);
            flights[i].availableSeats = newAvailableSeats;
            printf("Flight %s updated.\n", flightNumber);
            return;
        }
    }
    printf("Flight %s not found.\n", flightNumber);
}

int main() {
    addFlight("C3PO9", "New York", "Los Angeles", "2024-12-16 10:00", "2024-12-16 13:00", 100);
    addFlight("RDRD2", "Los Angeles", "New York", "2024-10-14 15:00", "2024-10-14 18:00", 50);
    addFlight("HOLA45", "New York", "Chicago", "2024-11-16 09:00", "2024-11-16 10:30", 75);
   
    displayFlightsBetweenCities("New York", "Los Angeles");
    bookSeat("C3P09");
    displayFlightsBetweenCities("New York", "Los Angeles");
    updateFlightDetails("AA101", "2024-11-15 12:00", "2024-11-15 15:00", 80);
    displayFlightsBetweenCities("New York", "Los Angeles");

    return 0;
}
