#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
    int birthYear;       
    int currentYear;      
    int age;              

    printf("������� ��� ��������: ");
    scanf("%d", &birthYear);

    printf("������� ������� ���: ");
    scanf("%d", &currentYear);

  
    age = currentYear - birthYear;
 
    if (age < 0) {
        printf("������: ��� �������� ������ ��������!\n");
        return 1;
    }

    
    if ((age % 10 == 1) && (age % 100 != 11)) {
        printf("%d ���\n", age);
    }
    else if ((age % 10 >= 2 && age % 10 <= 4) && !(age % 100 >= 12 && age % 100 <= 14)) {
        printf("%d ����\n", age);
    }
    else {
        printf("%d ���\n", age);
    }

    return 0;
}
