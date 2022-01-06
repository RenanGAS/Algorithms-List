#include <stdio.h>

void count_phrases_words(char str1[])
{
    int countW = 1;
    int countP = 0;
    int punctuation[3] = {33, 46, 63};

    for (int i = 0; i < 50; i++)
    {
        if (str1[i] == ' ')
        {
            countW++;
        }
        else
        {
            for (int j = 0; j < 3; j++)
            {
                if (str1[i] == punctuation[j])
                {
                    countP++;
                }
            }
        }
    }

    printf("\n=> Número de palavras: %d, Número de frases: %d\n\n", countW, countP);
}

int main()
{
    char str1[50] = "Exercicio dois da prova dois de. Algo! ritimos?";

    printf("\nDada a string str1[50] = \"%s\":\n", str1);

    count_phrases_words(str1);

    return 0;
}