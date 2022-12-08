#include <stdio.h>
#include <string.h>

//typedef char user[25];

typedef struct {
    char name[25];
    char password[12];
    int id;
} User;

void main() {
    // typedef = reserved keyword that gives an existing datatype a "nickname"
    User user1 = {"Bro", "password", 12312};
    User user2 = {"Broh", "padssword", 22312};
    
    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);
    
}