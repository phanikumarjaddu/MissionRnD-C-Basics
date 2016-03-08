/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/

int isOlder(char *dob1, char *dob2) {
	int i;
	for (i = 6; i <= 9; i++)
	{
		if (dob1[i] == dob2[i])
			continue;
		else
		{
			if ((dob1[i]-dob2[i]) > 0)
				return 1;
			else
				return 2;
		}
	}
	for (i = 3; i <= 4; i++)
	{
		if (dob1[i] == dob2[i])
			continue;
		else
		{
			if ((dob1[i] - dob2[i]) > 0)
				return 1;
			else
				return 2;
		}
	}

	for (i = 0; i <= 1; i++)
	{
		if (dob1[i] == dob2[i])
			continue;
		else
		{
			if ((dob1[i] - dob2[i]) > 0)
				return 1;
			else
				return 2;
		}
	}

	return 0;
}
