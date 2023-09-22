global	main
extern	printf
main:
	mov edi, text
	xor eax,eax
	call printf
	mov eax, 0
	ret
text db 'Hello Holberton', 0xa, 0
