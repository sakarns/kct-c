#include <stdio.h>
#include<string.h>
#include<conio.h>

int main() {
// First part of the pattern
for (char c = 'A'; c <= 'G'; c++) {
    printf("%c", c);
}
for (char c = 'F'; c >= 'A'; c--) {
    printf("%c", c);
}
printf("\n");

// Second part of the pattern
for (char c = 'A'; c <= 'F'; c++) {
    printf("%c", c);
}
for (char c = 'F'; c >= 'A'; c--) {
    printf("%c", c);
}
printf("\n");

// Third part of the pattern
for (char c = 'A'; c <= 'E'; c++) {
    printf("%c", c);
}
for (char c = 'E'; c >= 'A'; c--) {
    printf("\t");
}
for (char c = 'E'; c >= 'A'; c--) {
    printf("%c", c);
}
printf("\n");

// Fourth part of the pattern
for (char c = 'A'; c <= 'D'; c++) {
    printf("%c", c);
}
for (char c = 'D'; c >= 'A'; c--) {
    printf("\t");
}
for (char c = 'D'; c >= 'A'; c--) {
    printf("%c", c);
}
printf("\n");

// Fifth part of the pattern
for (char c = 'A'; c <= 'C'; c++) {
    printf("%c", c);
}
for (char c = 'C'; c >= 'A'; c--) {
    printf("\t");
}
for (char c = 'C'; c >= 'A'; c--) {
    printf("%c", c);
}
printf("\n");

// Sixth part of the pattern
for (char c = 'A'; c <= 'B'; c++) {
    printf("%c", c);
}
for (char c = 'B'; c >= 'A'; c--) {
    printf("\t");
}
for (char c = 'B'; c >= 'A'; c--) {
    printf("%c", c);
}
printf("\n");

// Last part of the pattern
printf("A\t");
for (char c = ' '; c < '7'; c++) {
    printf(" ");
}
printf("\tA\n");

return 0;
}
