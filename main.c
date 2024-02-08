#include <stdio.h>
#include "encrypt.h"
#include "checksum.h"
int main()
{
    char s[] = "скажи друг и проходи";
    encrypt (s);
    printf("Зашифровано в '%s'\n",s);
    printf("контрольная сумма '%i'\n",checksum(s));
    encrypt(s);
    printf("расшифровано обратно '%s'\n",s);
    printf("контрольная сумма '%i'\n",checksum(s));
    return 0;
}