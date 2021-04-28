global _ft_read
extern  ___error

section .text
_ft_read:
;read関数：ssize_t read(int fildes, void *buf, size_t nbyte);

;rdi: fd / rsi *buf / rdx byte
;初期化
  xor rax, rax
;raxにMacOSにおけるwrite関数の番号を格納し、syscall
  mov rax, 0x2000003
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