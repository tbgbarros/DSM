-- phpMyAdmin SQL Dump
-- version 5.0.2
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Tempo de geração: 19/11/2022 às 02:28
-- Versão do servidor: 10.4.13-MariaDB
-- Versão do PHP: 7.4.8

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Banco de dados: `aula3`
--

-- --------------------------------------------------------

--
-- Estrutura para tabela `departamento`
--

CREATE TABLE `departamento` (
  `idDepartamento` int(11) NOT NULL,
  `dNome` varchar(255) NOT NULL,
  `Orcamento` decimal(10,0) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Despejando dados para a tabela `departamento`
--

INSERT INTO `departamento` (`idDepartamento`, `dNome`, `Orcamento`) VALUES
(1, 'Financeiro', '15000'),
(2, 'TI', '60000'),
(3, 'Gestão de Pessoas', '150000'),
(5, 'Jurídico', '1000'),
(6, 'compras', '100000');

-- --------------------------------------------------------

--
-- Estrutura para tabela `funcionario`
--

CREATE TABLE `funcionario` (
  `idFuncionario` int(11) NOT NULL,
  `Nome` varchar(45) NOT NULL,
  `Sobrenome` varchar(45) NOT NULL,
  `idDepartamento` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Despejando dados para a tabela `funcionario`
--

INSERT INTO `funcionario` (`idFuncionario`, `Nome`, `Sobrenome`, `idDepartamento`) VALUES
(123, 'Julio', 'Silva', 1),
(152, 'Arnaldo', 'Coelho', 1),
(222, 'Carol', 'Ferreira', 2),
(326, 'João', 'Silveira', 2),
(331, 'George', 'de la Rocha', 3),
(332, 'José', 'Oliveira', 1),
(369, 'Paulo', 'Aguiar', 2),
(546, 'José', 'Pereira', 2),
(631, 'David', 'Luz', 3),
(654, 'Zacarias', 'Ferreira', 2),
(745, 'Eric', 'Estrada', 2),
(788, 'Juliano', 'Souza', 6),
(845, 'Elizabeth', 'Coelho', 1),
(846, 'Joaquim', 'Goveia', 1);

--
-- Índices de tabelas apagadas
--

--
-- Índices de tabela `departamento`
--
ALTER TABLE `departamento`
  ADD PRIMARY KEY (`idDepartamento`);

--
-- Índices de tabela `funcionario`
--
ALTER TABLE `funcionario`
  ADD PRIMARY KEY (`idFuncionario`),
  ADD KEY `fk_Funcionario_Departamento` (`idDepartamento`);

--
-- Restrições para dumps de tabelas
--

--
-- Restrições para tabelas `funcionario`
--
ALTER TABLE `funcionario`
  ADD CONSTRAINT `fk_Funcionario_Departamento` FOREIGN KEY (`idDepartamento`) REFERENCES `departamento` (`idDepartamento`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
