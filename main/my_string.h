#/*int my_strcmp(const char* str1, const char* str2); // str�� ��
int my_strncmp(const char* str1, const char* str2, size_t num); // str�� �� �տ��� num ����ŭ ��
char* my_strcpy(char* dest, const char* src); // src�� dest�� ����
void* my_memcpy(void* dest, const void* src, size_t num); // src���� num��ŭ dest�� ����
void* my_memmove(void* dest, const void* src, size_t num); // src���� num��ŭ dest�� �̵�
char* my_strchr(const char* str, int character); // character�� ��ġ�ϴ� ������ �ּ� ��ȯ
char* my_strstr(const char* str1, const char* str2); // str ��ġ ��ȯ
size_t my_strlen(const char* str); // str�� ���� ��ȯ*/

int my_strcmp(const char* str1, const char* str2)
{
	int i = 0;
	int value = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] != str2[i]) {
			value = 1;
			break;
		}
		else value = 0;
		i++;
	}
	return value;
}

int my_strncmp(const char* str1, const char* str2, size_t num)
{
	int i = 0;
	int value = 0;
	while (i != num - 1) { // num�� ����ŭ �ݺ�
		if (str1[i] != str2[i]) {
			value = 1;
			break;
		}
		else value = 0;
		i++;
	}
	return value;
}

char* my_strcpy(char* dest, const char* src)
{
	int i = 0;
	while (src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	//while (*dest++ = *src++);
	return dest;
}

void* my_memcpy(void* dest, const void* src, size_t num)
{
	char* d = (char*)dest; // void -> char������ ĳ����
	char* s = (char*)src;
	int i = 0;
	while (i != num-1) { //  num�� ����ŭ �ݺ�
		d[i] = s[i]; // src�� ���� dset
		i++;
	}
	return 0;
}

void* my_memmove(void* dest, const void* src, size_t num)
{
	char* d = (char*)dest; // void -> char ������ ĳ����
	char* s = (char*)src;
	int i = 0;
	char temp = 0; // �ӽ� ����
	while (i != num - 1) { 
		i++;
		temp = *s;
		*d = temp;
		s++;
		d++;
	}
	return 0;
}

char* my_strchr(const char* str, int character)
{
	if (*str == 0 && character == 0)
	{
		return 0;
	}
	while (*str != '\0') // ��Ʈ���� ���������� �ݺ��ؼ� 1�� ����
	{
		if (*str == character) // ĳ���Ϳ� ��ġ�ϸ� str �ּҰ� ����
		{
			return (char*)str;
		}
		str++;
	}
	return 0;
}

char* my_strstr(const char* str1, const char* str2)
{
	if (*str1 == 0 && *str2 == 0)
	{
		return 0;
	}
	int i = 0;
	while (*str1 != '\0') // ��Ʈ���� ���������� �ݺ�
	{
		while (*str2 != '\0') // ���� ����
		{
			if (str1[i] != str2[i]) // 1�� ������Ű�� �ٸ� ���� ã��
				break;
			i++;
		}
		if (str2[i] == '\0')
			return (char*)str1;
		str1++;
	}
	return 0;
}

size_t my_strlen(const char* str)
{
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}
