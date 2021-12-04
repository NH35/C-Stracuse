#include <stdio.h>
int nothing;
unsigned long long int recorcnt = 0;
void main(int argc, char *argv[])
{
    for (int i = 2; i < 54648941875478793; i += 2)
    {

        unsigned long long int cnt = 0;
        unsigned long long int nombreDepart = i;
        unsigned long long int nombre = nombreDepart;
        while (nombre != 1)
        {

            if (nombre % 2 == 0)
            {
                nombre = nombre / 2;
            }
            else
            {
                nombre = nombre * 3 + 1;
            }
            cnt++;
        }
        if (cnt > recorcnt)
        {
            printf("Nombre de Depart %lld. Nombre Operation : %lld\n", nombreDepart, cnt);
            recorcnt = cnt;
        }
    }
    scanf("%d", &nothing);
}