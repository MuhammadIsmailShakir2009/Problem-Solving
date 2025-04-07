///                       PRACTICAL C
#include <stdio.h>
//int main() {
//    int sum = 0;
//    printf("Numbers: ");
//    for (int i = 39; i >= 21; i -= 2) {
//        printf("%d", i);
//        if (i > 21) {
//            printf(", ");
//        }
//        sum += i;
//    }
//
//    printf("\nSum: %d\n", sum);
//
//    return 0;
//}

/// PRACTICAL  D
#include <stdio.h>
#include <string.h>

//int main() {
//    char name[100];
//
//    printf("Names:\n");
//
//    while (1) {
//        fgets(name, sizeof(name), stdin);
//        name[strcspn(name, "\n")] = '\0';
//
//        if (name[0] == 'Y' || name[0] == 'y') {
//            printf("End of the list\n");
//            break;
//        }
//    }
//
//    return 0;
//}

//// practical e

#include <stdio.h>

//int main() {
//    char name[50], gender;
//    int males = 0, females = 0;
//
//    printf("Name:\t\tGender:\n\n");
//
//    for (int i = 1; i <= 9; i++) {
//        printf("Enter name of student %d: ", i);
//        scanf("%s", name);
//
//        printf("Enter gender (M/F): ");
//        scanf(" %c", &gender); // space before %c to consume leftover newline
//
//        printf("%s\t\t%c\n", name, gender);
//
//        if (gender == 'M' || gender == 'm') {
//            males++;
//        } else if (gender == 'F' || gender == 'f') {
//            females++;
//        }
//    }
//
//    printf("\nNumber of males: %d\n", males);
//    printf("Number of females: %d\n", females);
//
//    return 0;
//}



/////////// Practical g

//#include <stdio.h>
//
//int main() {
//    float rupees, dollars;
//    float rate = 280.0;  // Example: 1 USD = 280 Rs (you can change this)
//
//    printf("Enter amount in Rupees: ");
//    scanf("%f", &rupees);
//
//    dollars = rupees / rate;
//
//    printf("%.2f Rs = %.2f $\n", rupees, dollars);
//
//    return 0;
//}


/////////// practical number i

//#include <stdio.h>
//
//int main() {
//    int num1, num2, num3;
//
//    printf("Enter first number: ");
//    scanf("%d", &num1);
//
//    printf("Enter second number: ");
//    scanf("%d", &num2);
//
//    printf("Enter third number: ");
//    scanf("%d", &num3);
//
//    printf("\nComparison of numbers with zero\n");
//
//    if (num1 > 0)
//        printf("First number is 'Positive'.\n");
//    else if (num1 < 0)
//        printf("First number is 'Negative'.\n");
//    else
//        printf("First number is 'Zero'.\n");
//
//    if (num2 > 0)
//        printf("Second number is 'Positive'.\n");
//    else if (num2 < 0)
//        printf("Second number is 'Negative'.\n");
//    else
//        printf("Second number is 'Zero'.\n");
//
//    if (num3 > 0)
//        printf("Third number is 'Positive'.\n");
//    else if (num3 < 0)
//        printf("Third number is 'Negative'.\n");
//    else
//        printf("Third number is 'Zero'.\n");
//
//    return 0;
//}
//





//Write a program to generate series of numbers from 30 to 70 with the interval of 5 and find their sum. The output must be formatted and displayed as shown below.
//(Note: Use For loop for this problem)
//Numbers:
//30
//35
//40
//45
//50
//55
//60
//65
//70



#include <stdio.h>

//int main() {
//    int number, sum = 0;
//
//    printf("Numbers:\n");
//
//    // Loop from 30 to 70 with step of 5
//    for (number = 30; number <= 70; number += 5) {
//        printf("%d\n", number);
//        sum += number;
//    }
//
//    // Print the sum
//    printf("\nSum of the series: %d\n", sum);
//
//    return 0;
//}

//Write a C language program that would take temperature and it units as input and convert Degrees Centigrade into Degrees Fahrenheit and vice versa. The formulae are:
//?=95×?+32
//?=59(?-32)
//
//
//The output must be formatted and displayed as shown below.
//Conversion of Temperature:
//Temperature in Fahrenheit = 
//Temperature in Centigrade = 

#include <stdio.h>

int main() {
    float temperature, converted;
    char unit;

    printf("Enter temperature value: ");
    scanf("%f", &temperature);

    printf("Enter unit (C for Centigrade, F for Fahrenheit): ");
    scanf(" %c", &unit); // Note the space before %c to consume any leftover newline

    printf("\nConversion of Temperature:\n");

    if (unit == 'C' || unit == 'c') {
        // Convert Celsius to Fahrenheit
        converted = (9.0 / 5.0) * temperature + 32;
        printf("Temperature in Centigrade = %.2f°C\n", temperature);
        printf("Temperature in Fahrenheit = %.2f°F\n", converted);
    } else if (unit == 'F' || unit == 'f') {
        // Convert Fahrenheit to Celsius
        converted = (5.0 / 9.0) * (temperature - 32);
        printf("Temperature in Fahrenheit = %.2f°F\n", temperature);
        printf("Temperature in Centigrade = %.2f°C\n", converted);
    } else {
        printf("Invalid unit entered. Please use 'C' or 'F'.\n");
    }

    return 0;
}






