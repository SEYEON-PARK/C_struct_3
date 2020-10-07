#include <stdio.h>

struct nickname
{
	char name[100];
	int age;
};
int main(void)
{
	struct nickname new;
	printf("이름을 입력하시오. : ");
	scanf_s("%s", new.name, sizeof(new.name));
	printf("나이를 입력하시오. : ");
	scanf_s("%d", &new.age);

	printf("당신의 이름은 %s이고, 나이는 %d입니다. \n", new.name, new.age);

	return 0;
}