section .data
	hello_message db 'Hello, Holberton', 10, 0
	hello_message_len equ $ - hello_message

section .text
	extern printf
	global main

main:
	push rbp

	mov rdi, hello_message
	call printf

	pop rbp

	mov rax, 0
	ret
