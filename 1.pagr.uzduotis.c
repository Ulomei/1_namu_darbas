//LSP numeris 2213720
//gabriele.drungilaite@mif.stud.vu.lt
//Uzduoties nr. - 1
//Varianto nr. - 13
//Salyga - Ivedineti sveiku skaiciu seka tol, kol ji nemazeja. Isvesti sekos nariu skaiciu ir ju aritmetini vidurki.

#include <stdio.h>
#include <stdlib.h>

int main()
{   int amount = 1, x, previous_x, y, sum;
    double average;
    printf("Si programa isves sekos nariu skaiciu ir ju aritmetini vidurki.\n");
    printf("Iveskite sveiku skaiciu seka (ji baigsis, kai kitas ivestas skaicius bus mazesnis, nei pries tai buves). Skaiciu gali sudaryti ne daugiau nei 9 skaitmenys.\n\n");

    while (scanf("%9d", &x) != 1 || getchar() != '\n') //nuskenuoja duota skaiciu ir patikrina ar tai tinkama ivestis
    {
        printf("Ivestis netinkama. Priimami tik sveiki skaiciai, kuriuos sudaro ne daugiau nei devyni skaitmenys.\n");
        while (getchar() != '\n')
            ;
    }
    sum = x;

    do{ //toliau skenuoja seka
        previous_x = x;
        if (scanf("%9d", &y) != 1 || getchar() != '\n') //nuskenuoja duota skaiciu ir patikrina ar tai tinkama ivestis
        {
            printf("Ivestis netinkama. Priimami tik sveiki skaiciai, kuriuos sudaro ne daugiau nei devyni skaitmenys.\n");
            while (getchar() != '\n')
                ;
        }
        else
        {
            x = y;
            sum += x;
            ++amount;
        }
    }while (previous_x <= x);
    printf("Duomenys nuskaityti sekmingai\n");

    sum -= x; //sumazina suma, nes do while nuskaito ir skaiciu kuris uzbaigia seka
    --amount; //sumazina amount, nes do while nuskaito ir skaiciu kuris uzbaigia seka
    average = (double) sum / amount; //apskaiciuoja vidruki
    printf("Seka sudare %d nariai ir ju vidurkis yra %lf", amount, average); // atsakymo isvedimas
    return 0;
}
