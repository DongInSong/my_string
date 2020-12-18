#include <stdio.h>
#include <string.h>
#include "my_string.h";

int main()
{
	int select;
	while (1) {
	EXIT:
		puts("");
		puts("\t───────────────────────────────────────────");
		puts("\t1.my_strcmp\t4.my_memcpy\t7.my_strstr\n\n\t2.my_strncmp\t5.my_memmove\t8.my_strlen\n\n\t3.my_strcpy\t6.my_strchr");
		puts("\t───────────────────────────────────────────");
		printf("\t입력: ");
		scanf_s("%d", &select);
		switch (select)
		{
		case 1: // my_strcmp
		{
			int a;
			while (1) {
				printf("\n1번: my_strcmp\n2번: strcmp\n3번: 나가기\n\n입력: ");
				scanf_s("%d", &a);
				switch (a) {
				case 1:
				{
					char str1[10] = "strcmp";
					char str2[10] = "my_strcmp";
					printf("\n\tstr1 is '%s'\n\tstr2 is '%s'\n", str1, str2);
					int my_result = my_strcmp(str1, str2); // str 비교, 값이 같으면 0 다르면 1
					if (my_result == 0) // 값이 같음
					{
						printf("\t'%s' and '%s' is same.\n\tValue: %d\n", str1, str2, my_result);
					}
					else // 값이 다름
						printf("\t'%s' and '%s' is NOT same.\n\tValue: %d\n", str1, str2, my_result);
					puts("");
					break;
				}
				case 2:
				{
					char str1[10] = "strcmp";
					char str2[10] = "my_strcmp";
					printf("\n\tstr1 is '%s'\n\tstr2 is '%s'\n", str1, str2);
					int result = strcmp(str1, str2); // 원본 strcmp 와 비교
					if (result == 0) // 값이 같음
					{
						printf("\t'%s' and '%s' is same.\n\tValue: %d\n", str1, str2, result);
					}
					else // 값이 다름
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
				printf("\n1번: my_strncmp\n2번: strncmp\n3번: 나가기\n\n입력: ");
				scanf_s("%d", &a);
				switch (a) {
				case 1:
				{
					char str1[50] = "my_strncmp";
					char str2[50] = "my_strncmp";
					printf("\n\tstr1 is '%s'\n\tstr2 is '%s'\n", str1, str2);
					int my_result = my_strncmp(str1, str2, 5); // str 비교, 값이 같으면 0 다르면 1
					if (my_result == 0) // 값이 같음
					{
						printf("\tFirst 5 characters of '%s' and '%s' is same.\n\tValue: %d\n", str1, str2, my_result);
					}
					else // 값이 다름
						printf("\tFirst 5 characters of '%s' and '%s' is NOT same.\n\tValue: %d\n", str1, str2, my_result);
					puts("");
					break;
				}
				case 2:
				{
					char str1[50] = "my_strncmp";
					char str2[50] = "my_strncmp";
					printf("\n\tstr1 is '%s'\n\tstr2 is '%s'\n", str1, str2);
					int result = strncmp(str1, str2, 5); // 원본 strncmp 와 비교
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
				printf("\n1번: my_strcpy\n2번: strcpy\n3번: 나가기\n\n입력: ");
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
				printf("\n1번: my_memcpy\n2번: memcpy\n3번: 나가기\n\n입력: ");
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
				printf("\n1번: my_memmove\n2번: memmove\n3번: 나가기\n\n입력: ");
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
				printf("\n1번: my_strchr\n2번: strchr\n3번: 나가기\n\n입력: ");
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
				printf("\n1번: my_strstr\n2번: strstr\n3번: 나가기\n\n입력: ");
				scanf_s("%d", &a);
				switch (a) {
				case 1:
				{
					char str[50] = "my_strstr.png";
					char* my_result = my_strstr(str, ".");
					printf("\n\tString is '%s'", str);
					if (my_strcmp(my_result + 1, "png") == 0) // ".png" 에서 1의 값을 더하여 "png"만 추출
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
					if (my_strcmp(result + 1, "png") == 0) // ".png" 에서 1의 값을 더하여 "png"만 추출
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
				printf("\n1번: my_strlen\n2번: strlen\n3번: 나가기\n\n입력: ");
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
