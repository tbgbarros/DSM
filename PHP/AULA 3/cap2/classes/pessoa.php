<?php 
 class Pessoa
{ 
	private $nome; 
	private $sobrenome; 
	private $cpf;
	private $idade;
	private $caracteristicas;
	
	

	public function __construct($nome, $sobrenome, $cpf, $idade ) 
    { 
		$this->caracteristicas = [];
        if (is_string($nome)) { 
            $this->nome = $nome; 
        } 
		if (is_string($sobrenome)) { 
            $this->sobrenome = $sobrenome; 
        } 
		if (is_numeric($cpf)) { 
            $this->cpf = $cpf; 
        } 
		if (is_numeric($idade)) { 
            $this->idade = $idade; 
        } 
    } 
			public function getNome() 
			{ 
				return $this->nome; 
			} 
			public function getSobrenome() 
			{ 
				return $this->sobrenome; 
			} 
			public function getCpf() 
			{ 
				return $this->cpf; 
			} 
			public function getIdade() 
			{ 
				return $this->idade; 
			} 
			public function addSalaVirtual( $nome, $disciplina, $qntpessoas ) 
			{ 
				$this->caracteristicas[] = new Caracteristica($nome, $disciplina, $qntpessoas); 
			} 
}
?>