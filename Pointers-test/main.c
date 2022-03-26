#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct President
{
	char name[50];
	int votes;
	bool eliminated;
} president;

typedef struct Voter
{
	char CIN[15];
	bool alreadyVoted;
} voter;



int main()
{
	int pNum, vNum;
	do
	{
		printf("Merci de entrer le nombre des presidents nominees (minimum 5): ");
		scanf("%i", &pNum);
	}
	while (pNum < 5); // minimum 5

	do
	{
		printf("Merci de entrer le nombre des electeurs (minimum 10): ");
		scanf("%i", &vNum);
	}
	while (vNum < 10); // minimum 10

	president Presidents[pNum];
	voter Voters[vNum];

	printf("Merci de entrer les noms des presidents nominees.\n");
	for (int i = 0; i < pNum; i++)
	{
		printf("Le president nominee N %i: ", i + 1);
		scanf("%s", &Presidents[i].name);
		Presidents[i].votes = 0;
		Presidents[i].eliminated = false;
	}

	printf("Merci de entrer les CIN des electeurs.\n");
	for (int i = 0; i < vNum; i++)
	{
		printf("le CIN d'electeur N %i: ", i + 1);
		scanf("%s", &Voters[i].CIN);
		Voters[i].alreadyVoted = false;
	}

	bool everyoneEqual = false;
	int howManyDidVote = 0;

	do
	{
		for (int i = 0; i < vNum; i++)
		{
			Voters[i].alreadyVoted = false;
		}

		for (int i = 0; i < pNum; i++)
		{
			Presidents[i].votes = 0;
		}

		char vTemp[15];
		char pTemp[50];
		howManyDidVote = 0;
		printf("Premier tour:\n");
		do
		{
			printf("Merci de entrer votre CIN pour vote.\nCIN:");
			scanf("%s", vTemp);
			for (int i = 0; i < vNum; i++)
			{
				if (strcmp(vTemp, Voters[i].CIN) == 0 && Voters[i].alreadyVoted)
				{
					printf("Tu es deja vote.\n");
					break;
				}
				else if (strcmp(vTemp, Voters[i].CIN) == 0)
				{
					while(1)
					{
						printf("Merci de entrer le nom de president: ");
						scanf("%s", pTemp);
						for (int j = 0; j < pNum; j++)
						{
							if (strcmp(pTemp, Presidents[j].name) == 0)
							{
								Presidents[j].votes++;
								Voters[i].alreadyVoted = true;
								break;
							}
						}
						if (Voters[i].alreadyVoted)
						{
							break;
						}
						else
						{
							printf("Ce nom n'est pas valid.\n");
						}
					}

				}
			}


			for (int i = 0; i < vNum; i++)
			{
				if (Voters[i].alreadyVoted == false)
				{
					howManyDidVote = 0;
					break;
				}
				howManyDidVote++;
			}
		}
		while (howManyDidVote != vNum);

		everyoneEqual = false;
		bool equal = true;
		for (int i = 0; i < pNum - 1; i++)
		{
			if (Presidents[i].votes != Presidents[i + 1].votes)
			{
				equal = false;
			}
		}
		if (equal)
		{
			everyoneEqual = true;
		}
	}
	while (everyoneEqual);

	int percentage;

	for (int i = 0; i < pNum; i++)
	{
		percentage = (Presidents[i].votes * 100) / vNum;
		if (percentage < 15)
		{
			Presidents[i].eliminated = true;
		}
	}

	for (int i = 0; i < pNum; i++)
	{
		if(!Presidents[i].eliminated)
		{
			printf("Le president nominee dans le deuxieme tour: %s\n", Presidents[i].name);
		}
	}

	// Le deuxieme tour

	do
	{
		printf("Le deuxieme tour.\n");

		for (int i = 0; i < vNum; i++)
		{
			Voters[i].alreadyVoted = false;
		}

		for (int i = 0; i < pNum; i++)
		{
			Presidents[i].votes = 0;
		}

		char vTemp[15];
		char pTemp[50];
		howManyDidVote = 0;

		do
		{
			printf("Merci de entrer votre CIN pour vote.\nCIN:");
			scanf("%s", vTemp);
			for (int i = 0; i < vNum; i++)
			{
				if (strcmp(vTemp, Voters[i].CIN) == 0 && Voters[i].alreadyVoted)
				{
					printf("Tu es deja vote.\n");
					break;
				}
				else if (strcmp(vTemp, Voters[i].CIN) == 0)
				{
					while(1)
					{
						printf("Merci de entrer le nom de president: ");
						scanf("%s", pTemp);
						for (int j = 0; j < pNum; j++)
						{
							if (Presidents[j].eliminated && strcmp(pTemp, Presidents[j].name) == 0)
							{
								printf("Ce president est deja elemine dans le premier tour.\n");
								continue;
							}
							else if (strcmp(pTemp, Presidents[j].name) == 0)
							{
								Presidents[j].votes++;
								Voters[i].alreadyVoted = true;
								break;
							}
						}
						if (Voters[i].alreadyVoted)
						{
							break;
						}
					}

				}
			}


			for (int i = 0; i < vNum; i++)
			{
				if (Voters[i].alreadyVoted == false)
				{
					howManyDidVote = 0;
					break;
				}
				howManyDidVote++;
			}
		}
		while (howManyDidVote != vNum);

		everyoneEqual = false;
		bool equal = true;

		for (int i = 0; i < pNum - 1; i++)
		{
			if (Presidents[i].eliminated)
			{
				for (int j = 0; j < pNum; j++)
				{
					if (!Presidents[j].eliminated)
					{
						Presidents[i].votes = Presidents[j].votes;
						break;
					}
				}
			}
		}

		for (int i = 0; i < pNum - 1; i++)
		{
			if (Presidents[i].votes != Presidents[i + 1].votes)
			{
				equal = false;
			}
		}
		if (equal)
		{
			everyoneEqual = true;
		}
	}
	while(everyoneEqual);

	int min = vNum;
	for (int i = 0; i < pNum; i++)
	{
		if (!Presidents[i].eliminated && Presidents[i].votes < min)
		{
			min = Presidents[i].votes;
		}
	}

	for (int i = 0; i < pNum; i++)
	{
		if (!Presidents[i].eliminated && Presidents[i].votes == min)
		{
			Presidents[i].eliminated = true;
		}
	}
	for (int i = 0; i < pNum; i++)
	{
		if (!Presidents[i].eliminated)
		{
			printf("Le president nominee dans troisieme tour: %s\n", Presidents[i].name);
		}
	}

	// Le troiseme tour

	char theWinner[50];
	bool twoOrMoreHaveSameVotes = false;

	do
	{
		printf("Le troiseme tour.\n");

		for (int i = 0; i < vNum; i++)
		{
			Voters[i].alreadyVoted = false;
		}

		for (int i = 0; i < pNum; i++)
		{
			Presidents[i].votes = 0;
		}

		char vTemp[15];
		char pTemp[50];
		howManyDidVote = 0;

		do
		{
			printf("Merci de entrer votre CIN pour vote.\nCIN:");
			scanf("%s", vTemp);
			for (int i = 0; i < vNum; i++)
			{
				if (strcmp(vTemp, Voters[i].CIN) == 0 && Voters[i].alreadyVoted)
				{
					printf("Tu es deja vote.\n");
					break;
				}
				else if (strcmp(vTemp, Voters[i].CIN) == 0)
				{
					while(1)
					{
						printf("Merci de entrer le nom de president: ");
						scanf("%s", pTemp);
						for (int j = 0; j < pNum; j++)
						{
							if (Presidents[j].eliminated && strcmp(pTemp, Presidents[j].name) == 0)
							{
								printf("Ce president est deja elemine.\n");
								continue;
							}
							else if (strcmp(pTemp, Presidents[j].name) == 0)
							{
								Presidents[j].votes++;
								Voters[i].alreadyVoted = true;
								break;
							}
						}
						if (Voters[i].alreadyVoted)
						{
							break;
						}
					}

				}
			}


			for (int i = 0; i < vNum; i++)
			{
				if (Voters[i].alreadyVoted == false)
				{
					howManyDidVote = 0;
					break;
				}
				howManyDidVote++;
			}
		}
		while (howManyDidVote != vNum);

		everyoneEqual = false;
		bool equal = true;

		for (int i = 0; i < pNum; i++)
		{
			if (Presidents[i].eliminated)
			{
				for (int j = 0; j < pNum; j++)
				{
					if (!Presidents[j].eliminated)
					{
						Presidents[i].votes = Presidents[j].votes;
						break;
					}
				}
			}
		}

		for (int i = 0; i < pNum - 1; i++)
		{
			if (Presidents[i].votes != Presidents[i + 1].votes)
			{
				equal = false;
			}
		}
		if (equal)
		{
			everyoneEqual = true;
		}

		int max = 0;
		int howManyDidGetMax = 0;
		twoOrMoreHaveSameVotes = false;
		for (int i = 0; i < pNum; i++)
		{
			if (!Presidents[i].eliminated && Presidents[i].votes > max)
			{
				max = Presidents[i].votes;
			}
		}

		for (int i = 0; i < pNum; i++)
		{
			if (!Presidents[i].eliminated && Presidents[i].votes == max)
			{
				howManyDidGetMax++;
				strcpy(theWinner , Presidents[i].name);
			}
		}

		if (howManyDidGetMax > 1)
		{
			twoOrMoreHaveSameVotes = true;
		}
	}
	while(everyoneEqual || twoOrMoreHaveSameVotes);

	printf("\n\n\n\nLe president elu par le peuple est: %s\n\n", theWinner);


	return 0;
}
