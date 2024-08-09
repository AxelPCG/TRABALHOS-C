	.file	"main.c"
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 8
.LC0:
	.ascii "Digite os 3 valores desejados para calculo de media aritmetica e hamonica: \0"
.LC1:
	.ascii "%f %f %f\0"
	.align 8
.LC4:
	.ascii "Media aritmetica: %.2f\12Media harmonica: %.2f\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB13:
	.file 1 "D:/Users/Marco/Documents/2020_2/Codeblocks/medias/main.c"
	.loc 1 5 1
	.cfi_startproc
	pushq	%rbp
	.seh_pushreg	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	.seh_stackalloc	64
	.seh_endprologue
	.loc 1 5 1
	call	__main
.LVL0:
	.loc 1 7 5
	leaq	.LC0(%rip), %rcx
	call	printf
	.loc 1 8 5
	leaq	-20(%rbp), %rcx
	leaq	-16(%rbp), %rdx
	leaq	-12(%rbp), %rax
	movq	%rcx, %r9
	movq	%rdx, %r8
	movq	%rax, %rdx
	leaq	.LC1(%rip), %rcx
	call	scanf
	.loc 1 9 25
	movss	-12(%rbp), %xmm1
	movss	-16(%rbp), %xmm0
	addss	%xmm0, %xmm1
	.loc 1 9 27
	movss	-20(%rbp), %xmm0
	addss	%xmm1, %xmm0
	.loc 1 9 21
	movss	.LC2(%rip), %xmm1
	divss	%xmm1, %xmm0
	movss	%xmm0, -4(%rbp)
	.loc 1 10 26
	movss	-12(%rbp), %xmm1
	movss	.LC3(%rip), %xmm0
	divss	%xmm1, %xmm0
	movaps	%xmm0, %xmm1
	.loc 1 10 32
	movss	-16(%rbp), %xmm2
	movss	.LC3(%rip), %xmm0
	divss	%xmm2, %xmm0
	.loc 1 10 29
	addss	%xmm0, %xmm1
	.loc 1 10 37
	movss	-20(%rbp), %xmm2
	movss	.LC3(%rip), %xmm0
	divss	%xmm2, %xmm0
	.loc 1 10 35
	addss	%xmm0, %xmm1
	.loc 1 10 20
	movss	.LC2(%rip), %xmm0
	divss	%xmm1, %xmm0
	movss	%xmm0, -8(%rbp)
	.loc 1 11 5
	cvtss2sd	-8(%rbp), %xmm1
	cvtss2sd	-4(%rbp), %xmm0
	movq	%xmm1, %rax
	movq	%rax, %rdx
	movq	%rdx, %rcx
	movq	%rax, %xmm1
	movq	%xmm0, %rax
	movq	%rax, %rdx
	movq	%rcx, %xmm2
	movq	%xmm1, %r8
	movq	%rdx, %xmm1
	movq	%rax, %rdx
	leaq	.LC4(%rip), %rcx
	call	printf
	.loc 1 12 12
	movl	$0, %eax
	.loc 1 13 1
	addq	$64, %rsp
	popq	%rbp
	.cfi_restore 6
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.seh_endproc
	.section .rdata,"dr"
	.align 4
.LC2:
	.long	1077936128
	.align 4
.LC3:
	.long	1065353216
	.text
.Letext0:
	.file 2 "C:/Program Files/CodeBlocks/MinGW/x86_64-w64-mingw32/include/math.h"
	.section	.debug_info,"dr"
.Ldebug_info0:
	.long	0x218
	.word	0x4
	.secrel32	.Ldebug_abbrev0
	.byte	0x8
	.uleb128 0x1
	.ascii "GNU C17 8.1.0 -mtune=core2 -march=nocona -g\0"
	.byte	0xc
	.ascii "D:\\Users\\Marco\\Documents\\2020_2\\Codeblocks\\medias\\main.c\0"
	.ascii "D:\\\\Users\\\\Marco\\\\Documents\\\\2020_2\\\\Codeblocks\\\\medias\0"
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
	.uleb128 0x3
	.byte	0x8
	.long	0x150
	.uleb128 0x4
	.ascii "__imp__HUGE\0"
	.byte	0x2
	.byte	0x9c
	.byte	0x13
	.long	0x172
	.uleb128 0x5
	.ascii "signgam\0"
	.byte	0x2
	.word	0x393
	.byte	0xe
	.long	0x107
	.uleb128 0x6
	.ascii "main\0"
	.byte	0x1
	.byte	0x4
	.byte	0x5
	.long	0x107
	.quad	.LFB13
	.quad	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x7
	.ascii "media_aritmetica\0"
	.byte	0x1
	.byte	0x6
	.byte	0xb
	.long	0x15a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x7
	.ascii "media_harmonica\0"
	.byte	0x1
	.byte	0x6
	.byte	0x1d
	.long	0x15a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x7
	.ascii "a\0"
	.byte	0x1
	.byte	0x6
	.byte	0x2e
	.long	0x15a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x7
	.ascii "b\0"
	.byte	0x1
	.byte	0x6
	.byte	0x31
	.long	0x15a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x7
	.ascii "c\0"
	.byte	0x1
	.byte	0x6
	.byte	0x34
	.long	0x15a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
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
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
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
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
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
	.uleb128 0x6
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
	.uleb128 0x7
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
