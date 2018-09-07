CREATE SCHEMA IF NOT EXISTS `ATV1DB` DEFAULT CHARACTER SET utf8 ;
USE `ATV1DB` ;

-- -----------------------------------------------------
-- tablea`CARRO`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS`CARRO` (
  `numero_chassi` INT NOT NULL,
  `modelo` VARCHAR(20) NULL,
  `fabricante` VARCHAR(20) NULL,
  `preco` DECIMAL(10,2) NULL,
  PRIMARY KEY (`numero_chassi`));


-- -----------------------------------------------------
-- tablea`OPCAO`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS`OPCAO` (
  `id` INT NOT NULL AUTO_INCREMENT,
  `numero_chassi` INT NOT NULL,
  `nome` VARCHAR(45) NULL,
  `preco` DECIMAL(10,2) NULL,
  INDEX `fk_opcao_CARRO1_idx` (`numero_chassi` ASC),
  PRIMARY KEY (`id`),
  CONSTRAINT `fk_opcao_CARRO1`
    FOREIGN KEY (`numero_chassi`)
    REFERENCES`CARRO` (`numero_chassi`));


-- -----------------------------------------------------
-- tablea`VENDEDOR`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS`VENDEDOR` (
  `cod_vendedor` INT NOT NULL AUTO_INCREMENT,
  `nome` VARCHAR(50) NULL,
  `telefone` VARCHAR(20) NULL,
  PRIMARY KEY (`cod_vendedor`));


-- -----------------------------------------------------
-- tablea`VENDA`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS`VENDA` (
  `id` INT NOT NULL AUTO_INCREMENT,
  `cod_vendedor` INT NOT NULL,
  `numero_chassi` INT NOT NULL,
  `data` DATE NULL,
  `preco` DECIMAL(10,2) NULL,
  INDEX `fk_venda_VENDEDOR1_idx` (`cod_vendedor` ASC),
  INDEX `fk_venda_CARRO1_idx` (`numero_chassi` ASC),
  PRIMARY KEY (`id`),
  CONSTRAINT `fk_venda_VENDEDOR1`
    FOREIGN KEY (`cod_vendedor`)
    REFERENCES`VENDEDOR` (`cod_vendedor`),
  CONSTRAINT `fk_venda_CARRO1`
    FOREIGN KEY (`numero_chassi`)
    REFERENCES`CARRO` (`numero_chassi`));


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;

-- -----------------------------------------------------
-- dados da tabela`CARRO`
-- -----------------------------------------------------
USE `ATV1DB`;
INSERT INTO`CARRO` (`numero_chassi`, `modelo`, `fabricante`, `preco`) VALUES (1, 'Palio', 'fiat', 33000,00);
INSERT INTO`CARRO` (`numero_chassi`, `modelo`, `fabricante`, `preco`) VALUES (2, 'Civic', 'Hoda', 75000,00);


-- -----------------------------------------------------
-- dados da tabela`OPCAO`
-- -----------------------------------------------------
START TRANSACTION;
INSERT INTO`OPCAO` (`id`, `numero_chassi`, `nome`, `preco`) VALUES (DEFAULT, 1, 'CENTRAL', 5000,00);
INSERT INTO`OPCAO` (`id`, `numero_chassi`, `nome`, `preco`) VALUES (DEFAULT, 2, 'GPS', 3000,00);



-- -----------------------------------------------------
-- dados da tabela`VENDEDOR`
-- -----------------------------------------------------
INSERT INTO`VENDEDOR` (`cod_vendedor`, `nome`, `telefone`) VALUES (1, 'Arthur', '999999999');


-- -----------------------------------------------------
-- dados da tabela`VENDA`
-- -----------------------------------------------------
INSERT INTO`VENDA` (`id`, `cod_vendedor`, `numero_chassi`, `data`, `preco`) VALUES (DEFAULT, 1, 1, '2018-08-08', 33000,00);


-- -----------------------------------------------------
-- dados da tabela`VENDA` com violação
-- -----------------------------------------------------
INSERT INTO`VENDA` (`id`, `cod_vendedor`, `numero_chassi`, `data`, `preco`) VALUES (DEFAULT, 2, 2, '2018-08-08', 75000,00);