global  _ft_strcmp
section .text
_ft_strcmp:
;rdi *s1, rsi *s2
;カウンタを初期化
  mov rcx, 0
  mov rax, 0
  mov r8, 0
;loop処理、ジャッジ
loop:
  mov al, byte[rdi + rcx]
  mov r8b, byte[rsi + rcx]
  cmp al, 0
  je  compare
  cmp r8b, 0
  je  compare
  cmp rax, r8
  jne compare
  inc rcx
  jmp loop
;戻り値を返す
;0の場合
compare:
  sub rax, r8
  cmp rax, 0
  jg  plus
  cmp rax, 0
  jl  minus
  ret
plus:
  mov rax, 1
  ret
minus:
  mov rax, -1
  ret