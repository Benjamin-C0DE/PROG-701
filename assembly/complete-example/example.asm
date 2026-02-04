section .data
  num1    dq 15
  num2    dq  4
  result  dq 0

section .text
  global _start

_start:
  ; Load first number
  mov rax, [num1] ; RAX = 15

  ; Add second number
  add rax, [num2] ; RAX = 15 + 4 = 19

  ; Multiply by 2
  mov rbx, 2
  mul rbx         ; RAX = 19 * 2 = 38

  ; Store final result
  mov [result], rax

  ; Exit program
  mov rax, 60
  mov rdi, [result]
  syscall
 
