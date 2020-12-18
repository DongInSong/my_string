#/*int my_strcmp(const char* str1, const char* str2); // str의 비교
int my_strncmp(const char* str1, const char* str2, size_t num); // str의 맨 앞에서 num 수만큼 비교
char* my_strcpy(char* dest, const char* src); // src를 dest에 복사
void* my_memcpy(void* dest, const void* src, size_t num); // src부터 num만큼 dest에 복사
void* my_memmove(void* dest, const void* src, size_t num); // src부터 num만큼 dest에 이동
char* my_strchr(const char* str, int character); // character와 일치하는 문자의 주소 반환
char* my_strstr(const char* str1, const char* str2); // str 위치 반환
size_t my_strlen(const char* str); // str의 길이 반환*/

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
	while (i != num - 1) { // num의 수만큼 반복
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
	char* d = (char*)dest; // void -> char형으로 캐스팅
	char* s = (char*)src;
	int i = 0;
	while (i != num-1) { //  num의 수만큼 반복
		d[i] = s[i]; // src의 값은 dset
		i++;
	}
	return 0;
}

void* my_memmove(void* dest, const void* src, size_t num)
{
	char* d = (char*)dest; // void -> char 형으로 캐스팅
	char* s = (char*)src;
	int i = 0;
	char temp = 0; // 임시 저장
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
	while (*str != '\0') // 스트링의 마지막까지 반복해서 1씩 증가
	{
		if (*str == character) // 캐릭터와 일치하면 str 주소값 리턴
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
	while (*str1 != '\0') // 스트링의 마지막까지 반복
	{
		while (*str2 != '\0') // 위와 동일
		{
			if (str1[i] != str2[i]) // 1씩 증가시키며 다른 값을 찾기
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
