#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Start program
 * @argc: Count argument
 * @argv: Array argument
 * Return: (int) Success
 */
int main(int argc, char *argv[])
{
	int val;
	int result = 0;
	int coins[] = { 25, 10, 5, 2, 1 };
	int progression = 0;
	int pieces = 0;

	if (argc != 2 || is_number(argv[1]) == 0)
	{
		printf("Error\n");
		return (1);
	}
	val = atoi(argv[1]);
	if (val < 0)
	{
		printf("0\n");
		return (0);
	}
	progression = val;
	result = count_pieces(coins, val, &progression, &pieces);

	printf("%d\n", result);
	return (0);
}

/**
 * count_pieces - Count pieces Recursion
 * @coins: List coins
 * @val: Valeur
 * @p: Progression
 * @pieces: Progression pieces
 * Return: (int) Nb of pieces
 */
/* Thanks internet */
int count_pieces(int coins[], int val, int *p, int *pieces)
{
	int i, coin;

	if (*p == 0)
	{
		return (*pieces);
	}
	for (i = 0; i < 5; i++)
	{
		coin = coins[i];
		if (*p >= coin)
		{
			*pieces += (*p / coin);
			*p = *p % coin;
		}
	}
	return (count_pieces(coins, val, p, pieces));
}

/*
 * OLD Function created, not adapted for large number
 * 8/9 pts
int count_pieces(int coins[], int val, int *p, long int *pieces)
{
	int i, coin, r = 0;
	long int check;

	if (*p == 0)
	{
		return (*pieces);
	}

	for (i = 0; i < 5; i++)
	{
		coin = coins[i];
		check = *p - coin;
		printf("- p: %d\n", *p);
		printf("Check %d:%d\n", coin, check);
		if (check == 0)
		{
			*pieces += 1;
			return (*pieces);
		}
		else if (check < 0)
		{
			r = -1;
			continue;
		}
		else
		{
			r = 0;
			*pieces += 1;
			break;
		}
	}
	if (r == -1)
	{
		return (0);
	}
	*p = check;
	return (count_pieces(coins, val, p, pieces));
}
*/

/**
 * is_number - Check is a number valid
 * @s: argument
 * Return: (int) check
 */
int is_number(char *s)
{
	int i = 0;

	if (s[0] == '-')
	{
		i = 1;
	}

	for (; s[i] != '\0'; i++)
	{
		if (isdigit(s[i]) == 0)
			return (0);
	}
	return (1);
}
