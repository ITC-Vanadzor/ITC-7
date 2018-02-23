	.file	"battle_new.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
	.align 8
.LC0:
	.string	"Please iput size of field n = "
.LC1:
	.string	"Please input a["
.LC2:
	.string	"]["
.LC3:
	.string	"]= "
.LC4:
	.string	"Count of boat is equal "
	.text
	.globl	main
	.type	main, @function
main:
.LFB971:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r15
	pushq	%r14
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	subq	$120, %rsp
	.cfi_offset 15, -24
	.cfi_offset 14, -32
	.cfi_offset 13, -40
	.cfi_offset 12, -48
	.cfi_offset 3, -56
	movq	%rsp, %rax
	movq	%rax, -136(%rbp)
	movl	$-1, -96(%rbp)
.L2:
	movl	$.LC0, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-96(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt3cin, %edi
	call	_ZNSirsERi
	movl	-96(%rbp), %eax
	cmpl	$1, %eax
	jle	.L2
	movl	-96(%rbp), %eax
	cltq
	subq	$1, %rax
	movq	%rax, -72(%rbp)
	movq	%rax, %rdx
	addq	$1, %rdx
	movq	%rdx, -160(%rbp)
	movq	$0, -152(%rbp)
	movq	%rax, %rdx
	addq	$1, %rdx
	leaq	0(,%rdx,4), %rbx
	movl	-96(%rbp), %edx
	movslq	%edx, %rdx
	leaq	-1(%rdx), %rsi
	movq	%rsi, -64(%rbp)
	movq	%rax, -160(%rbp)
	movq	%rax, %rdx
	addq	$1, %rdx
	movq	%rdx, -112(%rbp)
	movq	$0, -104(%rbp)
	movq	%rsi, %rdx
	addq	$1, %rdx
	movq	%rdx, -128(%rbp)
	movq	$0, -120(%rbp)
	movq	-112(%rbp), %r8
	movq	-104(%rbp), %r9
	movq	%r9, %rcx
	movq	-128(%rbp), %r10
	movq	-120(%rbp), %r11
	imulq	%r10, %rcx
	movq	%r11, %rdx
	imulq	%r8, %rdx
	leaq	(%rcx,%rdx), %rdi
	movq	%r8, %rax
	mulq	%r10
	movq	%rdx, %rcx
	movq	%rax, %rdx
	addq	%rcx, %rdi
	movq	%rdi, %rcx
	movq	-160(%rbp), %r9
	movq	%r9, %rdx
	addq	$1, %rdx
	movq	%rdx, %r14
	movl	$0, %r15d
	movq	%rsi, %rdx
	addq	$1, %rdx
	movq	%rdx, %r12
	movl	$0, %r13d
	movq	%r15, %rcx
	imulq	%r12, %rcx
	movq	%r13, %rdx
	imulq	%r14, %rdx
	leaq	(%rcx,%rdx), %rdi
	movq	%r14, %rax
	mulq	%r12
	movq	%rdx, %rcx
	movq	%rax, %rdx
	addq	%rcx, %rdi
	movq	%rdi, %rcx
	movq	%r9, %rax
	leaq	1(%rax), %rdx
	movq	%rsi, %rax
	addq	$1, %rax
	imulq	%rdx, %rax
	salq	$2, %rax
	leaq	3(%rax), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %ecx
	movl	$0, %edx
	divq	%rcx
	imulq	$16, %rax, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -56(%rbp)
	movl	$0, -92(%rbp)
	jmp	.L3
.L6:
	movl	$0, -88(%rbp)
	jmp	.L4
.L5:
	movl	-88(%rbp), %eax
	leal	1(%rax), %r12d
	movl	-92(%rbp), %eax
	leal	1(%rax), %r13d
	movl	$.LC1, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%r13d, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$.LC2, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%r12d, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$.LC3, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rbx, %rcx
	shrq	$2, %rcx
	movl	-88(%rbp), %eax
	movslq	%eax, %rdx
	movl	-92(%rbp), %eax
	cltq
	imulq	%rcx, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	movq	-56(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, %rsi
	movl	$_ZSt3cin, %edi
	call	_ZNSirsERi
	addl	$1, -88(%rbp)
.L4:
	movl	-96(%rbp), %eax
	cmpl	%eax, -88(%rbp)
	jl	.L5
	addl	$1, -92(%rbp)
.L3:
	movl	-96(%rbp), %eax
	cmpl	%eax, -92(%rbp)
	jl	.L6
	movl	$0, -84(%rbp)
	movl	$0, -80(%rbp)
	jmp	.L7
.L15:
	movl	$0, -76(%rbp)
	jmp	.L8
.L14:
	movq	%rbx, %rsi
	shrq	$2, %rsi
	movq	-56(%rbp), %rax
	movl	-76(%rbp), %edx
	movslq	%edx, %rcx
	movl	-80(%rbp), %edx
	movslq	%edx, %rdx
	imulq	%rsi, %rdx
	addq	%rcx, %rdx
	movl	(%rax,%rdx,4), %eax
	cmpl	$1, %eax
	jne	.L9
	cmpl	$0, -80(%rbp)
	je	.L10
	movq	%rbx, %rsi
	shrq	$2, %rsi
	movl	-80(%rbp), %eax
	leal	-1(%rax), %edi
	movq	-56(%rbp), %rax
	movl	-76(%rbp), %edx
	movslq	%edx, %rcx
	movslq	%edi, %rdx
	imulq	%rsi, %rdx
	addq	%rcx, %rdx
	movl	(%rax,%rdx,4), %eax
	testl	%eax, %eax
	jne	.L9
.L10:
	jmp	.L12
.L13:
	addl	$1, -76(%rbp)
.L12:
	movq	%rbx, %rsi
	shrq	$2, %rsi
	movq	-56(%rbp), %rax
	movl	-76(%rbp), %edx
	movslq	%edx, %rcx
	movl	-80(%rbp), %edx
	movslq	%edx, %rdx
	imulq	%rsi, %rdx
	addq	%rcx, %rdx
	movl	(%rax,%rdx,4), %eax
	testl	%eax, %eax
	je	.L13
	movl	-96(%rbp), %eax
	subl	$1, %eax
	cmpl	-76(%rbp), %eax
	je	.L13
	addl	$1, -84(%rbp)
.L9:
	addl	$1, -76(%rbp)
.L8:
	movl	-96(%rbp), %eax
	cmpl	%eax, -76(%rbp)
	jl	.L14
	addl	$1, -80(%rbp)
.L7:
	movl	-96(%rbp), %eax
	cmpl	%eax, -80(%rbp)
	jl	.L15
	movl	$.LC4, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-84(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$0, %eax
	movq	-136(%rbp), %rsp
	leaq	-40(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE971:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB980:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L17
	cmpl	$65535, -8(%rbp)
	jne	.L17
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L17:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE980:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB981:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE981:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
