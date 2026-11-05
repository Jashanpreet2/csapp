/* Problem statement
Using only bit-level and logical operations, write a C expression that is equivalent
to x ~~ y. In other words, it will return 1 when x and y are equal and 0 otherwise.
*/

int equal(int a, int b) {
    return !(a ^ b);
}

int main() {
    signed int a = -21;
    printf("%d\n", a>>1);
    return 0;
}