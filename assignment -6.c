#include <stdio.h>
int main() 
{
    int userID,password;
    printf("Enter your userID and password:");
    scanf("%d%d",&userID,&password);
    if (userID!=101)
        printf("User not found");
    else if (password == 4321)
        printf("Login successful");
    else
        printf("Incorrect password");
}