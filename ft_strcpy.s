global  _ft_strcpy
section .text
_ft_strcpy:
;rdi *str1, rsi: *str2

;カウンタを初期化
  mov rcx, 0
  push rdi
; 例外処理：いらないかも

;ループ処理 str2が0になるまで
loop:
  cmp byte[rsi + rcx], 0
  je  return
  ;*dst++ = *src++
  movsb
;  inc rcx
  jmp loop
;戻り値を返す str1
return:
  mov byte[rdi],0
  pop rax
  ret