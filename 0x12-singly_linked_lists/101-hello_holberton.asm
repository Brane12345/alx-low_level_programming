section .data
	message db 'Hello, Holberton',0
	format db '%s',10,0

section .text
	global asm_start

	extern printf

asm_start:
	; call printf with message and format arguments
	mov rdi, format
	mov rsi, message
	xor rax, rax
	call printf

	; exit
	xor rax, rax
	mov al, 60
	syscall
