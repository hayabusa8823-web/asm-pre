global _ft_write
extern  ___error

section .text
_ft_write:
;write関数：ssize_t write(int fildes, const void *buf, size_t nbyte);

;rdi: fd / rsi *buf / rdx byte
;初期化
  xor rax, rax
;raxにMacOSにおけるwrite関数の番号を格納し、syscall
  mov rax, 0x2000004
  syscall
;syscallがエラーしたら、キャリーフラグが立つ：jcで判断する
  jc  error
  ret 

error:
  push rax
  call ___error
  pop  qword[rax]
  mov rax, -1
  ret