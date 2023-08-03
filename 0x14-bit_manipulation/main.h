#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *b);
void decToBinary(int n);
void print_binary(unsigned long int n);
int *get_bits(int n, int bitswanted);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int a, unsigned long int b);
int clear_bit(unsigned long int *n, unsigned int index);
int FlippedCount(int a, int b);
int _atoi(const char *s);
int _putchar(char c);
int get_endianness(void);

#endif
