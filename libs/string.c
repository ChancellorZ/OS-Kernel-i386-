#include "string.h"

inline void memcpy(uint8_t *dest, const uint8_t *src, uint32_t len)
{
	for(; len != 0; len--){
		*dest++ = *src++;
	}
}

inline void memset(void *dest, uint8_t val, uint32_t len)
{
	uint8_t *dst = (uint8_t *)dest;

	for(;len !=0;len--){
		*dst++ = val;
	}
}

inline void bzero(void *dest, uint32_t len)
{
	memset(dest, 0, len);
}

inline int strcmp(const char *str1, const char *str2)
{
	while(*str1 == *str2)
	{
		if(*str1 == '\0')
			return 0;
		
		str1++;
		str2++;
	}
	return *str1 - *str2;
}

inline char *strcpy(char *dest, const char *src)
{
	if((dest == NULL) || (src == NULL))
		
		return NULL;
	
	char *ret = dest;

	while((*dest++ = *src++) != '\0');

	return ret;
}

inline char *stract(char *dest, const char *src)
{
	char *tmp = dest;

	while (*dest)

		  dest++;
	
	while ((*dest++ = *src++) != '\0');

	return 	tmp;
}

int strlen(const char *src)
{
	int i=0;
	
	while ((*src++) != '\0')
		
		i++;

	return i;
}
