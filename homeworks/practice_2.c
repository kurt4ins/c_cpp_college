#include <stdio.h>
#include <stdlib.h>

void task_1() {
    struct Student {
        char name[50];
        int age;
        float gpa;
    };

    int n;
    scanf("%d", &n);
    struct Student* students = malloc(n * sizeof(struct Student));

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
    }

    for (int i = 0; i < n; i++) {
        printf("\nName: %s\nAge: %d\nGPA: %.2f\n", students[i].name, students[i].age, students[i].gpa);
    }
    
    free(students);
}

void task_2() {
    struct Item {
        char name[50];
        int amount;
        double price;
    };

    int n;
    scanf("%d", &n);
    struct Item* items = malloc(n * sizeof(struct Item));

    for (int i = 0; i < n; i++) {
        scanf("%s %d %lf", items[i].name, &items[i].amount, &items[i].price);
    }
    for (int i = 0; i < n; i++) {
        printf("\nName: %s\nAmount: %d\nPrice: %.2lf\n", items[i].name, items[i].amount, items[i].price);
    }

    free(items);
}

void task_3() {
    struct Date {
        int day;
        int month;
        int year;
    };

    struct Event {
        char name[50];
        struct Date date;
        char description[100];
    };

    int n;
    scanf("%d", &n);
    struct Event* events = malloc(n * sizeof(struct Event));
    
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d %s", events[i].name, &events[i].date.day, &events[i].date.month, &events[i].date.year, events[i].description);
    }

    for (int i = 0; i < n; i++) {
        printf("\nName: %s\nDate: %d/%d/%d\nDescription: %s\n", events[i].name, events[i].date.day, events[i].date.month, events[i].date.year, events[i].description);
    }

    free(events);
}

void task_4() {
    struct Employee {
        char name[50];
        char position[50];
        double salary;
    };

    int n;
    scanf("%d", &n);
    struct Employee* employees = malloc(n * sizeof(struct Employee));
    
    for (int i = 0; i < n; i++) {
        scanf("%s %s %lf", employees[i].name, employees[i].position, &employees[i].salary);
    }

    for (int i = 0; i < n; i++) {
        printf("\nName: %s\nPosition: %s\nSalary: %.2lf\n", employees[i].name, employees[i].position, employees[i].salary);
    }

    free(employees);
}

void task_5() {
    union Data {
        int i;
        float f;
        char str[20];
    };

    int n;
    scanf("%d", &n);
    union Data data;

    if (n == 1) {
        scanf("%d", &data.i);
        printf("\nInteger: %d\n", data.i);
    } else if (n == 2) {
        scanf("%f", &data.f);
        printf("\nFloat: %f\n", data.f);
    } else if (n == 3) {
        scanf("%s", data.str);
        printf("\nString: %s\n", data.str);
    } else {
        printf("\nInvalid input\n");
    }
}

void task_6() {
    enum EngineType {
       Gasoline,
       Diesel,
       Electric,
    };

    char *engineTypeNames[3] = {"Gasoline", "Diesel", "Electric"};

    struct Vehicle {
        char name[50], model[50];
        int year;
        enum EngineType engineType;
    };

    int n;
    scanf("%d", &n);
    struct Vehicle* vehicles = malloc(n * sizeof(struct Vehicle));
    
    for (int i = 0; i < n; i++) {
        scanf("%s %s %d %d", vehicles[i].name, vehicles[i].model, &vehicles[i].year, &vehicles[i].engineType);
    }

    for (int i = 0; i < n; i++) {
        printf("\nVehicle: %s %s\nYear: %d\nEngine Type: %s\n", vehicles[i].name, vehicles[i].model, vehicles[i].year, engineTypeNames[vehicles[i].engineType]);
    }

    free(vehicles);
}

void task_7() {
    struct Student {
        char name[50];
        int age;
        float gpa;
    };

    int n;
    scanf("%d", &n);
    struct Student* students = malloc(n * sizeof(struct Student));

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
    }

    for (int i = 0; i < n; i++) {
        printf("\nName: %s\nAge: %d\nGPA: %.2f\n", students[i].name, students[i].age, students[i].gpa);
    }
    
    free(students);
}

void task_8() {
    union Grade {
        int numeric;
        char letter;
    };

    int n;
    scanf("%d", &n);
    union Grade grade;

    if (n == 1) {
        scanf("%d", &grade.numeric);
        printf("\nNumeric: %d\n", grade.numeric);
    } else if (n == 2) {
        scanf("%c", &grade.letter);
        printf("\nLetter: %c\n", grade.letter);
    } else {
        printf("\nInvalid input\n");
    }
}

void task_9() {
    enum WeatherState {
        Sunny,
        Cloudy,
        Rainy
    };

    char *weatherStateNames[3] = {"Sunny", "Cloudy", "Rainy"};

    struct Weather {
        double temperature;
        double humidity;
        enum WeatherState state;
    };

    struct Weather weather;
    scanf("%lf %lf %d", &weather.temperature, &weather.humidity, &weather.state);
    printf("\nTemperature: %lf\nHumidity: %lf\nWeather State: %s\n", weather.temperature, weather.humidity, weatherStateNames[weather.state]);
}

void task_10() {
    struct Course {
        char name[50];
        int credits;
        char teacher[50];
    };

    int n;
    scanf("%d", &n);
    struct Course* courses = malloc(n * sizeof(struct Course));

    for (int i = 0; i < n; i++) {
        scanf("%s %d %s", courses[i].name, &courses[i].credits, courses[i].teacher);
    }

    for (int i = 0; i < n; i++) {
        printf("\nCourse: %s\nCredits: %d\nTeacher: %s\n", courses[i].name, courses[i].credits, courses[i].teacher);
    }

    free(courses);
}

int main() {
    return 0;
}