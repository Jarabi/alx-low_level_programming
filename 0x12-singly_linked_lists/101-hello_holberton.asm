section .data
	hello db 'Hello, Holberton!', 0
	nl db 10, 0 ; new line character and null terminator

section .text
	global main

	extern printf

main:
	; push the format string and argument onto the stack
	push qword hello
	call printf

	; push the new line character and null terminator onto the stack
	push qword nl
	call printf

	; clean up the stack
	add rsp, 16

	; return 0
	mov eax, 0
	ret
