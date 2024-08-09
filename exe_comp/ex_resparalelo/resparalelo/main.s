	.file	"main.c"
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC1:
	.ascii "\0"
	.align 8
.LC2:
	.ascii "Informe o n\372mero de resistores: \0"
.LC3:
	.ascii "%f\0"
	.align 8
.LC4:
	.ascii "Entre com o valor do resistor %d: \12\0"
	.align 8
.LC6:
	.ascii "O valor da Resistencia equivalente \351 %.2f: \12\0"
.LC7:
	.ascii "Deseja sair? <S>/<N>\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB13:
	.file 1 "D:/Users/Marco/Documents/2020_2/Codeblocks/resparalelo/main.c"
	.loc 1 5 1
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
	.loc 1 5 1
	call	__main
.LVL0:
	.loc 1 6 14
	pxor	%xmm0, %xmm0
	movss	%xmm0, -4(%rbp)
	.loc 1 8 5
	leaq	.LC1(%rip), %rdx
	movl	$2, %ecx
	call	setlocale
.L5:
	.loc 1 11 9
	leaq	.LC2(%rip), %rcx
	call	puts
	.loc 1 12 9
	leaq	-16(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC3(%rip), %rcx
	call	scanf
	.loc 1 13 14
	movb	$1, -5(%rbp)
	.loc 1 13 9
	jmp	.L2
.L3:
	.loc 1 15 13 discriminator 3
	movsbl	-5(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC4(%rip), %rcx
	call	printf
	.loc 1 16 13 discriminator 3
	leaq	-12(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC3(%rip), %rcx
	call	scanf
	.loc 1 17 26 discriminator 3
	movss	-12(%rbp), %xmm1
	movss	.LC5(%rip), %xmm0
	divss	%xmm1, %xmm0
	.loc 1 17 17 discriminator 3
	movss	-4(%rbp), %xmm1
	addss	%xmm1, %xmm0
	movss	%xmm0, -4(%rbp)
	.loc 1 13 28 discriminator 3
	movzbl	-5(%rbp), %eax
	addl	$1, %eax
	movb	%al, -5(%rbp)
.L2:
	.loc 1 13 19 discriminator 1
	movsbl	-5(%rbp), %eax
	cvtsi2ss	%eax, %xmm1
	movss	-16(%rbp), %xmm0
	.loc 1 13 9 discriminator 1
	comiss	%xmm1, %xmm0
	jnb	.L3
	.loc 1 19 13
	movss	.LC5(%rip), %xmm0
	divss	-4(%rbp), %xmm0
	movss	%xmm0, -4(%rbp)
	.loc 1 20 9
	cvtss2sd	-4(%rbp), %xmm0
	movq	%xmm0, %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm1
	movq	%rax, %rdx
	leaq	.LC6(%rip), %rcx
	call	printf
	.loc 1 21 13
	pxor	%xmm0, %xmm0
	movss	%xmm0, -4(%rbp)
	.loc 1 22 9
	movl	$0, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
.LVL1:
	movq	%rax, %rcx
	call	fflush
	.loc 1 23 9
	leaq	.LC7(%rip), %rcx
	call	printf
	.loc 1 24 14
	call	getchar
	.loc 1 24 13
	movb	%al, -6(%rbp)
	.loc 1 25 5
	cmpb	$83, -6(%rbp)
	je	.L4
	.loc 1 25 22 discriminator 1
	cmpb	$115, -6(%rbp)
	jne	.L5
.L4:
	.loc 1 26 12
	movl	$0, %eax
	.loc 1 27 1
	addq	$48, %rsp
	popq	%rbp
	.cfi_restore 6
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.seh_endproc
	.section .rdata,"dr"
	.align 4
.LC5:
	.long	1065353216
	.text
.Letext0:
	.file 2 "C:/Program Files/CodeBlocks/MinGW/x86_64-w64-mingw32/include/stdio.h"
	.section	.debug_info,"dr"
.Ldebug_info0:
	.long	0x1e7
	.word	0x4
	.secrel32	.Ldebug_abbrev0
	.byte	0x8
	.uleb128 0x1
	.ascii "GNU C17 8.1.0 -mtune=core2 -march=nocona -g\0"
	.byte	0xc
	.ascii "D:\\Users\\Marco\\Documents\\2020_2\\Codeblocks\\resparalelo\\main.c\0"
	.ascii "D:\\\\Users\\\\Marco\\\\Documents\\\\2020_2\\\\Codeblocks\\\\resparalelo\0"
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
	.uleb128 0x3
	.ascii "main\0"
	.byte	0x1
	.byte	0x4
	.byte	0x5
	.long	0x111
	.quad	.LFB13
	.quad	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.long	0x1d5
	.uleb128 0x4
	.ascii "r\0"
	.byte	0x1
	.byte	0x6
	.byte	0xb
	.long	0x1d5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.ascii "req\0"
	.byte	0x1
	.byte	0x6
	.byte	0xe
	.long	0x1d5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.ascii "resis\0"
	.byte	0x1
	.byte	0x6
	.byte	0x15
	.long	0x1d5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.ascii "resp\0"
	.byte	0x1
	.byte	0x7
	.byte	0xa
	.long	0xc8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -22
	.uleb128 0x4
	.ascii "i\0"
	.byte	0x1
	.byte	0x7
	.byte	0xf
	.long	0xc8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -21
	.uleb128 0x5
	.quad	.LVL1
	.long	0x1de
	.byte	0
	.uleb128 0x2
	.byte	0x4
	.byte	0x4
	.ascii "float\0"
	.uleb128 0x6
	.secrel32	.LASF0
	.secrel32	.LASF0
	.byte	0x2
	.byte	0x52
	.byte	0x42
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
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x4
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
	.uleb128 0x5
	.uleb128 0x4109
	.byte	0
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x31
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x6e
	.uleb128 0xe
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
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
.LASF0:
	.ascii "__acrt_iob_func\0"
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	setlocale;	.scl	2;	.type	32;	.endef
	.def	puts;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	fflush;	.scl	2;	.type	32;	.endef
	.def	getchar;	.scl	2;	.type	32;	.endef
