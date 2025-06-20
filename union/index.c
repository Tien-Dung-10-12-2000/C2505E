#include <stdio.h>

union MyUnion
{
    int Integer;
    float Float;
    char Character;
};
int main(int argc, char const *argv[])
{
    union MyUnion myUnion;
    myUnion.Integer = 1;
    printf("--%d\n", myUnion.Integer);
    printf("--%f\n", myUnion.Float);
    printf("--%c\n", myUnion.Character);

    myUnion.Float = 3.1459;
    printf("--%d\n", myUnion.Integer);
    printf("--%f\n", myUnion.Float);
    printf("--%c\n", myUnion.Character);

    myUnion.Character = 'a';
    printf("--%d\n", myUnion.Integer);
    printf("--%f\n", myUnion.Float);
    printf("--%c\n", myUnion.Character);

    return 0;
}
