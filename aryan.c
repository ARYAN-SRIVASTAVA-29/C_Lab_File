//1. WAP for hello world or this is my first C Program

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    printf("Hello World or This is my first C Program\n");
    return 0;
}


//----------------------------------------------

//2:WAP to add two numbers

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    printf("Sum: %d\n");

    return 0;
}

//-----------------------------------------------

//3: WAP to find area of circle.

#include <stdio.h>
#include <math.h>

int main() {
    printf("Aryan Srivastava");
    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = 3.14 * pow(radius, 2);
    printf("Area of the circle: %lf\n", area);

    return 0;
}


//---------------------------------------

//4: WAP to divide two numbers

#include <stdio.h>

int main() {
    double num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    if (num2 == 0) {
        printf("Division by zero is not allowed\n");
    } else {
        result = num1 / num2;
        printf("Result: %lf\n", result);
    }

    return 0;
}


//--------------------------------------

//5: WAP to print ASCII value.

#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    printf("ASCII value of %c is %d\n", character, character);

    return 0;
}

//------------------------------------------

//6: WAP to multiply floating point numbers.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    double num1, num2, product;

    printf("Enter two floating-point numbers: ");
    scanf("%lf %lf", &num1, &num2);

    product = num1 * num2;
    printf("Product: %lf\n", product);

    return 0;
}

//---------------------------------------

//7: WAP to SWAP two vairables number by using third variable

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int num1, num2, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

//---------------------------------------

//8:WAP to SWAP two vairables number without using third variable.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

//--------------------------------------

//9: WAP to SWAP three vairable numbers without using third variables.

#include <stdio.h>

int main() {
    printf("Aryan Srivastav");
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Before swapping: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);

    num1 = num1 + num2 + num3;
    num2 = num1 - (num2 + num3);
    num3 = num1 - (num2 + num3);
    num1 = num1 - (num2 + num3);

    printf("After swapping: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);

    return 0;
}

//--------------------------------------------

//10: Wap to find the area of rectangle.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    double length, width, area;

    printf("Enter the length and width of the rectangle: ");
    scanf("%lf %lf", &length, &width);

    area = length * width;
    printf("Area of the rectangle: %lf\n", area);

    return 0;
}

//--------------------------------------

//11: WAP to find area of square

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    double side, area;

    printf("Enter the side length of the square: ");
    scanf("%lf", &side);

    area = side * side;
    printf("Area of the square: %lf\n", area);

    return 0;
}

//------------------------------------

//12: wap to find area of right angle triangle, isosceles triangle, any triangle with 3 sides.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    double base, height, area;

    printf("Enter the base and height of the right-angle triangle: ");
    scanf("%lf %lf", &base, &height);

    area = 0.5 * base * height;
    printf("Area of the right-angle triangle: %lf\n", area);

    return 0;
}

//-------------------------------------

//13: wap to find Area and Volume of Cube.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    double side, area, volume;

    printf("Enter the side length of the cube: ");
    scanf("%lf", &side);

    area = 6 * side * side;
    volume = side * side * side;

    printf("Surface area of the cube: %lf\n", area);
    printf("Volume of the cube: %lf\n", volume);

    return 0;
}

//------------------------------------

//14: wap to find area and volume of cuboid.

#include <stdio.h>

int main() {
    printf("Aryan srivastava");
    double length, width, height, area, volume;

    printf("Enter the length, width, and height of the cuboid: ");
    scanf("%lf %lf %lf", &length, &width, &height);

    area = 2 * (length * width + width * height + height * length);
    volume = length * width * height;

    printf("Surface area of the cuboid: %lf\n", area);
    printf("Volume of the cuboid: %lf\n", volume);

    return 0;
}

//-------------------------------------

//15: WAP to find the largest number using the Logical AND operator.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int num1, num2, num3, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    largest = (num1 > num2 && num1 > num3) ? num1 : ((num2 > num3) ? num2 : num3);

    printf("The largest number is: %d\n", largest);

    return 0;
}


//--------------------------------------

//16:WAP to validate the username and password entered by the user is correct or not using the predefined username and password.

#include <stdio.h>
#include <string.h>

int main() {
    printf("Aryan Srivastava");
    char username[20], password[20];

    // Define the predefined username and password
    char correctUsername[] = "user123";
    char correctPassword[] = "pass123";

    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Login failed. Please check your username and password.\n");
    }

    return 0;
}


//-------------------------------------------------

// 17: WAP to input the positive number from the user to perform the Left shift operator.

#include <stdio.h>

int main() {
    printf("Aryan Srivatava");
    int num, shift;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the number of positions to left shift: ");
    scanf("%d", &shift);

    int result = num << shift;
    printf("Result after left shift: %d\n", result);

    return 0;
}


//------------------------------------------------

//18: WAP to input the positive number from the user to perform the Right shift operator.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int num, shift;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the number of positions to right shift: ");
    scanf("%d", &shift);

    int result = num >> shift;
    printf("Result after right shift: %d\n", result);

    return 0;
}


//-----------------------------------------------

//19: WAP to perform the pre increment and pre decrement operator on two integers and print both original value and updated value.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Original values: num1 = %d, num2 = %d\n", num1, num2);

    --num1;
    ++num2;

    printf("After pre-increment and pre-decrement: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}


//------------------------------------------

//20: WAP to perform the post increment and post decrement operator on two integers and 
//print both original value and updated value.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Original values: num1 = %d, num2 = %d\n", num1, num2);

    num1--;
    num2++;

    printf("After post-increment and post-decrement: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}


//--------------------------------------------

// 21: WAP for an integer number and to check whether it is divisible by 9 or 7 using OR logical operator

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 9 == 0 || num % 7 == 0) {
        printf("%d is divisible by 9 or 7.\n", num);
    } else {
        printf("%d is not divisible by 9 or 7.\n", num);
    }

    return 0;
}

//--------------------------------------------

//22:WAP to identify gender in single character and print full gender (Ex: if input is 'M' or 'm' – it should print "Male").

#include <stdio.h>

int main() {
    printf("Aryan Srivastasva");
    char gender;

    printf("Enter a single character (M/m for Male, F/f for Female): ");
    scanf(" %c", &gender);

    if (gender == 'M' || gender == 'm') {
        printf("Male\n");
    } else if (gender == 'F' || gender == 'f') {
        printf("Female\n");
    } else {
        printf("Invalid input\n");
    }

    return 0;
}

//-----------------------------------------

// 23: Write a C program to print all natural numbers in reverse (from n to 1).

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int n;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Natural numbers in reverse order: ");
    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

//-------------------------------------------

//24: Write a C program to print all alphabets from a to z.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    char ch;

    printf("Alphabets from 'a' to 'z': ");
    for (ch = 'a'; ch <= 'z'; ch++) {
        printf("%c ", ch);
    }
    printf("\n");

    return 0;
}


//---------------------------------------------

//25: Write a CWrite a C program to print all natural numbers from 1 to n

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int n;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d: ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

//--------------------------------------------

//26: 26. program to print all even numbers between 1 to 100.

#include <stdio.h>

int main() {
    printf("Even numbers between 1 and 100: ");
    for (int i = 2; i <= 100; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}


//---------------------------------------------

//27: Write a C program to print all odd number between 1 to 100

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    printf("Odd numbers between 1 and 100: ");
    for (int i = 1; i <= 100; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}


//-------------------------------------

//28:Write a C program to find sum of all natural numbers between 1 to n

#include <stdio.h>

int main() {
    printf("ARyan Srivastava");
    int n, sum = 0;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of natural numbers from 1 to %d: %d\n", n, sum);

    return 0;
}


//------------------------------------------------

//29: Write a C program to find sum of all even numbers between 1 to n.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int n, sum = 0;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    printf("Sum of even numbers from 2 to %d: %d\n", n, sum);

    return 0;
}

//-------------------------------------------

//30: Write a C program to find sum of all odd numbers between 1 to n

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int n, sum = 0;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }

    printf("Sum of odd numbers from 1 to %d: %d\n", n, sum);

    return 0;
}


//---------------------------------------------

//31: Write a C program to print multiplication table of any number.

#include <stdio.h>

int main() {
    printf("Aryamn Srivastava");
    int num;

    printf("Enter a number to display its multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication table for %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}


//----------------------------------------------

//32: Write a C program to count number of digits in a number.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int num, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        num /= 10;
        count++;
    }

    printf("Number of digits: %d\n", count);

    return 0;
}


//------------------------------------------

//33: Write a C program to find first and last digit of a number

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int num, firstDigit, lastDigit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    lastDigit = num % 10;  // Get the last digit
    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;  // Get the first digit

    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);

    return 0;
}


//------------------------------------------

//34: Write a C program to find sum of first and last digit of a number.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int num, firstDigit, lastDigit, sum;

    printf("Enter an integer: ");
    scanf("%d", &num);

    lastDigit = num % 10;  // Get the last digit
    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;  // Get the first digit

    sum = firstDigit + lastDigit;

    printf("Sum of first and last digits: %d\n", sum);

    return 0;
}

//-----------------------------------------------

//35:Write a C program to swap first and last digits of a number.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int num, firstDigit, lastDigit, originalNumber;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNumber = num;
    lastDigit = num % 10;  // Get the last digit
    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;  // Get the first digit

    int newNumber = lastDigit;
    int temp = originalNumber / 10;

    while (temp >= 10) {
        newNumber = (newNumber * 10) + (temp % 10);
        temp /= 10;
    }

    newNumber = (newNumber * 10) + firstDigit;

    printf("Number after swapping first and last digits: %d\n", newNumber);

    return 0;
}


//----------------------------------------

//36: Write a C program to calculate sum of digits of a number.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int num, sum = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of the digits: %d\n", sum);

    return 0;
}

//----------------------------------------------

//37: Write a C program to calculate product of digits of a number

#include <stdio.h>

int main() {
    printf("AryanSrivastava");
    int num, product = 1, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        product *= digit;
        num /= 10;
    }

    printf("Product of the digits: %d\n", product);

    return 0;
}

//-----------------------------------------

//38:Write a C program to enter a number and print its reverse.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int num, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}


//------------------------------------------------

//39: Write a C program to check whether a number is palindrome or not.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int num, reversedNumber = 0, originalNumber, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNumber = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }

    if (originalNumber == reversedNumber) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}


//----------------------------------------------

//40: Write a C program to find frequency of each digit in a given integer.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int num, digit, count[10] = {0};

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    printf("Frequency of each digit in the number:\n");
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            printf("Digit %d: %d times\n", i, count[i]);
        }
    }

    return 0;
}


//-----------------------------------------------

//41: Write a C program to enter a number and print it in words

#include <stdio.h>

void printNumberInWords(int n) {
    printf("Aryan Srivastava");
    char *words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    if (n < 10) {
        printf("%s\n", words[n]);
    } else {
        printf("Number out of range (0-9)\n");
    }
}

int main() {
    int num;

    printf("Enter a number (0-9): ");
    scanf("%d", &num);

    printNumberInWords(num);

    return 0;
}

//--------------------------------------------

//42: Write a C program to print all ASCII character with their values.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    printf("ASCII characters with their values:\n");
    for (int i = 0; i <= 127; i++) {
        printf("ASCII value %d: %c\n", i, i);
    }

    return 0;
}


//-----------------------------------------------

//43: Write a C program to find power of a number using for loop

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    double base, exponent, result = 1.0;

    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    printf("%lf raised to the power %lf is %lf\n", base, exponent, result);

    return 0;
}


//--------------------------------------------

//44: Write a C program to find all factors of a number.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

//-------------------------------------------

//45: Write a C program to calculate factorial of a number.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int num;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}

//--------------------------------------------

//46: Write a C program to find HCF (GCD) of two numbers.

#include <stdio.h>

int findHCF(int num1, int num2) {
    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    }
    return num1;
}

int main() {
    printf("Aryan Srivastava");
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    int hcf = findHCF(num1, num2);

    printf("HCF (GCD) of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}


//------------------------------------------------

//47:Write a C program to find LCM of two numbers.

#include <stdio.h>

int findLCM(int num1, int num2) {
    int max = (num1 > num2) ? num1 : num2;
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            return max;
        }
        max++;
    }
}

int main() {
    printf("Aryan Srivastava");
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    int lcm = findLCM(num1, num2);

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}


//-------------------------------------

//48: Write a C program to check whether a number is Prime number or not.

#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    if (num <= 3) {
        return 1;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("Aryan Srivastava");
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}


//-------------------------------------------

//49: Write a C program to print all Prime numbers between 1 to n

#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    if (num <= 3) {
        return 1;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("Aryan Srivastava");
    int n;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d: ", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

//-----------------------------------------------

//50: Write a C program to find sum of all prime numbers between 1 to n

#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    if (num <= 3) {
        return 1;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("Aryan Srivastava");
    int n, sum = 0;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }

    printf("Sum of prime numbers between 1 and %d: %d\n", n, sum);

    return 0;
}


//------------------------------------------------

//51: Write a C program to find all prime factors of a number.

#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    if (num <= 3) {
        return 1;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("Aryan Srivastava");
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Prime factors of %d are: ", num);
    for (int i = 2; i <= num; i++) {
        if (num % i == 0 && isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

//----------------------------------------------

//52: Write a C program to check whether a number is Armstrong number or not.

#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return (result == num);
}

int main() {
    printf("Aryan Srivastava");
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}


//-----------------------------------------

//53: Write a C program to print all Armstrong numbers between 1 to n

#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return (result == num);
}

int main() {
    printf("Aryan Srivastava");
    int n;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d: ", n);
    for (int i = 1; i <= n; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}


//------------------------------------------------

//54: Write a C program to check whether a number is Perfect number or not

#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return (sum == num);
}

int main() {
    printf("Aryan Srivastava");
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPerfect(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}


//----------------------------------------------------------

//55: Write a C program to print all Perfect numbers between 1 to n

#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return (sum == num);
}

int main() {
    printf("Aryan Srivastava");
    int n;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Perfect numbers between 1 and %d: ", n);
    for (int i = 1; i <= n; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}


//--------------------------------------------------

//56: Write a C program to check whether a number is Strong number or not.

#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int isStrong(int num) {
    int originalNum, remainder, sum = 0;

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += factorial(remainder);
        originalNum /= 10;
    }

    return (sum == num);
}

int main() {
    printf("Aryan Srivastava");
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isStrong(num)) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }

    return 0;
}


//---------------------------------------------------------

//57: Write a C program to print all Strong numbers between 1 to n

#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int isStrong(int num) {
    int originalNum, remainder, sum = 0;

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += factorial(remainder);
        originalNum /= 10;
    }

    return (sum == num);
}

int main() {
    printf("Aryan Srivastava");
    int n;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    printf("Strong numbers between 1 and %d: ", n);
    for (int i = 1; i <= n; i++) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}


//-------------------------------------------

//58:Write a C program to print Fibonacci series up to n terms

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int n, a = 0, b = 1, next;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms: ", n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d", a);
        } else if (i == 2) {
            printf(", %d", b);
        } else {
            next = a + b;
            printf(", %d", next);
            a = b;
            b = next;
        }
    }

    printf("\n");

    return 0;
}


//-------------------------------------------------------------

//59: Write a C program to find one's complement of a binary number.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    char binary[32], onesComplement[32];
    int length;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    for (length = 0; binary[length] != '\0'; length++) {
        if (binary[length] == '0') {
            onesComplement[length] = '1';
        } else if (binary[length] == '1') {
            onesComplement[length] = '0';
        }
    }

    onesComplement[length] = '\0';

    printf("One's complement: %s\n", onesComplement);

    return 0;
}


//-----------------------------------------------------

//60:Write a C program to find two's complement of a binary number.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    char binary[32], twosComplement[32];
    int length;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Find the one's complement first
    for (length = 0; binary[length] != '\0'; length++) {
        if (binary[length] == '0') {
            twosComplement[length] = '1';
        } else if (binary[length] == '1') {
            twosComplement[length] = '0';
        }
    }
    twosComplement[length] = '\0';

    // Add 1 to the one's complement to get the two's complement
    int carry = 1;
    for (int i = length - 1; i >= 0; i--) {
        if (twosComplement[i] == '0' && carry == 1) {
            twosComplement[i] = '1';
            carry = 0;
        } else if (twosComplement[i] == '1' && carry == 1) {
            twosComplement[i] = '0';
        }
    }

    printf("Two's complement: %s\n", twosComplement);

    return 0;
}


//----------------------------------------------------------

//61: Write a C program to convert Binary to Octal number system

#include <stdio.h>
#include <math.h>

int convertBinaryToOctal(long long binary) {
    int octal = 0, decimal = 0, base = 0;

    while (binary != 0) {
        int digit = binary % 10;
        decimal += digit * pow(2, base);
        ++base;
        binary /= 10;
    }

    base = 1;
    while (decimal != 0) {
        octal += (decimal % 8) * base;
        decimal /= 8;
        base *= 10;
    }

    return octal;
}

int main() {
    printf("Aryan Srivastava");
    long long binary;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    int octal = convertBinaryToOctal(binary);

    printf("Octal equivalent: %d\n", octal);

    return 0;
}


//----------------------------------------------------

//62: Write a C program to convert Binary to Decimal number system.

#include <stdio.h>
#include <math.h>

int convertBinaryToDecimal(long long binary) {
    int decimal = 0, base = 0;

    while (binary != 0) {
        int digit = binary % 10;
        decimal += digit * pow(2, base);
        ++base;
        binary /= 10;
    }

    return decimal;
}

int main() {
    printf("Aryan Srivastava");
    long long binary;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    int decimal = convertBinaryToDecimal(binary);

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}


//---------------------------------------------------------

//63:Write a C program to convert Binary to Hexadecimal number system.

#include <stdio.h>
#include <math.h>

int convertBinaryToHexadecimal(long long binary) {
    int decimal = 0, base = 0;

    while (binary != 0) {
        int digit = binary % 10;
        decimal += digit * pow(2, base);
        ++base;
        binary /= 10;
    }

    char hexadecimal[100];
    int i = 0;

    while (decimal != 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hexadecimal[i] = remainder + '0';
        } else {
            hexadecimal[i] = remainder + 55;  // Convert to uppercase hex character
        }
        i++;
        decimal /= 16;
    }

    printf("Hexadecimal equivalent: 0x");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");

    return 0;
}

int main() {
    printf("Aryan Srivastava");
    long long binary;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    convertBinaryToHexadecimal(binary);

    return 0;
}


//-------------------------------------------------

//64: Write a C program to convert Octal to Binary number system.

#include <stdio.h>

int convertOctalToBinary(int octal) {
    long long binary = 0;
    int base = 1;

    while (octal != 0) {
        int remainder = octal % 10;
        octal /= 10;

        while (remainder > 0) {
            binary += (remainder % 2) * base;
            remainder /= 2;
            base *= 10;
        }
    }

    return binary;
}

int main() {
    printf('Aryan Srivastava');
    int octal;

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    long long binary = convertOctalToBinary(octal);

    printf("Binary equivalent: %lld\n", binary);

    return 0;
}

//----------------------------------------------------

//65: Write a C program to convert Octal to Decimal number system.

#include <stdio.h>

int convertOctalToDecimal(int octal) {
    int decimal = 0, base = 0;

    while (octal != 0) {
        int digit = octal % 10;
        decimal += digit * pow(8, base);
        ++base;
        octal /= 10;
    }

    return decimal;
}

int main() {
    printf('Aryan Srivastava');
    int octal;

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    int decimal = convertOctalToDecimal(octal);

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}

//------------------------------------------------------

//66: Write a C program to convert Octal to Hexadecimal number system

#include <stdio.h>

int convertOctalToDecimal(int octal) {
    int decimal = 0, base = 0;

    while (octal != 0) {
        int digit = octal % 10;
        decimal += digit * pow(8, base);
        ++base;
        octal /= 10;
    }

    return decimal;
}

void convertDecimalToHexadecimal(int decimal) {
    char hexadecimal[100];
    int i = 0;

    while (decimal != 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hexadecimal[i] = remainder + '0';
        } else {
            hexadecimal[i] = remainder + 55;  // Convert to uppercase hex character
        }
        i++;
        decimal /= 16;
    }

    printf("Hexadecimal equivalent: 0x");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}

int main() {
    printf("Aryan Srivastava");
    int octal;

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    int decimal = convertOctalToDecimal(octal);

    convertDecimalToHexadecimal(decimal);

    return 0;
}

//-------------------------------------------------------

//67:Write a C program to convert Decimal to Binary number system

#include <stdio.h>

void convertDecimalToBinary(int decimal) {
    long long binary = 0;
    int base = 1;

    while (decimal > 0) {
        int remainder = decimal % 2;
        binary += remainder * base;
        decimal /= 2;
        base *= 10;
    }

    printf("Binary equivalent: %lld\n", binary);
}

int main() {
    printf("Aryan Srivastava");
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    convertDecimalToBinary(decimal);

    return 0;
}


//-----------------------------------------------------------

//68: Write a C program to convert Decimal to Octal number system

#include <stdio.h>

void convertDecimalToOctal(int decimal) {
    int octal = 0, base = 1;

    while (decimal > 0) {
        int remainder = decimal % 8;
        octal += remainder * base;
        decimal /= 8;
        base *= 10;
    }

    printf("Octal equivalent: %d\n", octal);
}

int main() {
    printf("Aryan Srivastava");
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    convertDecimalToOctal(decimal);

    return 0;
}


//----------------------------------------------------------

//69: Write a C program to convert Decimal to Hexadecimal number system.

#include <stdio.h>

void convertDecimalToHexadecimal(int decimal) {
    char hexadecimal[100];
    int i = 0;

    while (decimal != 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hexadecimal[i] = remainder + '0';
        } else {
            hexadecimal[i] = remainder + 55;  // Convert to uppercase hex character
        }
        i++;
        decimal /= 16;
    }

    printf("Hexadecimal equivalent: 0x");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}

int main() {
    printf("Aryan Srivastava");
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    convertDecimalToHexadecimal(decimal);

    return 0;
}

//------------------------------------------------------

//70: Write a C program to convert Hexadecimal to Binary number system.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    char hexadecimal[1000];
    long long binary = 0;
    int i = 0;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hexadecimal);

    while (hexadecimal[i]) {
        switch (hexadecimal[i]) {
            case '0':
                strcat(binary, "0000");
                break;
            case '1':
                strcat(binary, "0001");
                break;
            case '2':
                strcat(binary, "0010");
                break;
            case '3':
                strcat(binary, "0011");
                break;
            case '4':
                strcat(binary, "0100");
                break;
            case '5':
                strcat(binary, "0101");
                break;
            case '6':
                strcat(binary, "0110");
                break;
            case '7':
                strcat(binary, "0111");
                break;
            case '8':
                strcat(binary, "1000");
                break;
            case '9':
                strcat(binary, "1001");
                break;
            case 'A':
            case 'a':
                strcat(binary, "1010");
                break;
            case 'B':
            case 'b':
                strcat(binary, "1011");
                break;
            case 'C':
            case 'c':
                strcat(binary, "1100");
                break;
            case 'D':
            case 'd':
                strcat(binary, "1101");
                break;
            case 'E':
            case 'e':
                strcat(binary, "1110");
                break;
            case 'F':
            case 'f':
                strcat(binary, "1111");
                break;
            default:
                printf("Invalid hexadecimal digit %c.\n", hexadecimal[i]);
                return 1;
        }
        i++;
    }

    printf("Binary equivalent: %s\n", binary);

    return 0;
}

//------------------------------------------------------------

//71: Write a C program to convert Hexadecimal to Octal number system.

#include <stdio.h>

int main() {
    printf("Aryanb Srivastava");
    char hexadecimal[1000];
    long long binary = 0;
    int i = 0;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hexadecimal);

    while (hexadecimal[i]) {
        switch (hexadecimal[i]) {
            case '0':
                strcat(binary, "0000");
                break;
            case '1':
                strcat(binary, "0001");
                break;
            case '2':
                strcat(binary, "0010");
                break;
            case '3':
                strcat(binary, "0011");
                break;
            case '4':
                strcat(binary, "0100");
                break;
            case '5':
                strcat(binary, "0101");
                break;
            case '6':
                strcat(binary, "0110");
                break;
            case '7':
                strcat(binary, "0111");
                break;
            case '8':
                strcat(binary, "1000");
                break;
            case '9':
                strcat(binary, "1001");
                break;
            case 'A':
            case 'a':
                strcat(binary, "1010");
                break;
            case 'B':
            case 'b':
                strcat(binary, "1011");
                break;
            case 'C':
            case 'c':
                strcat(binary, "1100");
                break;
            case 'D':
            case 'd':
                strcat(binary, "1101");
                break;
            case 'E':
            case 'e':
                strcat(binary, "1110");
                break;
            case 'F':
            case 'f':
                strcat(binary, "1111");
                break;
            default:
                printf("Invalid hexadecimal digit %c.\n", hexadecimal[i]);
                return 1;
        }
        i++;
    }

    // Convert the binary to octal
    long long binaryNum = atoi(binary);
    long long octal = 0, base = 1;
    while (binaryNum != 0) {
        int digit = binaryNum % 8;
        octal += digit * base;
        binaryNum /= 8;
        base *= 10;
    }

    printf("Octal equivalent: %lld\n", octal);

    return 0;
}



//**********************Pattern Questions***************************

//1. Star pattern programs - Write a C program to print the given star patterns

//Program to Print Pyramid Star Pattern:

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int n;
    printf("Enter the number of rows for the Pyramid Star Pattern: ");
    scanf("%d");

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


//----------------------------------------------

//Program to Print Hollow Pyramid Star Pattern:

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int n;
    printf("Enter the number of rows for the Hollow Pyramid Star Pattern: ");
    scanf("%d");

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

//---------------------------------------

//Program to Print Inverted Pyramid Star Pattern:

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int n;
    printf("Enter the number of rows for the Inverted Pyramid Star Pattern: ");
    scanf("%d");

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

//-----------------------------------------------------

//Program to Print Hollow Inverted Pyramid Star Pattern:

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int n;
    printf("Enter the number of rows for the Hollow Inverted Pyramid Star Pattern: ");
    scanf("%d");

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

//----------------------------------------------------

//Program to Print Half Diamond Star Pattern:

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int n;
    printf("Enter the number of rows for the Half Diamond Star Pattern: ");
    scanf("%d");

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


//----------------------------------------------------

//Program to Print Mirrored Half Diamond Star Pattern:

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int n;
    printf("Enter the number of rows for the Mirrored Half Diamond Star Pattern: ");
    scanf("%d");

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


//========================Number Pattern=========================

//2. Number pattern programs - Write a C program to print the given number patterns

//Square number patterns
// 11111
// 11111
// 11111
// 11111
// 11111

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int n;
    printf("Enter the number of rows for the Square Number Pattern: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("1");
        }
        printf("\n");
    }

    return 0;
}

// ------------------------------------------------------


// Number pattern 1
// 11111
// 00000
// 11111
// 00000
// 11111

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int n;
    printf("Enter the number of rows for Number Pattern 1: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i + j) % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}


//---------------------------------------------------

// Number pattern 2
// 01010
// 01010
// 01010
// 01010
// 01010

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int n;
    printf("Enter the number of rows for Number Pattern 2: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}


//---------------------------------------------------

// Number pattern 3
// 11111
// 10001
// 10001
// 10001
// 11111

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int n;
    printf("Enter the number of rows for Number Pattern 3: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || j == 1 || i == n || j == n) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}


//---------------------------------------------------

// Number pattern 4
// 11111
// 11111
// 11011
// 11111
// 11111

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int n;
    printf("Enter the number of rows for Number Pattern 4: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == n / 2 + 1 || j == n / 2 + 1) {
                printf("0");
            } else {
                printf("1");
            }
        }
        printf("\n");
    }

    return 0;
}


//----------------------------------------------

// Number pattern 5
// 10101
// 01010
// 10101
// 01010
// 10101

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int n;
    printf("Enter the number of rows for Number Pattern 5: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i + j) % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}


//========================If-Else Exercise=========================

//1. Write a C program to find maximum between two numbers.

#include <stdio.h>

int main() {
    printf("ARyan Srivastava");
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("Maximum number is %d\n", num1);
    } else {
        printf("Maximum number is %d\n", num2);
    }

    return 0;
}


//2: Write a C program to find maximum between three numbers.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int max = num1;

    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    printf("Maximum number is %d\n", max);

    return 0;
}


//3:Write a C program to check whether a number is negative, positive or zero.

#include <stdio.h>

int main() {
    printf("Aryan Srivastasva");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Positive number\n");
    } else if (num < 0) {
        printf("Negative number\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}


//4: Write a C program to check whether a number is divisible by 5 and 11 or not

#include <stdio.h>

int main() {
    printf("Aryan Srivastasva");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 11 == 0) {
        printf("Divisible by 5 and 11\n");
    } else {
        printf("Not divisible by both 5 and 11\n");
    }

    return 0;
}


//5: Write a C program to check whether a number is even or odd

#include <stdio.h>

int main() {
    printf('Aryan Srivastava');
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Even number\n");
    } else {
        printf("Odd number\n");
    }

    return 0;
}


//6: Write a C program to check whether a year is leap year or not

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }

    return 0;
}


//7: Write a C program to check whether a character is alphabet or not

#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Aryan Srivastava");
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isalpha(ch)) {
        printf("Alphabet\n");
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}


//8: Write a C program to input any alphabet and check whether it is vowel or consonant.

#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Aryan Srivastava");
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    ch = tolower(ch); // Convert to lowercase for easier vowel check

    if (isalpha(ch)) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}


//9:Write a C program to input any character and check whether it is alphabet, digit or special charecter

#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Aryan Srivastava");
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isalpha(ch)) {
        printf("Alphabet\n");
    } else if (isdigit(ch)) {
        printf("Digit\n");
    } else {
        printf("Special character\n");
    }

    return 0;
}


//10: Write a C program to check whether a character is uppercase or lowercase alphabet

#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Aryan Srivastava");
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isalpha(ch)) {
        if (isupper(ch)) {
            printf("Uppercase alphabet\n");
        } else {
            printf("Lowercase alphabet\n");
        }
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}


//11: Write a C program to input week number and print week day.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int weekNumber;
    printf("Enter week number (1-7): ");
    scanf("%d", &weekNumber);

    if (weekNumber >= 1 && weekNumber <= 7) {
        switch (weekNumber) {
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
            case 7:
                printf("Sunday\n");
                break;
        }
    } else {
        printf("Invalid week number\n");
    }

    return 0;
}



//12: Write a C program to input month number and print number of days in that month.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int monthNumber;
    printf("Enter month number (1-12): ");
    scanf("%d", &monthNumber);

    if (monthNumber >= 1 && monthNumber <= 12) {
        int days;

        if (monthNumber == 4 || monthNumber == 6 || monthNumber == 9 || monthNumber == 11) {
            days = 30;
        } else if (monthNumber == 2) {
            days = 28;
        } else {
            days = 31;
        }

        printf("Number of days in month %d: %d\n", monthNumber, days);
    } else {
        printf("Invalid month number\n");
    }

    return 0;
}


//13: Write a C program to count total number of notes in given amount

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);

    int notes_2000, notes_500, notes_200, notes_100, notes_50, notes_20, notes_10, notes_5, notes_1;
    
    notes_2000 = amount / 2000;
    amount = amount % 2000;
    
    notes_500 = amount / 500;
    amount = amount % 500;
    
    notes_200 = amount / 200;
    amount = amount % 200;
    
    notes_100 = amount / 100;
    amount = amount % 100;
    
    notes_50 = amount / 50;
    amount = amount % 50;
    
    notes_20 = amount / 20;
    amount = amount % 20;
    
    notes_10 = amount / 10;
    amount = amount % 10;
    
    notes_5 = amount / 5;
    notes_1 = amount % 5;

    printf("Number of notes:\n");
    printf("Rs 2000: %d\n", notes_2000);
    printf("Rs 500: %d\n", notes_500);
    printf("Rs 200: %d\n", notes_200);
    printf("Rs 100: %d\n", notes_100);
    printf("Rs 50: %d\n", notes_50);
    printf("Rs 20: %d\n", notes_20);
    printf("Rs 10: %d\n", notes_10);
    printf("Rs 5: %d\n", notes_5);
    printf("Rs 1: %d\n", notes_1);

    return 0;
}


//14: Write a C program to input month number and print number of days in that month.

#include <stdio.h>

int main() {
    printf("ARyan Srivastava");
    int monthNumber;
    printf("Enter month number (1-12): ");
    scanf("%d", &monthNumber);

    if (monthNumber >= 1 && monthNumber <= 12) {
        int days;

        if (monthNumber == 4 || monthNumber == 6 || monthNumber == 9 || monthNumber == 11) {
            days = 30;
        } else if (monthNumber == 2) {
            days = 28;
        } else {
            days = 31;
        }

        printf("Number of days in month %d: %d\n", monthNumber, days);
    } else {
        printf("Invalid month number\n");
    }

    return 0;
}


//15: Write a C program to count total number of notes in given amount.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);

    int notes_2000, notes_500, notes_200, notes_100, notes_50, notes_20, notes_10, notes_5, notes_1;
    
    notes_2000 = amount / 2000;
    amount = amount % 2000;
    
    notes_500 = amount / 500;
    amount = amount % 500;
    
    notes_200 = amount / 200;
    amount = amount % 200;
    
    notes_100 = amount / 100;
    amount = amount % 100;
    
    notes_50 = amount / 50;
    amount = amount % 50;
    
    notes_20 = amount / 20;
    amount = amount % 20;
    
    notes_10 = amount / 10;
    amount = amount % 10;
    
    notes_5 = amount / 5;
    notes_1 = amount % 5;

    printf("Number of notes:\n");
    printf("Rs 2000: %d\n", notes_2000);
    printf("Rs 500: %d\n", notes_500);
    printf("Rs 200: %d\n", notes_200);
    printf("Rs 100: %d\n", notes_100);
    printf("Rs 50: %d\n", notes_50);
    printf("Rs 20: %d\n", notes_20);
    printf("Rs 10: %d\n", notes_10);
    printf("Rs 5: %d\n", notes_5);
    printf("Rs 1: %d\n", notes_1);

    return 0;
}



//16: Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int angle1, angle2, angle3;
    printf("Enter three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("Valid triangle\n");
    } else {
        printf("Invalid triangle\n");
    }

    return 0;
}

//17: Write a C program to input all sides of a triangle and check whether triangle is valid or not.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int side1, side2, side3;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        printf("Valid triangle\n");
    } else {
        printf("Invalid triangle\n");
    }

    return 0;
}


//18: Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.

#include <stdio.h>

int main() {
    printf("Aryan Srivastava");
    int side1, side2, side3;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3) {
        printf("Equilateral triangle\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Isosceles triangle\n");
    } else {
        printf("Scalene triangle\n");
    }

    return 0;
}


//19: Write a C program to find all roots of a quadratic equation

#include <stdio.h>
#include <math.h>

int main() {
    printf("Aryan Srivastava");
    double a, b, c, discriminant, root1, root2;

    printf("Enter the coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1 = %.2lf and Root 2 = %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else {
        printf("No real roots\n");
    }

    return 0;
}


//20: Write a C program to calculate profit or loss

#include <stdio.h>

int main() {
    printf("Aryan Srivsatava");
    float costPrice, sellingPrice;

    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    if (costPrice < sellingPrice) {
        printf("Profit: %.2f\n", sellingPrice - costPrice);
    } else if (costPrice > sellingPrice) {
        printf("Loss: %.2f\n", costPrice - sellingPrice);
    } else {
        printf("No profit, no loss\n");
    }

    return 0;
}


//21: Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics 
// and Computer. Calculate percentage and grade according to following:
// Percentage >= 90% : Grade A
// Percentage >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
// Percentage < 40% : Grade F

#include <stdio.h>

int main() {
    int physics, chemistry, biology, mathematics, computer;
    printf("Enter marks in Physics, Chemistry, Biology, Mathematics, and Computer: ");
    scanf("%d %d %d %d %d", &physics, &chemistry, &biology, &mathematics, &computer);

    float totalMarks = physics + chemistry + biology + mathematics + computer;
    float percentage = (totalMarks / 500) * 100;

    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90) {
        printf("Grade A\n");
    } else if (percentage >= 80) {
        printf("Grade B\n");
    } else if (percentage >= 70) {
        printf("Grade C\n");
    } else if (percentage >= 60) {
        printf("Grade D\n");
    } else if (percentage >= 40) {
        printf("Grade E\n");
    } else {
        printf("Grade F\n");
    }

    return 0;
}


//22: Write a C program to input basic salary of an employee and calculate its Gross salary according 
// to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95

#include <stdio.h>

int main() {
    printf('Aryan Srivastasva');
    float basicSalary, grossSalary, hra, da;

    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary <= 10000) {
        hra = 0.2 * basicSalary;
        da = 0.8 * basicSalary;
    } else if (basicSalary <= 20000) {
        hra = 0.25 * basicSalary;
        da = 0.9 * basicSalary;
    } else {
        hra = 0.3 * basicSalary;
        da = 0.95 * basicSalary;
    }

    grossSalary = basicSalary + hra + da;
    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}

