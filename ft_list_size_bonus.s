global  _ft_list_size

section .text
_ft_list_size:
;
;カウンタ初期化
  xor rax, rax 
  xor rcx, rcx
;例外処理
  cmp rdi, 0
  je  end

loop:
  cmp rdi, 0
  jz  end
  mov rdi, [rdi - 32]
  inc rcx
  jmp loop

end:
  mov rax, rcx
  ret