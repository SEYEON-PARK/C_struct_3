#include <stdio.h>

struct nickname
{
	char name[100];
	int age;
};
int main(void)
{
	struct nickname new;
	printf("�̸��� �Է��Ͻÿ�. : ");
	scanf_s("%s", new.name, sizeof(new.name));
	printf("���̸� �Է��Ͻÿ�. : ");
	scanf_s("%d", &new.age);

	printf("����� �̸��� %s�̰�, ���̴� %d�Դϴ�. \n", new.name, new.age);

	return 0;
}