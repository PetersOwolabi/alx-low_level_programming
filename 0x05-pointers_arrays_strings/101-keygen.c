#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const size_t charset_len = sizeof(charset) - 1;
    srand(time(NULL));

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % charset_len];
    }
    password[PASSWORD_LENGTH] = '\0';

    printf("Generated password: %s\n", password);

    return 0;
}
