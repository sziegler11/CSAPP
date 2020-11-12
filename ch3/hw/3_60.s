	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15, 6
	.globl	_loop                   ## -- Begin function loop
	.p2align	4, 0x90
_loop:                                  ## @loop
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	$0, -24(%rbp)
	movq	$1, -32(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	cmpq	$0, -32(%rbp)
	je	LBB0_4
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	movq	-32(%rbp), %rax
	orq	-24(%rbp), %rax
	movq	%rax, -24(%rbp)
## %bb.3:                               ##   in Loop: Header=BB0_1 Depth=1
	movq	-32(%rbp), %rax
	movq	-16(%rbp), %rcx
	andq	$255, %rcx
                                        ## kill: def $cl killed $rcx
	shlq	%cl, %rax
	movq	%rax, -32(%rbp)
	jmp	LBB0_1
LBB0_4:
	movq	-24(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
.subsections_via_symbols
