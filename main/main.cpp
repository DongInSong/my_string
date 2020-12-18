#include <stdio.h>
#include <string.h>
#include "my_string.h";

int main()
{
	int select;
	while (1) {
	EXIT:
		puts("");
		puts("\t��������������������������������������������������������������������������������������");
		puts("\t1.my_strcmp\t4.my_memcpy\t7.my_strstr\n\n\t2.my_strncmp\t5.my_memmove\t8.my_strlen\n\n\t3.my_strcpy\t6.my_strchr");
		puts("\t��������������������������������������������������������������������������������������");
		printf("\t�Է�: ");
		scanf_s("%d", &select);
		switch (select)
		{
		case 1: // my_strcmp
		{
			int a;
			while (1) {
				printf("\n1��: my_strcmp\n2��: strcmp\n3��: ������\n\n�Է�: ");
				scanf_s("%d", &a);
				switch (a) {
				case 1:
				{
					char str1[10] = "strcmp";
					char str2[10] = "my_strcmp";
					printf("\n\tstr1 is '%s'\n\tstr2 is '%s'\n", str1, str2);
					int my_result = my_strcmp(str1, str2); // str ��, ���� ������ 0 �ٸ��� 1
					if (my_result == 0) // ���� ����
					{
						printf("\t'%s' and '%s' is same.\n\tValue: %d\n", str1, str2, my_result);
					}
					else // ���� �ٸ�
						printf("\t'%s' and '%s' is NOT same.\n\tValue: %d\n", str1, str2, my_result);
					puts("");
					break;
				}
				case 2:
				{
					char str1[10] = "strcmp";
					char str2[10] = "my_strcmp";
					printf("\n\tstr1 is '%s'\n\tstr2 is '%s'\n", str1, str2);
					int result = strcmp(str1, str2); // ���� strcmp �� ��
					if (result == 0) // ���� ����
					{
						printf("\t'%s' and '%s' is same.\n\tValue: %d\n", str1, str2, result);
					}
					else // ���� �ٸ�
						printf("\t'%s' and '%s' is NOT same.\n\tValue: %d\n", str1, str2, result);
					puts("");
					break;
				}
				case 3:
					goto EXIT;
				}
			}
		}
		break;

		case 2: // my_strncmp
		{
			int a;
			while (1) {
				printf("\n1��: my_strncmp\n2��: strncmp\n3��: ������\n\n�Է�: ");
				scanf_s("%d", &a);
				switch (a) {
				case 1:
				{
					char str1[50] = "my_strncmp";
					char str2[50] = "my_strncmp";
					printf("\n\tstr1 is '%s'\n\tstr2 is '%s'\n", str1, str2);
					int my_result = my_strncmp(str1, str2, 5); // str ��, ���� ������ 0 �ٸ��� 1
					if (my_result == 0) // ���� ����
					{
						printf("\tFirst 5 characters of '%s' and '%s' is same.\n\tValue: %d\n", str1, str2, my_result);
					}
					else // ���� �ٸ�
						printf("\tFirst 5 characters of '%s' and '%s' is NOT same.\n\tValue: %d\n", str1, str2, my_result);
					puts("");
					break;
				}
				case 2:
				{
					char str1[50] = "my_strncmp";
					char str2[50] = "my_strncmp";
					printf("\n\tstr1 is '%s'\n\tstr2 is '%s'\n", str1, str2);
					int result = strncmp(str1, str2, 5); // ���� strncmp �� ��
					if (result == 0)
					{
						printf("\tFirst 5 characters of '%s' and '%s' is same.\n\tValue: %d\n", str1, str2, result);
					}
					else
						printf("\tFirst 5 characters of '%s' and '%s' is NOT same.\n\tValue: %d\n", str1, str2, result);
					puts("");
					break;
				}
				case 3:
					goto EXIT;
				}
			}
		}
		break;

		case 3: // my_strcpy
		{
			int a;
			while (1) {
				printf("\n1��: my_strcpy\n2��: strcpy\n3��: ������\n\n�Է�: ");
				scanf_s("%d", &a);
				switch (a) {
				case 1:
				{
					char dest[10] = "strcpy";
					char src[10] = "my_strcpy";
					printf("\n\tBefore\n\tDestination is '%s'\n\tSource is '%s'\n", dest, src);
					my_strcpy(dest, src);
					printf("\n\tAfter\n\tDestination is '%s'\n\tSource is '%s'\n", dest, src);
					puts("");
					break;
				}
				case 2:
				{
					char dest[10] = "strcpy";
					char src[10] = "my_strcpy";
					printf("\n\tBefore\n\tDestination is '%s'\n\tSource is '%s'\n", dest, src);
					strcpy_s(dest, src);
					printf("\n\tAfter\n\tDestination is '%s'\n\tSource is '%s'\n", dest, src);
					puts("");
					break;
				}
				case 3:
					goto EXIT;
				}
			}
		}
		break;

		case 4: // my_memcpy
		{
			int a;
			while (1) {
				printf("\n1��: my_memcpy\n2��: memcpy\n3��: ������\n\n�Է�: ");
				scanf_s("%d", &a);
				switch (a) {
				case 1:
				{
					char dest[10] = "memcpy";
					char src[10] = "my_memcpy";
					printf("\n\tBefore\n\tDestination is '%s'\n\tSource is '%s'\n", dest, src);
					my_memcpy(dest, src, 10);
					printf("\n\tAfter\n\tDestination is '%s'\n\tSource is '%s'\n", dest, src);
					puts("");
					break;
				}
				case 2:
				{
					char dest[10] = "memcpy";
					char src[10] = "my_memcpy";
					printf("\n\tBefore\n\tDestination is '%s'\n\tSource is '%s'\n", dest, src);
					memcpy(dest, src, 10);
					printf("\n\tAfter\n	Destination is '%s'\n\tSource is '%s'\n", dest, src);
					puts("");
					break;
				}
				case 3:
					goto EXIT;
				}
			}
		}
		case 5: // my_memmove
		{
			int a;
			while (1) {
				printf("\n1��: my_memmove\n2��: memmove\n3��: ������\n\n�Է�: ");
				scanf_s("%d", &a);
				switch (a) {
				case 1:
				{
					char dest[50] = "memmove";
					char* src = dest + 3;
					printf("\n\tBefore\n\tDestination is '%s'\n\tSource is '%s'\n", dest, src);
					my_memmove(dest, src, 6);
					printf("\n\tAfter\n\tDestination is '%s'\n\tSource is '%s'\n", dest, src);
					puts("");
					break;
				}
				case 2:
				{
					char dest[50] = "memmove";
					char* src = dest + 3;
					printf("\n\tBefore\n\tDestination is '%s'\n\tSource is '%s'\n", dest, src);
					memmove(dest, src, 6);
					printf("\n\tAfter\n\tDestination is '%s'\n\tSource is '%s'\n", dest, src);
					puts("");
					break;
				}
				case 3:
					goto EXIT;
				}
			}
		}
		case 6: // my_strchr
		{
			int a;
			while (1) {
				printf("\n1��: my_strchr\n2��: strchr\n3��: ������\n\n�Է�: ");
				scanf_s("%d", &a);
				switch (a) {
				case 1:
				{
					char str[50] = "my_strchr and strchr";
					char* my_result = NULL;
					printf("\n\tBefore\n\tString is '%s'\n", str);
					my_result = my_strchr(str, 's');
					printf("\n\tAfter\n\tString is '%s'\n", my_result);
					puts("");
					break;
				}
				case 2:
				{
					char str[50] = "my_strchr and strchr";
					char* result = NULL;
					printf("\n\tBefore\n\tString is '%s'\n", str);
					result = strchr(str, 's');
					printf("\n\tAfter\n\tString is '%s'\n", result);
					puts("");
					break;
				}
				case 3:
					goto EXIT;
				}
			}
		}
		break;

		case 7: // my_strstr
		{
			int a;
			while (1) {
				printf("\n1��: my_strstr\n2��: strstr\n3��: ������\n\n�Է�: ");
				scanf_s("%d", &a);
				switch (a) {
				case 1:
				{
					char str[50] = "my_strstr.png";
					char* my_result = my_strstr(str, ".");
					printf("\n\tString is '%s'", str);
					if (my_strcmp(my_result + 1, "png") == 0) // ".png" ���� 1�� ���� ���Ͽ� "png"�� ����
					{
						printf("\n\tFile type: '%s'\n", strstr(str, ".") + 1);
					}
					puts("");
					break;
				}
				case 2:
				{
					char str[50] = "my_strstr.png";
					char* result = strstr(str, ".");
					printf("\n\tString is '%s'", str);
					if (my_strcmp(result + 1, "png") == 0) // ".png" ���� 1�� ���� ���Ͽ� "png"�� ����
					{
						printf("\n\tFile type: '%s'\n", strstr(str, ".") + 1);
					}
					puts("");
					break;
				}
				case 3:
					goto EXIT;
				}
			}
		}
		break;

		case 8: // my_strlen
		{
			int a;
			while (1) {
				printf("\n1��: my_strlen\n2��: strlen\n3��: ������\n\n�Է�: ");
				scanf_s("%d", &a);
				switch (a) {
				case 1:
				{
					char str[50] = "my_strlen and strlen";
					printf("\n\tString length is '%d'\n", my_strlen(str));
					puts("");
					break;
				}
				case 2:
				{
					char str[50] = "my_strlen and strlen";
					printf("\n\tString length is '%d'\n", strlen(str));
					puts("");
					break;
				}
				case 3:
					goto EXIT;
				}
			}
		}
		break;

		default:
			break;
		}
	}
}
