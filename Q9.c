// Q9. Implement a C program for number conversions (decimal, binary, octal, hexadecimal).

#include <stdio.h>

void decimalToHexadecimal(int n);
void decimalToOctal(int n);
void decimalToBinary(int n);

int main()
{

	int decimal;
	printf("Enter a decimal number: ");
	scanf("%d", &decimal);
	decimalToBinary(decimal);
	printf("\n");
	decimalToOctal(decimal);
	printf("\n");
	decimalToHexadecimal(decimal);
	return 0;
}

void decimalToBinary(int n)
{

	int binaryNum[32];
	int i = 0;

	while (n > 0)
	{
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}

	printf("Binary: ");

	for (int j = i - 1; j >= 0; j--)
	{
		printf("%d", binaryNum[j]);
	}
};

void decimalToOctal(int n)
{
	int octalNum[32];
	int i = 0;

	while (n != 0)
	{
		octalNum[i] = n % 8;
		n = n / 8;
		i++;
	}

	printf("Octal: ");

	for (int j = i - 1; j >= 0; j--)
	{
		printf("%d", octalNum[j]);
	}
};

void decimalToHexadecimal(int n)
{

	char hexaNum[32];
	int i = 0;

	while (n != 0)
	{
		int temp = n % 16;
		if (temp < 10)
		{
			hexaNum[i] = temp + 48;
		}
		else
		{
			hexaNum[i] = temp + 55;
		}
		n = n / 16;
		i++;
	}

	printf("Hexadecimal: ");
	for (int j = i - 1; j >= 0; j--)
	{
		printf("%c", hexaNum[j]);
	}
};
