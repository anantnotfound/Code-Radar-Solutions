#include <stdio.h>
int main()
{
    char name[100], hobby[100];
    int age;
    scanf("%s %d", &name, &age);
    scanf("%s", &hobby);
    printf("Name: %s\n", name);
    prinf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
    return 0;
    
}