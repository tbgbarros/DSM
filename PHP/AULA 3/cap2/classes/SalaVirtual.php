<?php 
require_once 'disciplinas.php';
require_once 'pessoa.php';


$p1 = new Pessoa('Jose', 'Joaquim', 51801168805, 20); 
$p2 = new Pessoa('Thiago', 'Barros', 51801168810, 34); 
$p3 = new Pessoa('Mariana', 'Ferreira', 551801158805, 20); 
$p4 = new Pessoa('Guilherme', 'Afonso', 51801120805, 20);

// composição 
$p1->addSalaVirtual( 'Sala 1', 'DSM', 60); 
$p2->addSalaVirtual( 'Sala 2', 'Meio Ambiente', 50 ); 
$p3->addSalaVirtual( 'Sala 1', 'DSM', 60); 
$p4->addSalaVirtual( 'Sala 2', 'Meio Ambiente', 50 );






print 'Nome: '. $p1->getNome() . '<br>'.PHP_EOL; 
print 'Sobrenome: '  . $p1->getSobrenome() . '<br>'.PHP_EOL; 
print 'CPF: '    . $p1->getCpf() . '<br>'.PHP_EOL;
print 'Idade: '    . $p1->getIdade() . '<br>'.PHP_EOL;
print 'Sala: ' . $p1->getNomeDisc() . '<br>'.PHP_EOL;
print 'Disciplina: ' . $p1->getDisciplina() . '<br>'.PHP_EOL;
print 'Alunos Qnt: ' . $p1->getQntpessoas() . '<br>'.PHP_EOL;


?>
