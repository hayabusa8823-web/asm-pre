global  _ft_strlen
section  .text
_ft_strlen:
;rdi:*str
;カウンタを初期化
  mov rcx, 0
;例外処理→いらない気がする
  cmp rdi, 0
  je  error
;ループ処理 & ジャッジ
loop:
  cmp byte[rdi + rcx], 0
  je  return
  inc rcx
  jmp loop
;戻り値を返す
return:
  mov rax, rcx
  ret
error:
  mov rax, 0
  ret 