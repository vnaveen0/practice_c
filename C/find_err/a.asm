
a.out:     file format elf64-x86-64


Disassembly of section .init:

00000000004003c8 <_init>:
  4003c8:	48 83 ec 08          	sub    $0x8,%rsp
  4003cc:	48 8b 05 25 0c 20 00 	mov    0x200c25(%rip),%rax        # 600ff8 <_DYNAMIC+0x1d0>
  4003d3:	48 85 c0             	test   %rax,%rax
  4003d6:	74 05                	je     4003dd <_init+0x15>
  4003d8:	e8 43 00 00 00       	callq  400420 <__libc_start_main@plt+0x10>
  4003dd:	48 83 c4 08          	add    $0x8,%rsp
  4003e1:	c3                   	retq   

Disassembly of section .plt:

00000000004003f0 <printf@plt-0x10>:
  4003f0:	ff 35 12 0c 20 00    	pushq  0x200c12(%rip)        # 601008 <_GLOBAL_OFFSET_TABLE_+0x8>
  4003f6:	ff 25 14 0c 20 00    	jmpq   *0x200c14(%rip)        # 601010 <_GLOBAL_OFFSET_TABLE_+0x10>
  4003fc:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400400 <printf@plt>:
  400400:	ff 25 12 0c 20 00    	jmpq   *0x200c12(%rip)        # 601018 <_GLOBAL_OFFSET_TABLE_+0x18>
  400406:	68 00 00 00 00       	pushq  $0x0
  40040b:	e9 e0 ff ff ff       	jmpq   4003f0 <_init+0x28>

0000000000400410 <__libc_start_main@plt>:
  400410:	ff 25 0a 0c 20 00    	jmpq   *0x200c0a(%rip)        # 601020 <_GLOBAL_OFFSET_TABLE_+0x20>
  400416:	68 01 00 00 00       	pushq  $0x1
  40041b:	e9 d0 ff ff ff       	jmpq   4003f0 <_init+0x28>

Disassembly of section .plt.got:

0000000000400420 <.plt.got>:
  400420:	ff 25 d2 0b 20 00    	jmpq   *0x200bd2(%rip)        # 600ff8 <_DYNAMIC+0x1d0>
  400426:	66 90                	xchg   %ax,%ax

Disassembly of section .text:

0000000000400430 <_start>:
  400430:	31 ed                	xor    %ebp,%ebp
  400432:	49 89 d1             	mov    %rdx,%r9
  400435:	5e                   	pop    %rsi
  400436:	48 89 e2             	mov    %rsp,%rdx
  400439:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  40043d:	50                   	push   %rax
  40043e:	54                   	push   %rsp
  40043f:	49 c7 c0 00 06 40 00 	mov    $0x400600,%r8
  400446:	48 c7 c1 90 05 40 00 	mov    $0x400590,%rcx
  40044d:	48 c7 c7 3b 05 40 00 	mov    $0x40053b,%rdi
  400454:	e8 b7 ff ff ff       	callq  400410 <__libc_start_main@plt>
  400459:	f4                   	hlt    
  40045a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400460 <deregister_tm_clones>:
  400460:	b8 3f 10 60 00       	mov    $0x60103f,%eax
  400465:	55                   	push   %rbp
  400466:	48 2d 38 10 60 00    	sub    $0x601038,%rax
  40046c:	48 83 f8 0e          	cmp    $0xe,%rax
  400470:	48 89 e5             	mov    %rsp,%rbp
  400473:	76 1b                	jbe    400490 <deregister_tm_clones+0x30>
  400475:	b8 00 00 00 00       	mov    $0x0,%eax
  40047a:	48 85 c0             	test   %rax,%rax
  40047d:	74 11                	je     400490 <deregister_tm_clones+0x30>
  40047f:	5d                   	pop    %rbp
  400480:	bf 38 10 60 00       	mov    $0x601038,%edi
  400485:	ff e0                	jmpq   *%rax
  400487:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
  40048e:	00 00 
  400490:	5d                   	pop    %rbp
  400491:	c3                   	retq   
  400492:	0f 1f 40 00          	nopl   0x0(%rax)
  400496:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  40049d:	00 00 00 

00000000004004a0 <register_tm_clones>:
  4004a0:	be 38 10 60 00       	mov    $0x601038,%esi
  4004a5:	55                   	push   %rbp
  4004a6:	48 81 ee 38 10 60 00 	sub    $0x601038,%rsi
  4004ad:	48 c1 fe 03          	sar    $0x3,%rsi
  4004b1:	48 89 e5             	mov    %rsp,%rbp
  4004b4:	48 89 f0             	mov    %rsi,%rax
  4004b7:	48 c1 e8 3f          	shr    $0x3f,%rax
  4004bb:	48 01 c6             	add    %rax,%rsi
  4004be:	48 d1 fe             	sar    %rsi
  4004c1:	74 15                	je     4004d8 <register_tm_clones+0x38>
  4004c3:	b8 00 00 00 00       	mov    $0x0,%eax
  4004c8:	48 85 c0             	test   %rax,%rax
  4004cb:	74 0b                	je     4004d8 <register_tm_clones+0x38>
  4004cd:	5d                   	pop    %rbp
  4004ce:	bf 38 10 60 00       	mov    $0x601038,%edi
  4004d3:	ff e0                	jmpq   *%rax
  4004d5:	0f 1f 00             	nopl   (%rax)
  4004d8:	5d                   	pop    %rbp
  4004d9:	c3                   	retq   
  4004da:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000004004e0 <__do_global_dtors_aux>:
  4004e0:	80 3d 51 0b 20 00 00 	cmpb   $0x0,0x200b51(%rip)        # 601038 <__TMC_END__>
  4004e7:	75 11                	jne    4004fa <__do_global_dtors_aux+0x1a>
  4004e9:	55                   	push   %rbp
  4004ea:	48 89 e5             	mov    %rsp,%rbp
  4004ed:	e8 6e ff ff ff       	callq  400460 <deregister_tm_clones>
  4004f2:	5d                   	pop    %rbp
  4004f3:	c6 05 3e 0b 20 00 01 	movb   $0x1,0x200b3e(%rip)        # 601038 <__TMC_END__>
  4004fa:	f3 c3                	repz retq 
  4004fc:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400500 <frame_dummy>:
  400500:	bf 20 0e 60 00       	mov    $0x600e20,%edi
  400505:	48 83 3f 00          	cmpq   $0x0,(%rdi)
  400509:	75 05                	jne    400510 <frame_dummy+0x10>
  40050b:	eb 93                	jmp    4004a0 <register_tm_clones>
  40050d:	0f 1f 00             	nopl   (%rax)
  400510:	b8 00 00 00 00       	mov    $0x0,%eax
  400515:	48 85 c0             	test   %rax,%rax
  400518:	74 f1                	je     40050b <frame_dummy+0xb>
  40051a:	55                   	push   %rbp
  40051b:	48 89 e5             	mov    %rsp,%rbp
  40051e:	ff d0                	callq  *%rax
  400520:	5d                   	pop    %rbp
  400521:	e9 7a ff ff ff       	jmpq   4004a0 <register_tm_clones>

0000000000400526 <func>:
#include <stdio.h>


int func()
{
  400526:	55                   	push   %rbp
  400527:	48 89 e5             	mov    %rsp,%rbp
  static int i=0;
  return i++;
  40052a:	8b 05 0c 0b 20 00    	mov    0x200b0c(%rip),%eax        # 60103c <i.2285>
  400530:	8d 50 01             	lea    0x1(%rax),%edx
  400533:	89 15 03 0b 20 00    	mov    %edx,0x200b03(%rip)        # 60103c <i.2285>

}
  400539:	5d                   	pop    %rbp
  40053a:	c3                   	retq   

000000000040053b <main>:

int main()
{
  40053b:	55                   	push   %rbp
  40053c:	48 89 e5             	mov    %rsp,%rbp
  40053f:	41 54                	push   %r12
  400541:	53                   	push   %rbx
  printf("%d  %d %d",func(), func(), func());
  400542:	b8 00 00 00 00       	mov    $0x0,%eax
  400547:	e8 da ff ff ff       	callq  400526 <func>
  40054c:	41 89 c4             	mov    %eax,%r12d
  40054f:	b8 00 00 00 00       	mov    $0x0,%eax
  400554:	e8 cd ff ff ff       	callq  400526 <func>
  400559:	89 c3                	mov    %eax,%ebx
  40055b:	b8 00 00 00 00       	mov    $0x0,%eax
  400560:	e8 c1 ff ff ff       	callq  400526 <func>
  400565:	44 89 e1             	mov    %r12d,%ecx
  400568:	89 da                	mov    %ebx,%edx
  40056a:	89 c6                	mov    %eax,%esi
  40056c:	bf 14 06 40 00       	mov    $0x400614,%edi
  400571:	b8 00 00 00 00       	mov    $0x0,%eax
  400576:	e8 85 fe ff ff       	callq  400400 <printf@plt>
  return 0;
  40057b:	b8 00 00 00 00       	mov    $0x0,%eax
}
  400580:	5b                   	pop    %rbx
  400581:	41 5c                	pop    %r12
  400583:	5d                   	pop    %rbp
  400584:	c3                   	retq   
  400585:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  40058c:	00 00 00 
  40058f:	90                   	nop

0000000000400590 <__libc_csu_init>:
  400590:	41 57                	push   %r15
  400592:	41 56                	push   %r14
  400594:	41 89 ff             	mov    %edi,%r15d
  400597:	41 55                	push   %r13
  400599:	41 54                	push   %r12
  40059b:	4c 8d 25 6e 08 20 00 	lea    0x20086e(%rip),%r12        # 600e10 <__frame_dummy_init_array_entry>
  4005a2:	55                   	push   %rbp
  4005a3:	48 8d 2d 6e 08 20 00 	lea    0x20086e(%rip),%rbp        # 600e18 <__init_array_end>
  4005aa:	53                   	push   %rbx
  4005ab:	49 89 f6             	mov    %rsi,%r14
  4005ae:	49 89 d5             	mov    %rdx,%r13
  4005b1:	4c 29 e5             	sub    %r12,%rbp
  4005b4:	48 83 ec 08          	sub    $0x8,%rsp
  4005b8:	48 c1 fd 03          	sar    $0x3,%rbp
  4005bc:	e8 07 fe ff ff       	callq  4003c8 <_init>
  4005c1:	48 85 ed             	test   %rbp,%rbp
  4005c4:	74 20                	je     4005e6 <__libc_csu_init+0x56>
  4005c6:	31 db                	xor    %ebx,%ebx
  4005c8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  4005cf:	00 
  4005d0:	4c 89 ea             	mov    %r13,%rdx
  4005d3:	4c 89 f6             	mov    %r14,%rsi
  4005d6:	44 89 ff             	mov    %r15d,%edi
  4005d9:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  4005dd:	48 83 c3 01          	add    $0x1,%rbx
  4005e1:	48 39 eb             	cmp    %rbp,%rbx
  4005e4:	75 ea                	jne    4005d0 <__libc_csu_init+0x40>
  4005e6:	48 83 c4 08          	add    $0x8,%rsp
  4005ea:	5b                   	pop    %rbx
  4005eb:	5d                   	pop    %rbp
  4005ec:	41 5c                	pop    %r12
  4005ee:	41 5d                	pop    %r13
  4005f0:	41 5e                	pop    %r14
  4005f2:	41 5f                	pop    %r15
  4005f4:	c3                   	retq   
  4005f5:	90                   	nop
  4005f6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  4005fd:	00 00 00 

0000000000400600 <__libc_csu_fini>:
  400600:	f3 c3                	repz retq 

Disassembly of section .fini:

0000000000400604 <_fini>:
  400604:	48 83 ec 08          	sub    $0x8,%rsp
  400608:	48 83 c4 08          	add    $0x8,%rsp
  40060c:	c3                   	retq   
