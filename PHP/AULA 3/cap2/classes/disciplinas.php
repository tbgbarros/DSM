<?php 
class Caracteristica 
{ 
	private $nomedisc; 
	private $disciplina;
    private $qntpessoas; 
	 
	public function __construct( $nomedisc, $disciplina, $qntpessoas ) 
	{ 
	    $this->nomedisc   = $nomedisc; 
	    $this->disciplina  = $disciplina; 
        $this->qntpessoas  = $qntpessoas;
	}   
	 
	public function getNomeDisc() 
	{ 
	    return $this->nomedisc; 
	} 
	 
	public function getDisciplina() 
	{ 
	    return $this->disciplina; 
	} 

    public function getQntpessoas() 
	{ 
	    return $this->qntpessoas; 
	} 
} 

