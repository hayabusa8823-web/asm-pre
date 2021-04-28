global  _ft_strdup
extern  _malloc
extern  _ft_strlen
extern  _ft_strcpy

section .text
_ft_strdup:
;char *strdup(const char *s1);
;rdi: *s1

;初期化
  ;戻り値
  xor rax, rax
  ;rcx：カウンタ
  xor rcx, rcx
  ;tmpのような動き方
  xor rdx, rdx

; 例外処理
  cmp rdi, 0
  je  error
  ;スタックに一旦、投げておく
  push rdi
  call  _ft_strlen
  mov rdi, rax
  inc rdi
  mov rax, 0
;mallocをしてメモリを確保
  call  _malloc
;loopで戻り値となるraxに値を代入していく
  pop rsi
  mov rdi, rax
  call  _ft_strcpy
  ret 

;   pop rdi
; loop:
;   cmp byte[rdi + rcx], 0
;   je  end
;   mov dl, byte[rdi + rcx]
;   mov byte[rax + rcx], dl
;   inc rcx  
;   jmp loop

;エラー処理
error:
  mov rax, 0
  ret

; end:
;   mov byte[rax + rcx], 0
;   ret