global  _ft_list_push_front
extern  _malloc

section .text
_ft_list_push_front:

;ft_list_push_front(t_list **begin_list, void *data);
;rdi:**list / rsi : *data
;初期化
  xor rax, rax
  xor rdx, rdx
  xor rcx, rcx
;例外処理
  cmp rdi,0
  je  end
  cmp rsi, 0
  je  end

; mallocして領域を確保
;raxに戻り値、rdiにサイズ
;先にrdiをpushしておく
  push rdi
  push rsi
  ; mov rcx, rdi
  mov rdi, 16
  call  _malloc
;raxがNULLの場合、終了
  cmp  rax, 0
  je  end
;mallocで確保したメモリに*dataを入れる
  pop rsi
  mov [rax], rsi
; *listの先頭アドレスを一旦rcxに入れておく
  pop rdx
  mov rcx, [rdx]
; mallocで確保したメモリの+8バイトにrcx（*list）を入れてあげる
  mov [rax + 8], rcx
; 本来の*listの先頭にmallocで確保した領域を入れてあげる
  mov [rdx], rax

end:
    ret