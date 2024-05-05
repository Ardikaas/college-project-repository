.model tiny
.code
org 100h
main proc
  mov ah,9
  mov dx,offset hello_massage
  int 21h
  retn

hello_massage db 'Hello, world!$'
main endp
end main