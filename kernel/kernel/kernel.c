#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <kernel/tty.h>

void kernel_test(uint32_t a, uint32_t b)
{
	//putchar(i+49);
	putchar(a);
	putchar(b);
}

void kernel_early(void)
{
	terminal_initialize();
}

void kernel_main(void)
{
	printf("Hello, kernel World - Tiny OS!\n");
}