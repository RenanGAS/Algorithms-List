#include <stdio.h>

int main()
{
    int countC1 = 0;
    int countC2 = 0;
    int countC3 = 0;
    int countC4 = 0;
    int vNull = 0;
    int vBlank = 0;
    int varInt = 7;

    printf("\nEleições 2022\n");
    printf("\nOpções:\n\n");
    printf("1 - Fulano\n2 - Ciclano\n3 - Beltrano\n4 - Renan\n5 - Voto nulo\n6 - Voto em branco\n");
    printf("\nDigite seu voto e dê licença para um outro eleitor:\n");

    while (varInt)
    {
        printf("\n> ");
        scanf(" %d", &varInt);

        if (varInt == 1)
        {
            countC1 += 1;
        }
        else if (varInt == 2)
        {
            countC2 += 1;
        }
        else if (varInt == 3)
        {
            countC3 += 1;
        }
        else if (varInt == 4)
        {
            countC4 += 1;
        }
        else if (varInt == 5)
        {
            vNull += 1;
        }
        else if (varInt == 6)
        {
            vBlank += 1;
        }
    }

    int array[4] = {countC1, countC2, countC3, countC4};
    int arraysize = sizeof(array) / 4;
    int newsize = arraysize;
    int val = 0;
    int valnext = 0;

    for (int i = 0; i < arraysize - 1; i++)
    {
        for (int j = 1; j < newsize; j++)
        {
            if (array[j] < array[j - 1])
            {
                valnext = array[j];
                array[j] = array[j - 1];
                array[j - 1] = valnext;
            }
        }
        newsize -= 1;
    }

    printf("\nResultado:\n");

    for (int i = 0; i < 4; i++)
    {
        if (array[i] == countC1)
        {
            printf("\n=>Fulano: %d", array[i]);
        }
        else if (array[i] == countC2)
        {
            printf("\n=>Ciclano: %d", array[i]);
        }
        else if (array[i] == countC3)
        {
            printf("\n=>Beltrano: %d", array[i]);
        }
        else if (array[i] == countC4)
        {
            printf("\n=>Renan: %d", array[i]);
        }
    }

    printf("\nVotos nulos: %d", vNull);
    printf("\nVotos em branco: %d\n\n", vBlank);
    printf("--------------------------");
    printf("\nPresidente da República (2022-2026): %s com %d votos\n\n");

        return 0;
}