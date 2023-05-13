-- phpMyAdmin SQL Dump
-- version 5.0.2
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Tempo de geração: 04-Nov-2022 às 02:27
-- Versão do servidor: 10.4.13-MariaDB
-- versão do PHP: 7.4.8

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Banco de dados: `exportacao`
--

-- --------------------------------------------------------

--
-- Estrutura da tabela `paismineral`
--

CREATE TABLE `paismineral` (
  `nomepais` varchar(20) DEFAULT NULL,
  `nomemineral` varchar(20) DEFAULT NULL,
  `reserva` varchar(20) DEFAULT NULL,
  `producao` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Extraindo dados da tabela `paismineral`
--

INSERT INTO `paismineral` (`nomepais`, `nomemineral`, `reserva`, `producao`) VALUES
('Eua', 'ouro', '100000', '240'),
('Peru', 'Ouro', '500000', '170'),
('Argentina', 'Ouro', '30000', '40'),
('Brasil', 'Ouro', '20000', '37'),
('México', 'prata', '2800000', '2748'),
('Peru', 'Prata', '2000000', '2200 '),
('Argentina', 'Prata', '450000 ', '300'),
('Eua', 'Platina', '1200', '4.39');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
