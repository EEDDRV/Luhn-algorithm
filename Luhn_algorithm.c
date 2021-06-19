#include <stdbool.h>
#include <string.h>
bool checkLuhn(char *array)
{
	int nDigits = strlen(array);
	int nSum = 0;
	bool isSecond = false;
	for(int i = nDigits - 1; i >= 0; i--)
	{
		int d = array[i] - '0';
		if (isSecond == true)
			d = d * 2;
		nSum += d / 10;
		nSum += d % 10;
		isSecond = !isSecond;
	}
	return (nSum % 10 == 0);
}