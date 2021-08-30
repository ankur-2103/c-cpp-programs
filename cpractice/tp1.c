#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

//structure definitions and protoypes
typedef struct info_s {
	char firstname[100], lastname[100];
	short fname_len, lname_len;
} info_t;

void helper(info_t *);

size_t * (*f1)(const char *s[100]);

char * (*f2)(char *dest, const char *src);

char * (*f3)(char *string);

size_t Strinlen(const char *s[100]){
    return strlen(s);
}

char concatenate(char *dest[100], const char *src[100]){
    f3 = &upperCase;
    return (*f3)(struct(dest, src));
}

char upperCase(char *string){
    return toupper(string);
}

int main(int argc, char *argv[]) {
    info_t info;
    char name, lastname;
    printf("Enter first name: ");
    scanf("%s", &info.firstname);
    printf("Enter last name: ");
    scanf("%s", &info.lastname);
    f1 = &Strinlen;
    f2 = &concatenate;
    info.fname_len = (*f1)(info.firstname);
    info.lname_len = (*f1)(info.lastname);
    printf("First name: %s", info.firstname);
    printf("\nLast name: %s", info.lastname);
    printf("\nLength of first name: %d", info.fname_len);
    printf("\nLength of last name: %d", info.lname_len);
    helper(&info);
    return 0;

}

//definition of helper function
void helper(info_t *info)
{	
	info->firstname = (*f2)(&info->firstname, &info->lastname);
    printf("modified First name: %s", info->firstname);
    printf("\nLast name: %s", info->lastname);
    printf("\nLength of first name: %d", info->fname_len);
    printf("\nLength of last name: %d", info->lname_len);
}