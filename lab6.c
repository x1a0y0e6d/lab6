#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
    int birthYear;       
    int currentYear;      
    int age;              

    printf("¬ведите год рождени€: ");
    scanf("%d", &birthYear);

    printf("¬ведите текущий год: ");
    scanf("%d", &currentYear);

  
    age = currentYear - birthYear;
 
    if (age < 0) {
        printf("ќшибка: год рождени€ больше текущего!\n");
        return 1;
    }

    
    if ((age % 10 == 1) && (age % 100 != 11)) {
        printf("%d год\n", age);
    }
    else if ((age % 10 >= 2 && age % 10 <= 4) && !(age % 100 >= 12 && age % 100 <= 14)) {
        printf("%d года\n", age);
    }
    else {
        printf("%d лет\n", age);
    }

    return 0;
}
