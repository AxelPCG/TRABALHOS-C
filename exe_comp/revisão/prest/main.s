	.file	"main.c"
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 8
.LC0:
	.ascii "Entre com o valor da mercadoria: \0"
.LC1:
	.ascii "%f\0"
	.align 8
.LC3:
	.ascii "Entrada: R$ %.2f + 2 parcelas de: R$ %d.\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB16:
	.file 1 "D:/Users/Marco/Documents/2020_2/Codeblocks/prest/main.c"
	.loc 1 6 1
	.cfi_startproc
	pushq	%rbp
	.seh_pushreg	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	.loc 1 6 1
	call	__main
.LVL0:
	.loc 1 9 5
	leaq	.LC0(%rip), %rcx
	call	printf
	.loc 1 10 5
	leaq	-12(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC1(%rip), %rcx
	call	scanf
	.loc 1 11 32
	movss	-12(%rbp), %xmm0
	movss	.LC2(%rip), %xmm1
	divss	%xmm1, %xmm0
	.loc 1 11 14
	cvttss2si	%xmm0, %eax
	movl	%eax, -4(%rbp)
	.loc 1 12 32
	movss	-12(%rbp), %xmm0
	.loc 1 12 35
	movl	-4(%rbp), %eax
	addl	%eax, %eax
	.loc 1 12 32
	cvtsi2ss	%eax, %xmm1
	.loc 1 12 13
	subss	%xmm1, %xmm0
	movss	%xmm0, -8(%rbp)
	.loc 1 13 5
	cvtss2sd	-8(%rbp), %xmm0
	movl	-4(%rbp), %eax
	movq	%xmm0, %rdx
	movq	%rdx, %rcx
	movl	%eax, %r8d
	movq	%rcx, %xmm1
	leaq	.LC3(%rip), %rcx
	call	printf
	.loc 1 14 12
	movl	$0, %eax
	.loc 1 15 1
	addq	$48, %rsp
	popq	%rbp
	.cfi_restore 6
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.seh_endproc
	.section .rdata,"dr"
	.align 4
.LC2:
	.long	1077936128
	.text
.Letext0:
	.file 2 "C:/Program Files/CodeBlocks/MinGW/x86_64-w64-mingw32/include/stdlib.h"
	.file 3 "C:/Program Files/CodeBlocks/MinGW/x86_64-w64-mingw32/include/malloc.h"
	.file 4 "C:/Program Files/CodeBlocks/MinGW/x86_64-w64-mingw32/include/math.h"
	.file 5 "C:/Program Files/CodeBlocks/MinGW/x86_64-w64-mingw32/include/crtdefs.h"
	.section	.debug_info,"dr"
.Ldebug_info0:
	.long	0x3bc
	.word	0x4
	.secrel32	.Ldebug_abbrev0
	.byte	0x8
	.uleb128 0x1
	.ascii "GNU C17 8.1.0 -mtune=core2 -march=nocona -g\0"
	.byte	0xc
	.ascii "D:\\Users\\Marco\\Documents\\2020_2\\Codeblocks\\prest\\main.c\0"
	.ascii "D:\\\\Users\\\\Marco\\\\Documents\\\\2020_2\\\\Codeblocks\\\\prest\0"
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.secrel32	.Ldebug_line0
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.ascii "char\0"
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.ascii "long long unsigned int\0"
	.uleb128 0x2
	.byte	0x8
	.byte	0x5
	.ascii "long long int\0"
	.uleb128 0x3
	.ascii "wchar_t\0"
	.byte	0x5
	.byte	0x62
	.byte	0x18
	.long	0xff
	.uleb128 0x2
	.byte	0x2
	.byte	0x7
	.ascii "short unsigned int\0"
	.uleb128 0x2
	.byte	0x4
	.byte	0x5
	.ascii "int\0"
	.uleb128 0x2
	.byte	0x4
	.byte	0x5
	.ascii "long int\0"
	.uleb128 0x4
	.byte	0x8
	.long	0xbc
	.uleb128 0x4
	.byte	0x8
	.long	0xef
	.uleb128 0x4
	.byte	0x8
	.long	0x115
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.ascii "unsigned int\0"
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.ascii "long unsigned int\0"
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.ascii "unsigned char\0"
	.uleb128 0x2
	.byte	0x8
	.byte	0x4
	.ascii "double\0"
	.uleb128 0x2
	.byte	0x4
	.byte	0x4
	.ascii "float\0"
	.uleb128 0x2
	.byte	0x10
	.byte	0x4
	.ascii "long double\0"
	.uleb128 0x5
	.ascii "__imp___mb_cur_max\0"
	.byte	0x2
	.byte	0x73
	.byte	0x10
	.long	0x134
	.uleb128 0x6
	.long	0x128
	.long	0x1bd
	.uleb128 0x7
	.long	0xc4
	.byte	0
	.byte	0
	.uleb128 0x5
	.ascii "_sys_errlist\0"
	.byte	0x2
	.byte	0xac
	.byte	0x2b
	.long	0x1ad
	.uleb128 0x5
	.ascii "_sys_nerr\0"
	.byte	0x2
	.byte	0xad
	.byte	0x29
	.long	0x115
	.uleb128 0x8
	.ascii "__imp___argc\0"
	.byte	0x2
	.word	0x119
	.byte	0x10
	.long	0x134
	.uleb128 0x8
	.ascii "__imp___argv\0"
	.byte	0x2
	.word	0x11d
	.byte	0x13
	.long	0x210
	.uleb128 0x4
	.byte	0x8
	.long	0x216
	.uleb128 0x4
	.byte	0x8
	.long	0x128
	.uleb128 0x8
	.ascii "__imp___wargv\0"
	.byte	0x2
	.word	0x121
	.byte	0x16
	.long	0x233
	.uleb128 0x4
	.byte	0x8
	.long	0x239
	.uleb128 0x4
	.byte	0x8
	.long	0x12e
	.uleb128 0x8
	.ascii "__imp__environ\0"
	.byte	0x2
	.word	0x127
	.byte	0x13
	.long	0x210
	.uleb128 0x8
	.ascii "__imp__wenviron\0"
	.byte	0x2
	.word	0x12c
	.byte	0x16
	.long	0x233
	.uleb128 0x8
	.ascii "__imp__pgmptr\0"
	.byte	0x2
	.word	0x132
	.byte	0x12
	.long	0x216
	.uleb128 0x8
	.ascii "__imp__wpgmptr\0"
	.byte	0x2
	.word	0x137
	.byte	0x15
	.long	0x239
	.uleb128 0x8
	.ascii "__imp__osplatform\0"
	.byte	0x2
	.word	0x13c
	.byte	0x19
	.long	0x2ba
	.uleb128 0x4
	.byte	0x8
	.long	0x13a
	.uleb128 0x8
	.ascii "__imp__osver\0"
	.byte	0x2
	.word	0x141
	.byte	0x19
	.long	0x2ba
	.uleb128 0x8
	.ascii "__imp__winver\0"
	.byte	0x2
	.word	0x146
	.byte	0x19
	.long	0x2ba
	.uleb128 0x8
	.ascii "__imp__winmajor\0"
	.byte	0x2
	.word	0x14b
	.byte	0x19
	.long	0x2ba
	.uleb128 0x8
	.ascii "__imp__winminor\0"
	.byte	0x2
	.word	0x150
	.byte	0x19
	.long	0x2ba
	.uleb128 0x5
	.ascii "_amblksiz\0"
	.byte	0x3
	.byte	0x35
	.byte	0x17
	.long	0x13a
	.uleb128 0x4
	.byte	0x8
	.long	0x170
	.uleb128 0x5
	.ascii "__imp__HUGE\0"
	.byte	0x4
	.byte	0x9c
	.byte	0x13
	.long	0x331
	.uleb128 0x8
	.ascii "signgam\0"
	.byte	0x4
	.word	0x393
	.byte	0xe
	.long	0x115
	.uleb128 0x9
	.ascii "main\0"
	.byte	0x1
	.byte	0x5
	.byte	0x5
	.long	0x115
	.quad	.LFB16
	.quad	.LFE16-.LFB16
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xa
	.ascii "valor_mercadoria\0"
	.byte	0x1
	.byte	0x7
	.byte	0xb
	.long	0x17a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0xa
	.ascii "entrada\0"
	.byte	0x1
	.byte	0x7
	.byte	0x1d
	.long	0x17a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xa
	.ascii "parcelas\0"
	.byte	0x1
	.byte	0x8
	.byte	0x9
	.long	0x115
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.section	.debug_abbrev,"dr"
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0x8
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x1b
	.uleb128 0x8
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2116
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"dr"
	.long	0x2c
	.word	0x2
	.secrel32	.Ldebug_info0
	.byte	0x8
	.byte	0
	.word	0
	.word	0
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.quad	0
	.quad	0
	.section	.debug_line,"dr"
.Ldebug_line0:
	.section	.debug_str,"dr"
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
